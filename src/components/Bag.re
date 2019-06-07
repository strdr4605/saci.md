[@react.component]
let make = (~bag: Data.bag) =>
  <div className="bag">
    <div> {ReasonReact.string("Name: " ++ bag.name)} </div>
    <div> {ReasonReact.string("Type: " ++ bag.type_)} </div>
    <img src={bag.image} height="200" width="160" />
  </div>;
