let handleClick = (_event) => Js.log("clicked!");

[@bs.module] external src: string = "../../../static/images/white_50x100.png";

[@react.component]
let make = (~name) =>
  <div onClick={handleClick}>
    {ReasonReact.string(name)}
    <img src=(src)/>
  </div>;
