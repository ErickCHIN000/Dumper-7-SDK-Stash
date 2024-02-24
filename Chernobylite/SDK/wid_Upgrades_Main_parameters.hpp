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

// 0x54 (0x54 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.AddRot
struct UWid_Upgrades_Main_C_AddRot_Params
{
public:
	struct FRotator                              A;                                                 // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              B;                                                 // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Sum;                                               // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6A (0x6A - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.HasEnoughMaterials
struct UWid_Upgrades_Main_C_HasEnoughMaterials_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_177E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EResourceType>             K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	enum class EResourceType                     CallFunc_Array_Get_Item;                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_178E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetNameByResource_ReturnValue;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1796[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue_1;                      // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Count_ReturnValue_2;                      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17BF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.SetProgressBarVisibility
struct UWid_Upgrades_Main_C_SetProgressBarVisibility_Params
{
public:
	bool                                         IsBarVisible;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_185F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.ShouldUseCraftBar
struct UWid_Upgrades_Main_C_ShouldUseCraftBar_Params
{
public:
	bool                                         UseCraftBar;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1971[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OldUniqueID;                                       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1997[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EResourceType>             K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EResourceType                     CallFunc_Array_Get_Item;                           // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetNameByResource_ReturnValue;            // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue_1;                      // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue_2;                      // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x88(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item_1;                         // 0x98(0x30)(None)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0xD0(0x150)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgrades_ReturnValue;                  // 0x228(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_19F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetCraftedUpgrades_ReturnValue;           // 0x248(0x10)(ReferenceParm)
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x278(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x284(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Map_Find_Value;                           // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.UpdateSelectedItem
struct UWid_Upgrades_Main_C_UpdateSelectedItem_Params
{
public:
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6ED (0x6ED - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetUpgradeStructsOfCurrentWeapon
struct UWid_Upgrades_Main_C_GetUpgradeStructsOfCurrentWeapon_Params
{
public:
	struct FCGScopeProperties                    OutScopeInfo;                                      // 0x0(0x50)(Parm, OutParm)
	struct FCGBarrelProperties                   OutBarrelInfo;                                     // 0x50(0x48)(Parm, OutParm)
	struct FCGMagazineProperties                 OutMagazineInfo;                                   // 0x98(0x50)(Parm, OutParm)
	struct FCGHandleProperties                   OutStockInfo;                                      // 0xE8(0x50)(Parm, OutParm)
	struct FCGTriggerProperties                  OutTriggerInfo;                                    // 0x138(0x48)(Parm, OutParm)
	struct FCGTriggerProperties                  TriggerInfo;                                       // 0x180(0x48)(Edit, BlueprintVisible)
	struct FCGHandleProperties                   StockInfo;                                         // 0x1C8(0x50)(Edit, BlueprintVisible)
	struct FCGMagazineProperties                 MagazineInfo;                                      // 0x218(0x50)(Edit, BlueprintVisible)
	struct FCGBarrelProperties                   BarrelInfo;                                        // 0x268(0x48)(Edit, BlueprintVisible)
	struct FCGScopeProperties                    ScopeInfo;                                         // 0x2B0(0x50)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable;                              // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_1;                            // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_2;                            // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_3;                            // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_4;                            // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x354(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGActiveItem*                         CallFunc_GetCurrentWeapon_OutCurrentWeapon;        // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_aa_makarov_00_C*                   K2Node_DynamicCast_AsBa_Aa_Makarov_00;             // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_crossbow_00_C*                  K2Node_DynamicCast_AsBa_Aa_Crossbow_00;            // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_railgun_00_C*                   K2Node_DynamicCast_AsBa_Aa_Railgun_00;             // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_nagant_00_C*                    K2Node_DynamicCast_AsBa_Aa_Nagant_00;              // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_mp133_00_C*                     K2Node_DynamicCast_AsBa_Aa_Mp_133_00;              // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_aa_ak47_00_C*                      K2Node_DynamicCast_AsBa_Aa_Ak_47_00;               // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Temp_object_Variable_5;                            // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            Temp_object_Variable_6;                            // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1DD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradesOfCurrentWeapon_Upgrades;      // 0x3E0(0x10)(ReferenceParm)
	class UDataTable*                            K2Node_Select_Default;                             // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default_1;                           // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DFD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default_2;                           // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            K2Node_Select_Default_3;                           // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default_4;                           // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            K2Node_Select_Default_5;                           // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeEntry                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x438(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x541(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E16[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGTriggerProperties                  CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x548(0x48)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGHandleProperties                   CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x598(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGMagazineProperties                 CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x5F0(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGBarrelProperties                   CallFunc_GetDataTableRowFromName_OutRow_4;         // 0x648(0x48)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_4;    // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCGScopeProperties                    CallFunc_GetDataTableRowFromName_OutRow_5;         // 0x698(0x50)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_5;    // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x6E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x6EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x6EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x6EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x219 (0x219 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetCurrentWeapon
struct UWid_Upgrades_Main_C_GetCurrentWeapon_Params
{
public:
	class ACGActiveItem*                         OutCurrentWeapon;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         CurrentWeapon;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x64(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2030[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam;          // 0x80(0x30)(None)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_203C[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0xC0(0x150)(None)
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetUpgradesOfCurrentWeapon
struct UWid_Upgrades_Main_C_GetUpgradesOfCurrentWeapon_Params
{
public:
	TArray<class FName>                          Upgrades;                                          // 0x0(0x10)(Parm, OutParm)
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam;          // 0x50(0x30)(None)
};

// 0x1A1 (0x1A1 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetUpgradesFromCategory
struct UWid_Upgrades_Main_C_GetUpgradesFromCategory_Params
{
public:
	enum class EUpgradeType                      Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          NewParam;                                          // 0x8(0x10)(Parm, OutParm)
	TArray<class FName>                          ResultArray;                                       // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUnlockedUpgrades                     CallFunc_Map_Find_Value;                           // 0x48(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetAvailableUpgrades_ReturnValue;         // 0x70(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x84(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21EC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUpgradeInfo_isVaid;                    // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeEntry                         CallFunc_GetUpgradeInfo_ReturnValue;               // 0x98(0x108)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetItemIndexByName
struct UWid_Upgrades_Main_C_GetItemIndexByName_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22EA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_BuildSystem_EntityList_Entry_C*   K2Node_DynamicCast_AsWid_Build_System_Entity_List_Entry; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x46(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x47(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1DB (0x1DB - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetUpgradableItemsCount
struct UWid_Upgrades_Main_C_GetUpgradableItemsCount_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Counter;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2456[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2460[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x30(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x40(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_248A[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x80(0x150)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x1D5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1D6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1D7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xEC (0xEC - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetInventoryItemByName
struct UWid_Upgrades_Main_C_GetInventoryItemByName_Params
{
public:
	class FName                                  UniqueId;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       NewParam;                                          // 0x8(0x30)(Parm, OutParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_263D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x58(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue_1;                   // 0x68(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x78(0x30)(None)
	struct FInventoryEntry                       CallFunc_Array_Get_Item_1;                         // 0xA8(0x30)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2660[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_267A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x214 (0x214 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.FindAvailableItems
struct UWid_Upgrades_Main_C_FindAvailableItems_Params
{
public:
	TArray<struct FInventoryEntry>               Result1;                                           // 0x0(0x10)(Parm, OutParm)
	TArray<struct FInventoryEntry>               Result;                                            // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x40(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue_1;                   // 0x50(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x60(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27F3[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0xA0(0x150)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetAvailableUpgrades_ReturnValue;         // 0x1F8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_280C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C1 (0x3C1 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetResultingItemData
struct UWid_Upgrades_Main_C_GetResultingItemData_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            ReturnValue;                                       // 0x10(0x150)(Parm, OutParm, ReturnParm)
	struct FCraftingRecipe                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x160(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x270(0x150)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x96D (0x96D - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.Craft
struct UWid_Upgrades_Main_C_Craft_Params
{
public:
	class ACGActiveItem*                         Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OldUniqueID;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EResourceType>             K2Node_MakeArray_Array;                            // 0x58(0x10)(ReferenceParm)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     CallFunc_Array_Get_Item;                           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetNameByResource_ReturnValue;            // 0x74(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue;                        // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue_1;                      // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Count_ReturnValue_2;                      // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x108(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x124(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x140(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGActiveItem*                         CallFunc_Array_Get_Item_1;                         // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon;                     // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0x190(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Inventory_QuickMenu_C*            K2Node_DynamicCast_AsWid_Inventory_Quick_Menu;     // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGActiveItem*                         CallFunc_Array_Get_Item_2;                         // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9; // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10; // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue_1;                   // 0x1E8(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item_3;                         // 0x1F8(0x30)(None)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DA8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x230(0x150)(None)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgrades_ReturnValue;                  // 0x388(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetCraftedUpgrades_ReturnValue;           // 0x3A8(0x10)(ReferenceParm)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0x3B8(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_1;                  // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_Array_Get_Item_4;                         // 0x3D0(0x30)(None)
	bool                                         CallFunc_GetItemInfo_IsValid_1;                    // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DD3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_1;                // 0x410(0x150)(None)
	TSubclassOf<class UObject>                   CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class ACGActiveItem>             K2Node_ClassDynamicCast_AsCGActive_Item;           // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_Map_Values_Values;                        // 0x578(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item_5;                         // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x590(0x10)(ReferenceParm)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11; // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_6;                         // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x5B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Remove_ReturnValue;                       // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Remove_ReturnValue_1;                     // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12; // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemIndexByName_Index;                 // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x5F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x604(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam;          // 0x618(0x30)(None)
	float                                        CallFunc_Map_Find_Value;                           // 0x648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x64C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_7;                         // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x65C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetLeaveDuplicates_ReturnValue;           // 0x662(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x663(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid_2;                    // 0x664(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E80[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_2;                // 0x670(0x150)(None)
	class UDataTable*                            CallFunc_Map_Find_Value_1;                         // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x7C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadClassAsset_Blocking_ReturnValue;      // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeEntry                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x7D8(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x8E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue_1;      // 0x8E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EA1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x8E8(0x10)(NoDestructor, UObjectWrapper)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_1;                          // 0x8F8(0x10)(ReferenceParm)
	TArray<float>                                K2Node_MakeArray_Array_2;                          // 0x908(0x10)(ReferenceParm)
	class FName                                  CallFunc_GetItemUnderIndex_ID_1;                   // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_1;             // 0x920(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_1;    // 0x928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_1;           // 0x930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_1;         // 0x938(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_1; // 0x944(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_1;          // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13; // 0x958(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_AddUpgrade_UniqueName;                    // 0x964(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddUpgrade_ReturnValue;                   // 0x96C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.GetItemUnderIndex
struct UWid_Upgrades_Main_C_GetItemUnderIndex_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  UniqueId;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             InventoryPosition;                                 // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SocketName;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SocketOffset;                                      // 0x20(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SocketRotationOffset;                              // 0x2C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      UpgradeType;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3000[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_BuildSystem_EntityList_Entry_C*   CallFunc_GetTab_Tab;                               // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3007[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15BD (0x15BD - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.Update
struct UWid_Upgrades_Main_C_Update_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                     IngreadientsArrayTempNoPerks;                      // 0x8(0x50)(Edit, BlueprintVisible)
	class FName                                  DefaultID;                                         // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                     IngreadientsArrayTemp;                             // 0x60(0x50)(Edit, BlueprintVisible)
	int32                                        Index;                                             // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0xB4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xBC(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0xC4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0xCC(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0xD4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_321E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue_1;              // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3240[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3248[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Get_Item_2;                         // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3253[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3257[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Map_Find_Value;                           // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3259[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll_1;                      // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_1;                     // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_1;                       // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Map_Find_Value_1;                         // 0x190(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_325D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Map_Find_Value_2;                         // 0x1A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3260[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll_2;                      // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_2;                     // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_2;                       // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x1D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x1E0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              CallFunc_Map_Find_Value_3;                         // 0x26C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3267[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Map_Find_Value_4;                         // 0x27C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3270[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll_3;                      // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_3;                     // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_3;                       // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_4;                      // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_4;                     // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_4;                       // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_5;             // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x2B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Map_Find_Value_5;                         // 0x2BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_5;                   // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_327E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue_2;              // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_328A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll_5;                      // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_5;                     // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_5;                       // 0x2FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3298[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGWeapon*                             K2Node_DynamicCast_AsCGWeapon;                     // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x350(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x35C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam;          // 0x370(0x30)(None)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x3C0(0x150)(None)
	class UDataTable*                            CallFunc_Map_Find_Value_6;                         // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_6;                   // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid_1;                    // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_1;                // 0x520(0x150)(None)
	struct FUpgradeEntry                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x670(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x77C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_3;                         // 0x780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x788(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x794(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x798(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x79C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam_1;        // 0x7B0(0x30)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x7E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x7E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID_1;                   // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_1;             // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_1;    // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_1;           // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_1;         // 0x808(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_1; // 0x814(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_1;          // 0x820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x821(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3300[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakRotator_Roll_6;                      // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch_6;                     // 0x828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw_6;                       // 0x82C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_6;             // 0x830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_7;             // 0x834(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_8;             // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_9;             // 0x83C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_10;            // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_2;                          // 0x844(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_2;                          // 0x848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_2;                          // 0x84C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_11;            // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_12;            // 0x854(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_2;                // 0x858(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_13;            // 0x864(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3332[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x870(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x8A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x8AC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x8B8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID_2;                   // 0x8C4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_2;             // 0x8CC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_2;    // 0x8D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_2;           // 0x8DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_2;         // 0x8E4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_2; // 0x8F0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_2;          // 0x8FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3348[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X_3;                          // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_3;                          // 0x904(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_3;                          // 0x908(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_14;            // 0x90C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_15;            // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_16;            // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_17;            // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x91C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3356[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x920(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID_3;                   // 0x92C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_3;             // 0x934(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_3;    // 0x93C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_3;           // 0x944(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_3;         // 0x94C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_3; // 0x958(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_3;          // 0x964(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFirstSlotWithName_outResult;           // 0x965(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EQuickMenuSlot                    CallFunc_GetFirstSlotWithName_ReturnValue;         // 0x966(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x967(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue;                // 0x978(0x10)(ReferenceParm)
	struct FUpgradeCategory                      CallFunc_Array_Get_Item_4;                         // 0x988(0x198)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xB24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3377[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Map_Find_Value_7;                         // 0xB28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_7;                   // 0xB34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Map_Find_Value_8;                         // 0xB38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_8;                   // 0xB44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Map_Find_Value_9;                         // 0xB48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_9;                   // 0xB54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_337E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Map_Find_Value_10;                        // 0xB58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_10;                  // 0xB64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3383[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_AddRot_Sum;                               // 0xB68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0xB74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SelectRotator_ReturnValue;                // 0xB80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0xB8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0xB98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetUpgrades_ReturnValue;                  // 0xBA0(0x10)(ReferenceParm)
	bool                                         CallFunc_GetItemInfo_IsValid_2;                    // 0xBB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3390[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_2;                // 0xBC0(0x150)(None)
	class FName                                  CallFunc_GetItemUnderIndex_ID_4;                   // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_4;             // 0xD18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_4;    // 0xD20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_4;           // 0xD28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_4;         // 0xD30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_4; // 0xD3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_4;          // 0xD48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3399[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetCraftedUpgrades_ReturnValue;           // 0xD50(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_GetAvailableUpgrades_ReturnValue;         // 0xD60(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_5;                         // 0xD70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0xD78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xD7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xD7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xD7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUpgradeInfo_isVaid;                    // 0xD7F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FUpgradeEntry                         CallFunc_GetUpgradeInfo_ReturnValue;               // 0xD80(0x108)(None)
	int32                                        K2Node_Select_Default_1;                           // 0xE88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xE90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0xE91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeCategory                      CallFunc_GetDataTableRowFromName_OutRow_1;         // 0xE98(0x198)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x1030(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Map_Find_Value_11;                        // 0x1034(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_11;                  // 0x1040(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x1044(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value_12;                        // 0x1048(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_12;                  // 0x1054(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Map_Find_Value_13;                        // 0x1058(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_13;                  // 0x1064(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Map_Find_Value_14;                        // 0x1068(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_14;                  // 0x1074(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_AddRot_Sum_1;                             // 0x1078(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x1084(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SelectRotator_ReturnValue_1;              // 0x1090(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x109C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0x10A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x10B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9; // 0x10B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetAvailableUpgrades_ReturnValue_1;       // 0x10C0(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue_2;             // 0x10D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GetItems_ReturnValue;                     // 0x10D8(0x10)(ReferenceParm)
	struct FInventoryEntry                       CallFunc_Array_Get_Item_6;                         // 0x10E8(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x1118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgrades_ReturnValue_1;                // 0x1120(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x1134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetByIndex_ReturnValue;                   // 0x1140(0x30)(None)
	class FName                                  CallFunc_AddUpgrade_UniqueName;                    // 0x1170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddUpgrade_ReturnValue;                   // 0x1178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemInfo_IsValid_3;                    // 0x1179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_3;                // 0x1180(0x150)(None)
	struct FItemEntry                            CallFunc_GetResultingItemData_ReturnValue;         // 0x12D0(0x150)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1423(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x1425(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x1426(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1427(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x1428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetUpgradeInfo_isVaid_1;                  // 0x1429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeEntry                         CallFunc_GetUpgradeInfo_ReturnValue_1;             // 0x1430(0x108)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x1539(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_Map_Values_Values;                        // 0x1540(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x1550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Get_Item_7;                         // 0x1554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x1558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x1560(0x10)(ReferenceParm)
	float                                        CallFunc_ApplyPerks_ReturnValue;                   // 0x1570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_8;                         // 0x1574(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x157C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x1580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetItemUnderIndex_ID_5;                   // 0x1584(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_5;             // 0x158C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_5;    // 0x1594(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_5;           // 0x159C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_5;         // 0x15A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_5; // 0x15B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_5;          // 0x15BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.PreConstruct
struct UWid_Upgrades_Main_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.Accept
struct UWid_Upgrades_Main_C_Accept_Params
{
public:
	class ACGActiveItem*                         Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.Tick
struct UWid_Upgrades_Main_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.LogNoResources
struct UWid_Upgrades_Main_C_LogNoResources_Params
{
public:
	class FName                                  Row_Name;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.LogUpgradeAlreadyMounted
struct UWid_Upgrades_Main_C_LogUpgradeAlreadyMounted_Params
{
public:
	class FName                                  Row_Name;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1380 (0x1380 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.ExecuteUbergraph_wid_Upgrades_Main
struct UWid_Upgrades_Main_C_ExecuteUbergraph_wid_Upgrades_Main_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x18(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_359E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x38(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x70(0x18)(None)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradableItemsCount_Result;           // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0xC0(0x150)(None)
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue;                // 0x210(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradesFromCategory_NewParam;         // 0x228(0x10)(ReferenceParm)
	int32                                        Temp_int_Variable_1;                               // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradableItemsCount_Result_1;         // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_1;                    // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_1;                // 0x250(0x150)(None)
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue_1;              // 0x3A0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradesFromCategory_NewParam_1;       // 0x3B8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradableItemsCount_Result_2;         // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_2;                    // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_2;                // 0x3E0(0x150)(None)
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue_2;              // 0x530(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradesFromCategory_NewParam_2;       // 0x548(0x10)(ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradableItemsCount_Result_3;         // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_3;                    // 0x56C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_3;                // 0x570(0x150)(None)
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue_3;              // 0x6C0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_8;               // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradesFromCategory_NewParam_3;       // 0x6D8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_9;               // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_UpgradeSelectionStep         Temp_byte_Variable;                                // 0x6EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x6F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x6F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue_1;              // 0x6F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_6;             // 0x700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x714(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMin_ReturnValue;                         // 0x718(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x71C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue;              // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x728(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector2D_X;                          // 0x72C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x73C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x741(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0x744(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue_1;            // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue_1;                       // 0x750(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_1;                        // 0x754(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_1;                        // 0x758(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue_1;                       // 0x75C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x760(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_4;          // 0x764(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_5;          // 0x768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x76C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x76D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue_2;              // 0x770(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0x774(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable_2;                               // 0x784(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x789(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGActiveItem*                         K2Node_CustomEvent_Item;                           // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x798(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue_2;            // 0x7D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x7DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X_2;                        // 0x7E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y_2;                        // 0x7E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_2;        // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetItemUnderIndex_ID;                     // 0x7EC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID;               // 0x7F4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition;      // 0x7FC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName;             // 0x804(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset;           // 0x80C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset;   // 0x818(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType;            // 0x824(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Row_Name_1;                     // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x830(0x10)(NoDestructor, UObjectWrapper)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x840(0x10)(ReferenceParm)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_1;                          // 0x850(0x10)(ReferenceParm)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0x860(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_2;                          // 0x870(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x880(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3602[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               CallFunc_FindAvailableItems_Result1;               // 0x890(0x10)(ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_1;                           // 0x8A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3605[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_2;                           // 0x8A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3607[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3609[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           K2Node_MakeStruct_InputRange;                      // 0x8B4(0x8)(NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x8BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_360A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x8C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_360C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x8CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x8D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x8D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3611[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_2;                            // 0x8E0(0x10)(ConstParm, ReferenceParm)
	enum class Enum_UpgradeSelectionStep         Temp_byte_Variable_1;                              // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3615[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_7;             // 0x8F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item_2;                         // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_3;                           // 0x8FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3618[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x904(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_UpgradeSelectionStep         Temp_byte_Variable_2;                              // 0x908(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_4;                           // 0x90C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3621[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_3;                          // 0x91C(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_3624[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_3;                            // 0x930(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x940(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x944(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x945(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3627[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x948(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x94C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x94D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3629[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x958(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_4;                          // 0x960(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x971(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_362F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetItemUnderIndex_ID_1;                   // 0x974(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_1;             // 0x97C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_1;    // 0x984(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_1;           // 0x98C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_1;         // 0x994(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_1; // 0x9A0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_1;          // 0x9AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3635[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_4;                            // 0x9B8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_GetItemInfo_IsValid_4;                    // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3639[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_4;                // 0x9D0(0x150)(None)
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam;          // 0xB20(0x30)(None)
	TArray<class FName>                          CallFunc_GetUpgradesFromCategory_NewParam_4;       // 0xB50(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_10;              // 0xB60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0xB68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUpgradableItemsCount_Result_4;         // 0xB70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_5;                    // 0xB74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_363F[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_5;                // 0xB80(0x150)(None)
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue_4;              // 0xCD0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_11;              // 0xCE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3640[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradesFromCategory_NewParam_5;       // 0xCE8(0x10)(ReferenceParm)
	enum class Enum_UpgradeSelectionStep         Temp_byte_Variable_3;                              // 0xCF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3642[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_12;              // 0xCFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_5;                           // 0xD00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0xD04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID_2;                   // 0xD08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_2;             // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_2;    // 0xD18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_2;           // 0xD20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_2;         // 0xD28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_2; // 0xD34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_2;          // 0xD40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3649[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue_3;              // 0xD44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0xD48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemIndexByName_Index;                 // 0xD4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemIndexByName_Index_1;               // 0xD50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_5;                          // 0xD54(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0xD64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Row_Name;                       // 0xD68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                K2Node_MakeArray_Array_2;                          // 0xD70(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0xD80(0x10)(NoDestructor, UObjectWrapper)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_3;                          // 0xD90(0x10)(ReferenceParm)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_5;                            // 0xDA0(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Variable_3;                               // 0xDB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_6;                          // 0xDB4(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                        Pad_364B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_6;                            // 0xDC8(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           Temp_delegate_Variable_7;                          // 0xDD8(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_7;                            // 0xDE8(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_8;             // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_8;                          // 0xDFC(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0xE0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_364F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9; // 0xE10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_6;                           // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID_3;                   // 0xE1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_3;             // 0xE24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_3;    // 0xE2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_3;           // 0xE34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_3;         // 0xE3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_3; // 0xE48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_3;          // 0xE54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_365F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0xE58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3660[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryItemByName_NewParam_1;        // 0xE60(0x30)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xE90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid_6;                    // 0xE98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3663[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue_6;                // 0xEA0(0x150)(None)
	int32                                        CallFunc_Array_Get_Item_3;                         // 0xFF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3665[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_Map_Find_Value;                           // 0xFF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1000(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3668[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x1004(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUpgradeEntry                         CallFunc_GetDataTableRowFromName_OutRow;           // 0x1008(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_BuildSystem_EntityList_Entry_C*   CallFunc_GetTab_Tab;                               // 0x1118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x1120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_2;          // 0x1121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x1124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue_9;             // 0x1128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_ID_4;                   // 0x112C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_UniqueID_4;             // 0x1134(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetItemUnderIndex_InventoryPosition_4;    // 0x113C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetItemUnderIndex_SocketName_4;           // 0x1144(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetItemUnderIndex_SocketOffset_4;         // 0x114C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetItemUnderIndex_SocketRotationOffset_4; // 0x1158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUpgradeType                      CallFunc_GetItemUnderIndex_UpgradeType_4;          // 0x1164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_3;          // 0x1165(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3673[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x1168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x1170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x1178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3677[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x1188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x1190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x1198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_367A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FUpgradeCategory>              CallFunc_GetCategories_ReturnValue_5;              // 0x11A0(0x10)(ReferenceParm)
	int32                                        K2Node_Select_Default_7;                           // 0x11B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_13;              // 0x11B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10; // 0x11B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11; // 0x11C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12; // 0x11C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x11D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3681[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13; // 0x11D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14; // 0x11E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_1;                  // 0x11E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_2;                  // 0x11EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_3;                  // 0x11F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3683[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15; // 0x11F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16; // 0x1200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_4;                  // 0x1208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_5;                  // 0x120C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_6;                  // 0x1210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3688[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_8;                            // 0x1218(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Variable_4;                               // 0x1228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_7;                  // 0x122C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x1230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_368A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1234(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Select_Default_8;                           // 0x1244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_368B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1248(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1258(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Get_Item_4;                         // 0x1268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_6;            // 0x126C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_UpgradeSelectionStep         Temp_byte_Variable_4;                              // 0x1270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_368E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_9;                           // 0x1274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1278(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ShouldUseCraftBar_UseCraftBar;            // 0x1288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x1289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x128A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x128B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x128C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3695[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17; // 0x1298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEvent_ReturnValue_8;                  // 0x12A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_UpgradeSelectionStep         Temp_byte_Variable_5;                              // 0x12A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x12A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3699[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default_10;                          // 0x12A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_11;                          // 0x12AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_369C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_7;            // 0x12B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x12B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_369F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue_1;                      // 0x12B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_8;            // 0x12BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x12C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue_2;                      // 0x12C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x12C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_BuildSystem_EntityList_Entry_C*   CallFunc_GetTab_Tab_1;                             // 0x12D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_4;          // 0x12D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_5;          // 0x12D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x12DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36AB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x12DC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x12E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult; // 0x12F4(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// Function wid_Upgrades_Main.wid_Upgrades_Main_C.NewSelection__DelegateSignature
struct UWid_Upgrades_Main_C_NewSelection__DelegateSignature_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       Item;                                              // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  ItemUniqueID;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


