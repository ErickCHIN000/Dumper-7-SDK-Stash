#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function WeatherRow.WeatherRow_C.AddWeather
struct UWeatherRow_C_AddWeather_Params
{
public:
	class FName                                  AddWeatherEvent;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WeatherRow.WeatherRow_C.ExecuteUbergraph_WeatherRow
struct UWeatherRow_C_ExecuteUbergraph_WeatherRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_AddWeatherEvent;                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_205C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x10(0x18)(None)
	struct FWeatherEventsRowHandle               CallFunc_MakeWeatherEvents_ReturnValue;            // 0x28(0x18)(NoDestructor, HasGetValueTypeHash)
};

}
}


