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

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.GetStringForFilterSearch
struct UUMG_Talent_Workshop_C_GetStringForFilterSearch_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x4CB (0x4CB - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.UpdateUnlockCondition
struct UUMG_Talent_Workshop_C_UpdateUnlockCondition_Params
{
public:
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0x0(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4216[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_CastToProspectListRowHandle_Paths;        // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_421C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectListRowHandle                CallFunc_CastToProspectListRowHandle_ReturnValue;  // 0x144(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_421F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x168(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4236[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput;                  // 0x438(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTalentModelInterface*                 CallFunc_GetModel_ReturnValue;                     // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x458(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x498(0x10)(ReferenceParm)
	int32                                        CallFunc_GetTalentRank_ReturnValue;                // 0x4A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4246[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x4B0(0x18)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x4C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x4CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24F (0x24F - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.UpdateRequiredTalent
struct UUMG_Talent_Workshop_C_UpdateRequiredTalent_Params
{
public:
	struct FDLCPackageDataRowHandle              DLCRequired;                                       // 0x0(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FFeatureLevelsRowHandle               NewLocalVar_0;                                     // 0x18(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDLCPackageDataRowHandle              RequiredDLC;                                       // 0x30(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FTalentsRowHandle                     RequiredTalent;                                    // 0x48(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4371[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFeatureLevelsRowHandle               CallFunc_GetFeatureLevel_ReturnValue;              // 0x78(0x18)(NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_1;           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_438E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalentsRowHandle                     CallFunc_GetRequiredCharacterTalentForBlueprintUnlock_ReturnValue; // 0xB0(0x18)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue;                // 0xC8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0xD8(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFlagsMultiRowHandle                  CallFunc_Array_Get_Item;                           // 0x210(0x18)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDLCPackageDataRowHandle              CallFunc_ToDLCPackageDataRowHandle_ReturnValue;    // 0x22C(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue_2;           // 0x245(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43C1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AreAllFlagsSet_ReturnValue;               // 0x24D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x24E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.UpdateDesaturationMaterial
struct UUMG_Talent_Workshop_C_UpdateDesaturationMaterial_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4450[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4461[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.CanAffordItem
struct UUMG_Talent_Workshop_C_CanAffordItem_Params
{
public:
	TArray<struct FWorkshopCost>                 Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CanAffordItem;                                     // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorkshopCost                         CallFunc_Array_Get_Item;                           // 0x1C(0x1C)(NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4533[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_453E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerDataComponent*                  CallFunc_GetPlayerDataComponent_ReturnValue;       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClientOnly_CanAffordWorkshopCost_ReturnValue; // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x308 (0x308 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.GetItemReplicationCost
struct UUMG_Talent_Workshop_C_GetItemReplicationCost_Params
{
public:
	class FText                                  Cost;                                              // 0x0(0x18)(Parm, OutParm)
	class FText                                  Built;                                             // 0x18(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4647[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4661[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4678[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorkshopCost                         CallFunc_Array_Get_Item;                           // 0x8C(0x1C)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4685[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB0(0x40)(HasGetValueTypeHash)
	struct FMetaCurrency                         CallFunc_GetMetaCurrencyStruct_MetaCurrency;       // 0xF0(0xB8)(None)
	enum class EValid                            CallFunc_GetMetaCurrencyStruct_Paths;              // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4690[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1B0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1C8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1E0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x220(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x260(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x270(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x288(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2D8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x2F0(0x18)(None)
};

// 0x308 (0x308 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.GetItemResearchCost
struct UUMG_Talent_Workshop_C_GetItemResearchCost_Params
{
public:
	class FText                                  Cost;                                              // 0x0(0x18)(Parm, OutParm)
	class FText                                  Built;                                             // 0x18(0x18)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorkshopCost                         CallFunc_Array_Get_Item;                           // 0x8C(0x1C)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB0(0x40)(HasGetValueTypeHash)
	struct FMetaCurrency                         CallFunc_GetMetaCurrencyStruct_MetaCurrency;       // 0xF0(0xB8)(None)
	enum class EValid                            CallFunc_GetMetaCurrencyStruct_Paths;              // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_480A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1B0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1C8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1E0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x220(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x260(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x270(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x288(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2D8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x2F0(0x18)(None)
};

// 0x2EA (0x2EA - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.Setup
struct UUMG_Talent_Workshop_C_Setup_Params
{
public:
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x0(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x200(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x59 (0x59 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.Set Icon
struct UUMG_Talent_Workshop_C_Set_Icon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_496C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_SoftObjectReference_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x212A (0x212A - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.Refresh Hover State
struct UUMG_Talent_Workshop_C_Refresh_Hover_State_Params
{
public:
	struct FTalentView                           TalentView;                                        // 0x0(0x1BB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETalentState                      Temp_byte_Variable;                                // 0x1BB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x1BBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x1BC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x1BC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ButtonState                     CallFunc_GetButtonState_State;                     // 0x1BC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1BC6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A3D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTalentHoverConfig                    K2Node_Select_Default;                             // 0x1BC8(0x560)(None)
	enum class E_ButtonState                     CallFunc_GetButtonState_State_1;                   // 0x2128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.Set Hover States
struct UUMG_Talent_Workshop_C_Set_Hover_States_Params
{
public:
	struct FSlateColor                           TextColor;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           IconColor;                                         // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.OnStateChanged
struct UUMG_Talent_Workshop_C_OnStateChanged_Params
{
public:
	struct FTalentModelData                      NewState;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.OnMouseEnter
struct UUMG_Talent_Workshop_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.OnMouseLeave
struct UUMG_Talent_Workshop_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.SetSearchHighlight
struct UUMG_Talent_Workshop_C_SetSearchHighlight_Params
{
public:
	bool                                         bHighlighted;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2630 (0x2630 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.ExecuteUbergraph_UMG_Talent_Workshop
struct UUMG_Talent_Workshop_C_ExecuteUbergraph_UMG_Talent_Workshop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5040[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x18(0x98)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents;                 // 0xC0(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths;                   // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_CastToWorkshopItemsRowHandle_Paths;       // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5060[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorkshopItemsRowHandle               CallFunc_CastToWorkshopItemsRowHandle_ReturnValue; // 0x1F4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5065[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorkshopItem                         CallFunc_GetWorkshopItemsStruct_WorkshopItems;     // 0x210(0x68)(None)
	enum class EValid                            CallFunc_GetWorkshopItemsStruct_Paths;             // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x27A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5071[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_CustomEvent_TextColor;                      // 0x288(0x28)(None)
	struct FSlateColor                           K2Node_CustomEvent_IconColor;                      // 0x2B0(0x28)(None)
	struct FTalentModelData                      K2Node_Event_NewState;                             // 0x2D8(0x10)(NoDestructor)
	struct FTalentView                           CallFunc_GetTalentViewsStruct_TalentViews;         // 0x2E8(0x1BB8)(None)
	enum class EValid                            CallFunc_GetTalentViewsStruct_Paths;               // 0x1EA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x1EA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5093[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_BreakTalentModelData_Rank;                // 0x1EA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank;             // 0x1EA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State;               // 0x1EAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x1EB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x1EB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x1EC0(0x18)(None)
	int32                                        CallFunc_BreakTalentModelData_Rank_1;              // 0x1ED8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTalentModelData_MaxRank_1;           // 0x1EDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETalentState                      CallFunc_BreakTalentModelData_State_1;             // 0x1EE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x1EE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1EE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1EF0(0x10)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x1F00(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1F10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5105[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1F18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x1F20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1;     // 0x1F28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1F38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_512A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_1;         // 0x1F40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1F49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5150[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x1F50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_1; // 0x1F58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1F60(0x40)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1FA0(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1FB0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1FC0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1FD8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x2018(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x2058(0x10)(ReferenceParm)
	class FText                                  CallFunc_GetItemReplicationCost_Cost;              // 0x2068(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2080(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x2098(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x20D8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x2118(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x2128(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x2140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x2148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x2150(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x2188(0x70)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x21F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x21F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51C7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x2200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerDataComponent*                  CallFunc_GetPlayerDataComponent_ReturnValue;       // 0x2208(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x2210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid_1;      // 0x2211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_520C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_1;  // 0x2218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerDataComponent*                  CallFunc_GetPlayerDataComponent_ReturnValue_1;     // 0x2220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTalent                               CallFunc_GetTalentsStruct_Talents_1;               // 0x2228(0x130)(None)
	enum class EValid                            CallFunc_GetTalentsStruct_Paths_1;                 // 0x2358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0x2359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x235A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_CastToWorkshopItemsRowHandle_Paths_1;     // 0x235B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorkshopItemsRowHandle               CallFunc_CastToWorkshopItemsRowHandle_ReturnValue_1; // 0x235C(0x18)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2374(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_9;                    // 0x2384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_524E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemResearchCost_Cost;                 // 0x2388(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x23A0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x23E0(0x10)(ReferenceParm)
	bool                                         CallFunc_CanAffordItem_CanAffordItem;              // 0x23F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5262[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x23F8(0x18)(None)
	bool                                         CallFunc_CanAffordItem_CanAffordItem_1;            // 0x2410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5271[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x2418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2;     // 0x2420(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x2430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_528C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface_2;         // 0x2438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_529F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_2; // 0x2448(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x2450(0x70)(ConstParm)
	bool                                         CallFunc_EventInstanceIsValid_ReturnValue;         // 0x24C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x24C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_2;                // 0x24D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_1;      // 0x24D8(0x98)(ContainsInstancedReference)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_2;      // 0x2570(0x98)(ContainsInstancedReference)
	bool                                         K2Node_Event_bHighlighted;                         // 0x2608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x2609(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52F0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x260C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_52F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GenerateSearchStringForWorkshopTalent_ReturnValue; // 0x2620(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_Talent_Workshop.UMG_Talent_Workshop_C.OnTalentClicked__DelegateSignature
struct UUMG_Talent_Workshop_C_OnTalentClicked__DelegateSignature_Params
{
public:
	struct FTalentsRowHandle                     Talent;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


