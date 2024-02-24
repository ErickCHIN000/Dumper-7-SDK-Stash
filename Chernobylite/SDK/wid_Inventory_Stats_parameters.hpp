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

// 0xC (0xC - 0x0)
// Function wid_Inventory_Stats.wid_Inventory_Stats_C.AddValueRef
struct UWid_Inventory_Stats_C_AddValueRef_Params
{
public:
	int32                                        ObjRef;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddValue;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCA (0xCA - 0x0)
// Function wid_Inventory_Stats.wid_Inventory_Stats_C.GetiInventoryEntry
struct UWid_Inventory_Stats_C_GetiInventoryEntry_Params
{
public:
	class FName                                  A;                                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       NewLocalVar_01;                                    // 0x8(0x30)(Parm, OutParm)
	struct FInventoryEntry                       NewLocalVar_0;                                     // 0x38(0x30)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x80(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x98(0x30)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x83D (0x83D - 0x0)
// Function wid_Inventory_Stats.wid_Inventory_Stats_C.Update
struct UWid_Inventory_Stats_C_Update_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemUID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Ammo_0;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Recoil_0;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Sway_0;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Range_0;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage_0;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Ammo;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Recoil;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Sway;                                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Range;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Damage;                                            // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, float>                   DetectedStats;                                     // 0x38(0x50)(Edit, BlueprintVisible)
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetiInventoryEntry_NewLocalVar_01;        // 0x90(0x30)(None)
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow;           // 0xC0(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2370[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue_1;                     // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue_2;                     // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue_3;                     // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class ACGActiveItem>             K2Node_ClassDynamicCast_AsCGActive_Item;           // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class Aba_aa_Armor_Template_C>   K2Node_ClassDynamicCast_AsBa_Aa_Armor_Template;    // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGWeapon>                 K2Node_ClassDynamicCast_AsCGWeapon;                // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable;                              // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FArmorInfo                            CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x278(0x78)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_1;                            // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_2;                            // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue_4;                     // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue_5;                     // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_240C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2429[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_Stats_Entry_C*          CallFunc_Create_ReturnValue_6;                     // 0x340(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatEntry                            CallFunc_Array_Get_Item;                           // 0x348(0x18)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_243C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatInfo                             CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x368(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x398(0x18)(None)
	class UDataTable*                            Temp_object_Variable_3;                            // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x3B8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2464[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x3D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2479[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x3E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_4;                            // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_4;            // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2508[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_3;      // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_4;      // 0x430(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_252D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x444(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2533[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FArmorStatInfo                        CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x450(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2542[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Find_Value;                           // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2550[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_5;            // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2569[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_5;                            // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_6;                            // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_257F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_5;      // 0x4A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         CallFunc_FindActiveItemInInventory_ReturnValue;    // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon;                     // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_makarov_00_C*                   K2Node_DynamicCast_AsBa_Aa_Makarov_00;             // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgrades_ReturnValue;                  // 0x4E0(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default;                             // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_260D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_crossbow_00_C*                  K2Node_DynamicCast_AsBa_Aa_Crossbow_00;            // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2621[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default_1;                           // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_aa_railgun_00_C*                   K2Node_DynamicCast_AsBa_Aa_Railgun_00;             // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_262E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default_2;                           // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_aa_nagant_00_C*                    K2Node_DynamicCast_AsBa_Aa_Nagant_00;              // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_263B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_mp133_00_C*                     K2Node_DynamicCast_AsBa_Aa_Mp_133_00;              // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_264C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default_3;                           // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_aa_ak47_00_C*                      K2Node_DynamicCast_AsBa_Aa_Ak_47_00;               // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2661[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default_4;                           // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default_5;                           // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_6;      // 0x580(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeEntry                         CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x588(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x691(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_268D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetDataTableRowFromName_OutRow_5;         // 0x698(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_5;    // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2696[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGTriggerProperties                  CallFunc_GetDataTableRowFromName_OutRow_6;         // 0x6F0(0x48)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_6;    // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGHandleProperties                   CallFunc_GetDataTableRowFromName_OutRow_7;         // 0x740(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_7;    // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGMagazineProperties                 CallFunc_GetDataTableRowFromName_OutRow_8;         // 0x798(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_8;    // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGBarrelProperties                   CallFunc_GetDataTableRowFromName_OutRow_9;         // 0x7F0(0x48)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_9;    // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x839(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x83A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x83B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x83C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_Inventory_Stats.wid_Inventory_Stats_C.PreConstruct
struct UWid_Inventory_Stats_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_Inventory_Stats.wid_Inventory_Stats_C.ExecuteUbergraph_wid_Inventory_Stats
struct UWid_Inventory_Stats_C_ExecuteUbergraph_wid_Inventory_Stats_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


