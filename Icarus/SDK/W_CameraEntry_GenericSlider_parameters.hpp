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
// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.SetupSliderValues
struct UW_CameraEntry_GenericSlider_C_SetupSliderValues_Params
{
public:
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.InitFromSaveGameValue
struct UW_CameraEntry_GenericSlider_C_InitFromSaveGameValue_Params
{
public:
	struct FFPostProcessSaveData                 Value;                                             // 0x0(0x5)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4024[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.PreConstruct
struct UW_CameraEntry_GenericSlider_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C.ExecuteUbergraph_W_CameraEntry_GenericSlider
struct UW_CameraEntry_GenericSlider_C_ExecuteUbergraph_W_CameraEntry_GenericSlider_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


