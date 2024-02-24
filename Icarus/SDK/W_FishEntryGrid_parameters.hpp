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

// 0x1 (0x1 - 0x0)
// Function W_FishEntryGrid.W_FishEntryGrid_C.PreConstruct
struct UW_FishEntryGrid_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D8 (0x1D8 - 0x0)
// Function W_FishEntryGrid.W_FishEntryGrid_C.ExecuteUbergraph_W_FishEntryGrid
struct UW_FishEntryGrid_C_ExecuteUbergraph_W_FishEntryGrid_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishDataRowHandle                    CallFunc_StructToRowHandle_ReturnValue;            // 0x4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFishData                             CallFunc_GetFishDataStruct_FishData;               // 0x20(0xC8)(None)
	enum class EValid                            CallFunc_GetFishDataStruct_Paths;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xF8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x138(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x148(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBestiaryManagerComponent*             CallFunc_GetLocalBestiaryManagerComponent_ReturnValue; // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFishTypeTracking                     CallFunc_GetFishDetails_ReturnValue;               // 0x170(0x28)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x1A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x1B0(0x28)(None)
};

}
}


