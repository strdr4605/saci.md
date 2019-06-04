let handleClick = (_event) => Js.log("clicked!");

[@react.component]
let make = (~name) =>
  <div onClick={handleClick}>
    {ReasonReact.string(name)}
    <img src=(Images_Paths.white_50x100)/>
    {ReasonReact.string(Js.Json.stringify(Data.bagsJson))}
  </div>;
