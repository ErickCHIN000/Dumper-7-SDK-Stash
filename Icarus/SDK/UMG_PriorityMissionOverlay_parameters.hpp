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

// 0xB5 (0xB5 - 0x0)
// Function UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C.SetTime
struct UUMG_PriorityMissionOverlay_C_SetTime_Params
{
public:
	TArray<class FString>                        Time;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                CallFunc_Array_Get_Item;                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x48(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x80(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x98(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x600 (0x600 - 0x0)
// Function UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C.Initialise
struct UUMG_PriorityMissionOverlay_C_Initialise_Params
{
public:
	struct FProspectListRowHandle                NewMission;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)(None)
	enum class EProspectRequiredTech             Temp_byte_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2771[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable;                          // 0x68(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_1;                        // 0x90(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_2;                        // 0xB8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_3;                        // 0xE0(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Temp_softobject_Variable_4;                        // 0x108(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x138(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x230(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             K2Node_Select_Default;                             // 0x500(0x28)(UObjectWrapper, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_3;                              // 0x530(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x548(0x18)(None)
	int32                                        CallFunc_GetRemainingProspectTime_ReturnValue;     // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_FormatRawSecondsToTimeLengthDigital_Time; // 0x568(0x10)(ReferenceParm)
	enum class EProspectRequiredTech             Temp_byte_Variable_3;                              // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x580(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x598(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x5D8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x5E8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C.BndEvt__UMG_PriorityMissionOverlay_PriorityMissionButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_PriorityMissionOverlay_C_BndEvt__UMG_PriorityMissionOverlay_PriorityMissionButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C.PreConstruct
struct UUMG_PriorityMissionOverlay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C.ExecuteUbergraph_UMG_PriorityMissionOverlay
struct UUMG_PriorityMissionOverlay_C_ExecuteUbergraph_UMG_PriorityMissionOverlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_PriorityMissionOverlay.UMG_PriorityMissionOverlay_C.StartMission__DelegateSignature
struct UUMG_PriorityMissionOverlay_C_StartMission__DelegateSignature_Params
{
public:
	struct FFactionMissionsRowHandle             Mission;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                Prospect;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


