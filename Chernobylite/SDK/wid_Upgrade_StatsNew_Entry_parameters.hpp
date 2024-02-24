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

// 0x448 (0x448 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.FindProperPropertiesPerFocus
struct UWid_Upgrade_StatsNew_Entry_C_FindProperPropertiesPerFocus_Params
{
public:
	class UDataTable*                            InDataTable;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Upgrades_Main_C*                  InFocusedType;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCGAttachmentProperties               OutProperties;                                     // 0x10(0x38)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CC9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo; // 0x50(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo; // 0xA0(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo; // 0xE8(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo; // 0x138(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo; // 0x188(0x48)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               K2Node_MakeStruct_CGAttachmentProperties;          // 0x1D8(0x38)(UObjectWrapper)
	struct FCGAttachmentProperties               K2Node_MakeStruct_CGAttachmentProperties_1;        // 0x210(0x38)(UObjectWrapper)
	struct FCGAttachmentProperties               K2Node_MakeStruct_CGAttachmentProperties_2;        // 0x248(0x38)(UObjectWrapper)
	struct FCGAttachmentProperties               K2Node_MakeStruct_CGAttachmentProperties_3;        // 0x280(0x38)(UObjectWrapper)
	struct FCGAttachmentProperties               K2Node_MakeStruct_CGAttachmentProperties_4;        // 0x2B8(0x38)(UObjectWrapper)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x2F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x2F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x2F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x2F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x2F7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FCGAttachmentProperties               K2Node_MakeStruct_CGAttachmentProperties_5;        // 0x2F8(0x38)(UObjectWrapper)
	struct FCGAttachmentProperties               K2Node_Select_Default;                             // 0x330(0x38)(None)
	struct FCGAttachmentProperties               K2Node_Select_Default_1;                           // 0x368(0x38)(None)
	struct FCGAttachmentProperties               K2Node_Select_Default_2;                           // 0x3A0(0x38)(None)
	struct FCGAttachmentProperties               K2Node_Select_Default_3;                           // 0x3D8(0x38)(None)
	struct FCGAttachmentProperties               K2Node_Select_Default_4;                           // 0x410(0x38)(None)
};

