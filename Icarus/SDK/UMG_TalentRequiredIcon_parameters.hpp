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

// 0x34 (0x34 - 0x0)
// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.Override
struct UUMG_TalentRequiredIcon_C_Override_Params
{
public:
	struct FTalentsRowHandle                     Talent;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Unlocked;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_429D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCPackageDataRowHandle              DLCRequired;                                       // 0x1C(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.PreConstruct
struct UUMG_TalentRequiredIcon_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.DevLocked
struct UUMG_TalentRequiredIcon_C_DevLocked_Params
{
public:
	bool                                         DLC;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x578 (0x578 - 0x0)
// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.ExecuteUbergraph_UMG_TalentRequiredIcon
struct UUMG_TalentRequiredIcon_C_ExecuteUbergraph_UMG_TalentRequiredIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_444C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4459[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue_1;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue_2;                     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable_2;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4469[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x40(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x68(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x80(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x98(0x18)(None)
	struct FTalentsRowHandle                     K2Node_CustomEvent_Talent;                         // 0xB0(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Unlocked;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_447C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCPackageDataRowHandle              K2Node_CustomEvent_DLCRequired;                    // 0xCC(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4485[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCPackageData                       CallFunc_GetDLCPackageDataStruct_DLCPackageData;   // 0xE8(0x48)(None)
	enum class EValid                            CallFunc_GetDLCPackageDataStruct_Paths;            // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4494[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x138(0x40)(HasGetValueTypeHash)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x178(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x2B0(0x28)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2D8(0x40)(HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x320(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_4;            // 0x338(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x350(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x368(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x380(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x3C0(0x40)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_DLC;                            // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x408(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x418(0x18)(None)
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue_3;                     // 0x430(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_5;            // 0x438(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_6;            // 0x450(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_7;            // 0x468(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0x480(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x498(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x4D8(0x10)(ReferenceParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x4E8(0x28)(None)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x510(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x528(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x550(0x28)(None)
};

}
}


