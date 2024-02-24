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

// 0x338 (0x338 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.GetEncounterDetailsViaInstanceID
struct UWBP_EncounterDetailsUpdater_C_GetEncounterDetailsViaInstanceID_Params
{
public:
	struct FGuid                                 EncounterInstance;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4575[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Encounter_UI_Details               Details;                                           // 0x20(0x200)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FEncounterDynamicData>         DynamicData;                                       // 0x220(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_457F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4582[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterDynamicData                 CallFunc_Array_Get_Item;                           // 0x248(0xB0)(None)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4589[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDA_EncounterDetailsDataAsset_C*       K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset; // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterProgressTracker*             CallFunc_GetComponentByClass_ReturnValue;          // 0x318(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4593[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterDynamicData>         CallFunc_GetAllDynamicData_OutData;                // 0x328(0x10)(ReferenceParm)
};

// 0x278 (0x278 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.SetupUIDataFromStruct
struct UWBP_EncounterDetailsUpdater_C_SetupUIDataFromStruct_Params
{
public:
	struct FS_Encounter_UI_Details               S_Encounter_UI_Details;                            // 0x0(0x200)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x200(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x210(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x228(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x240(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x260(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.PlayNotificationUpdate
struct UWBP_EncounterDetailsUpdater_C_PlayNotificationUpdate_Params
{
public:
	TScriptInterface<class IEncounterUIDataInterface> EncounterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                Notification;                                      // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.ShowPanel_HoverEncounter
struct UWBP_EncounterDetailsUpdater_C_ShowPanel_HoverEncounter_Params
{
public:
	TScriptInterface<class IEncounterUIDataInterface> EncounterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.RefreshEncounterPane
struct UWBP_EncounterDetailsUpdater_C_RefreshEncounterPane_Params
{
public:
	TScriptInterface<class IEncounterUIDataInterface> EncounterData;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                EncounterInstanceID;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.PreConstruct
struct UWBP_EncounterDetailsUpdater_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.RefreshViaEncounterID
struct UWBP_EncounterDetailsUpdater_C_RefreshViaEncounterID_Params
{
public:
	struct FGuid                                 EncounterInstanceID;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x330 (0x330 - 0x0)
// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.ExecuteUbergraph_WBP_EncounterDetailsUpdater
struct UWBP_EncounterDetailsUpdater_C_ExecuteUbergraph_WBP_EncounterDetailsUpdater_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEncounterDetailsViaInstanceID_Success; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_463E[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_Encounter_UI_Details               CallFunc_GetEncounterDetailsViaInstanceID_Details; // 0x10(0x200)(ContainsInstancedReference, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData_1;                // 0x218(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData;                  // 0x238(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_EncounterInstanceID_1;          // 0x248(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x258(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x270(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDetailsDataAssetBase*        CallFunc_GetEncounterDetailsDataAsset_EncounterDetailsAsset; // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDA_EncounterDetailsDataAsset_C*       K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset; // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4647[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_4;              // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData_2;                // 0x2A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                K2Node_CustomEvent_Notification;                   // 0x2B8(0x60)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_464B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 K2Node_CustomEvent_EncounterInstanceID;            // 0x31C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