// 0x5B9 (0x5B9 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.CalculateSignificantChange
struct UWid_Upgrade_StatsNew_Entry_C_CalculateSignificantChange_Params
{
public:
	class UWid_Upgrades_Main_C*                  InOuter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             InCurrentWeapon;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            InFocusDatatable;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InFocusRow;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OutSignificantChange;                              // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            _focusDT;                                          // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        _significantChange;                                // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  _focusRow;                                         // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGWeapon*                             _currentWeapon;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Upgrades_Main_C*                  _outer;                                            // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        _significantVal;                                   // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E8B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGMagazineProperties                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x60(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E92[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGHandleProperties                   CallFunc_GetDataTableRowFromName_OutRow_1;         // 0xB8(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E96[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGTriggerProperties                  CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x110(0x48)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGBarrelProperties                   CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x160(0x48)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x1B0(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo; // 0x208(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo; // 0x258(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo; // 0x2A0(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo; // 0x2F0(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo; // 0x340(0x48)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindAttachmentProperties_bOutFound;       // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindAttachmentProperties_ReturnValue;     // 0x398(0x38)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ED4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindProperPropertiesPerFocus_OutProperties; // 0x3D8(0x38)(None)
	bool                                         CallFunc_FindAttachmentProperties_bOutFound_1;     // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ED6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindAttachmentProperties_ReturnValue_1;   // 0x418(0x38)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindProperPropertiesPerFocus_OutProperties_1; // 0x460(0x38)(None)
	bool                                         CallFunc_FindAttachmentProperties_bOutFound_2;     // 0x498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindAttachmentProperties_ReturnValue_2;   // 0x4A0(0x38)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EFB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindProperPropertiesPerFocus_OutProperties_2; // 0x4E8(0x38)(None)
	bool                                         CallFunc_FindAttachmentProperties_bOutFound_3;     // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindAttachmentProperties_ReturnValue_3;   // 0x528(0x38)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_6;            // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_7;            // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGAttachmentProperties               CallFunc_FindProperPropertiesPerFocus_OutProperties_3; // 0x570(0x38)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_5;    // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F18[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_8;            // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x5B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_9;            // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x83C (0x83C - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.CalculateSignificantValue
struct UWid_Upgrade_StatsNew_Entry_C_CalculateSignificantValue_Params
{
public:
	class UWid_Upgrades_Main_C*                  InOuter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             InCurrentWeapon;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OutSignificantValue;                               // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGWeapon*                             _currentWeapon;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Upgrades_Main_C*                  _outer;                                            // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo; // 0x30(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo; // 0x80(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo; // 0xC8(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo; // 0x118(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo; // 0x168(0x48)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_1; // 0x1C0(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_1; // 0x210(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_1; // 0x258(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_1; // 0x2A8(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_1; // 0x2F8(0x48)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_120F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1216[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_2; // 0x350(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_2; // 0x3A0(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_2; // 0x3E8(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_2; // 0x438(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_2; // 0x488(0x48)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x4D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1252[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x4E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1257[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_3; // 0x4F0(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_3; // 0x540(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_3; // 0x588(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_3; // 0x5D8(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_3; // 0x628(0x48)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_10;                // 0x678(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_2;                      // 0x67C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_127F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_11;                // 0x684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_12;                // 0x688(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_128E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetUpgradeStructsOfCurrentWeapon_OutScopeInfo_4; // 0x690(0x50)(None)
	struct FCGBarrelProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutBarrelInfo_4; // 0x6E0(0x48)(None)
	struct FCGMagazineProperties                 CallFunc_GetUpgradeStructsOfCurrentWeapon_OutMagazineInfo_4; // 0x728(0x50)(None)
	struct FCGHandleProperties                   CallFunc_GetUpgradeStructsOfCurrentWeapon_OutStockInfo_4; // 0x778(0x50)(None)
	struct FCGTriggerProperties                  CallFunc_GetUpgradeStructsOfCurrentWeapon_OutTriggerInfo_4; // 0x7C8(0x48)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_13;                // 0x810(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_14;                // 0x814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_15;                // 0x818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_3;                      // 0x81C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_16;                // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_17;                // 0x828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_18;                // 0x82C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_19;                // 0x830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_20;                // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_4;                      // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Update_Craft
struct UWid_Upgrade_StatsNew_Entry_C_Update_Craft_Params
{
public:
	class UWid_Upgrades_Main_C*                  InOuter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Update_Focus
struct UWid_Upgrade_StatsNew_Entry_C_Update_Focus_Params
{
public:
	class UWid_Upgrades_Main_C*                  InOuter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            InDataTable;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InRow;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.UpdateCurrentChangeValue
struct UWid_Upgrade_StatsNew_Entry_C_UpdateCurrentChangeValue_Params
{
public:
	class UDataTable*                            InDataTable;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InRow;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Tick
struct UWid_Upgrade_StatsNew_Entry_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.Update_CategoryEnter
struct UWid_Upgrade_StatsNew_Entry_C_Update_CategoryEnter_Params
{
public:
	class UWid_Upgrades_Main_C*                  Outer;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x234 (0x234 - 0x0)
// Function wid_Upgrade_StatsNew_Entry.wid_Upgrade_StatsNew_Entry_C.ExecuteUbergraph_wid_Upgrade_StatsNew_Entry
struct UWid_Upgrade_StatsNew_Entry_C_ExecuteUbergraph_wid_Upgrade_StatsNew_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          Temp_struct_Variable;                              // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_167F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Upgrades_Main_C*                  K2Node_CustomEvent_InOuter_1;                      // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         CallFunc_GetCurrentWeapon_OutCurrentWeapon;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         CallFunc_GetCurrentWeapon_OutCurrentWeapon_1;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon;                     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon_1;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Upgrades_Main_C*                  K2Node_CustomEvent_InOuter;                        // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_CustomEvent_InDatatable_1;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_InRow_1;                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_CalculateSignificantValue_OutSignificantValue; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGActiveItem*                         CallFunc_GetCurrentWeapon_OutCurrentWeapon_2;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_CustomEvent_InDatatable;                    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_InRow;                          // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon_2;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CalculateSignificantChange_OutSignificantChange; // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         CallFunc_GetCurrentWeapon_OutCurrentWeapon_3;      // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xE8(0x18)(None)
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon_3;                   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1701[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Abs_Int_ReturnValue;                      // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1704[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1718[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x178(0x18)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_174F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x194(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Upgrades_Main_C*                  K2Node_CustomEvent_Outer;                          // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_2;                           // 0x1D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x1E8(0x28)(UObjectWrapper)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue_1;                  // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


