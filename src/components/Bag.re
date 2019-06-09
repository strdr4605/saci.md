[@react.component]
let make = (~bag: Data.bag) =>
  <figure className="bag">
    <img src={bag.image} />
    <figcaption>
      <div> {ReasonReact.string("Name: " ++ bag.name)} </div>
      <div> {ReasonReact.string("Type: " ++ bag.type_)} </div>
    </figcaption>
  </figure>;
