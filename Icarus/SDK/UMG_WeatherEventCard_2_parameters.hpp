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

// 0xC2 (0xC2 - 0x0)
// Function UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C.UpdateWeatherEvent
struct UUMG_WeatherEventCard_2_C_UpdateWeatherEvent_Params
{
public:
	struct FWeatherEventsRowHandle               NewEvent;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FIcarusWeatherEvent                   CallFunc_GetWeatherEventsStruct_WeatherEvents;     // 0x18(0xA8)(None)
	enum class EValid                            CallFunc_GetWeatherEventsStruct_Paths;             // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C.OnAnimationStarted
struct UUMG_WeatherEventCard_2_C_OnAnimationStarted_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C.ExecuteUbergraph_UMG_WeatherEventCard_2
struct UUMG_WeatherEventCard_2_C_ExecuteUbergraph_UMG_WeatherEventCard_2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Event_Animation;                            // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


