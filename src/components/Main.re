let bags = Data.bags;

[@react.component]
let make = (~name) =>
  <div id="main">
    <header> <h1> {ReasonReact.string(name)} </h1> </header>
    <section>
      {bags |> Array.map(bag => <Bag bag key={bag.id} />) |> ReasonReact.array}
    </section>
  </div>;
