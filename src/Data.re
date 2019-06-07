[@bs.module] external bagsJson: Js.Json.t = "../../../static/bags.json";

[@decco]
type bag = {
  id: string,
  name: string,
  [@decco.key "type"]
  type_: string,
  image: string,
};

[@decco]
type bagsJsonType = {bags: array(bag)};

let {bags} = bagsJsonType_decode(bagsJson) |> Belt.Result.getExn;
