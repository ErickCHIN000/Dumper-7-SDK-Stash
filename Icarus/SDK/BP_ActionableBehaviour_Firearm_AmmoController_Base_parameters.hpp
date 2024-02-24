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

// 0x2E0 (0x2E0 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoInfo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetCurrentAmmoInfo_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             AmmoIcon;                                          // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class FText                                  CurrentAmmo;                                       // 0x28(0x18)(Parm, OutParm)
	class FText                                  TotalAmmo;                                         // 0x40(0x18)(Parm, OutParm)
	class FText                                  CurrentAmmoCount;                                  // 0x58(0x18)(Edit, BlueprintVisible)
	class FText                                  TotalAmmoCount;                                    // 0x70(0x18)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x88(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_449B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0xB8(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x2B0(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x2C8(0x18)(None)
};

// 0x15 (0x15 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnSprintUpdated
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnSprintUpdated_Params
{
public:
	bool                                         Sprinting;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_452A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusGameUserSettings*               CallFunc_GetIcarusGameUserSettings_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanAbortReload_CanAbort;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCanSprintCancelReload_ReturnValue;     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E9 (0x2E9 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdateCachedAmmoInfo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_UpdateCachedAmmoInfo_Params
{
public:
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x8(0x1F0)(ContainsInstancedReference)
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0x1F8(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetInventoryAmmoCount_Count;              // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F9 (0x1F9 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ClientCheckAmmoTypeChanged
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ClientCheckAmmoTypeChanged_Params
{
public:
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4643[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x8(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsSameItem_ReturnValue;                   // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x428 (0x428 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindItemAndMoveToAmmoContainerFromInventory
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindItemAndMoveToAmmoContainerFromInventory_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemToFind;                                        // 0x8(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UInventory*                            SourceInventory;                                   // 0x1F8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            DestinationInventory;                              // 0x200(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RemainingAmount;                                   // 0x208(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmountToTransfer;                                  // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Remaining;                                         // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Find_ReturnValue;                         // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x218(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Min_ReturnValue;                          // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3FF (0x3FF - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TransferAmmoContainerToInventory
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_TransferAmmoContainerToInventory_Params
{
public:
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetWeaponInventoryContainer_Inventory;    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x18(0x1F0)(ContainsInstancedReference)
	struct FItemData                             CallFunc_RemoveItem_ReturnValue;                   // 0x208(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0x3FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x404 (0x404 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TransferItemToAmmoContainer
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_TransferItemToAmmoContainer_Params
{
public:
	struct FItemData                             ItemType;                                          // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        Amount;                                            // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4876[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Item;                                              // 0x1F8(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Remaining;                                         // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_489C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetWeaponInventoryContainer_Inventory;    // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48AB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount; // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindItemAndMoveToAmmoContainerFromInventory_RemainingAmount_1; // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7E8 (0x7E8 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoData
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindValidAmmoData_Params
{
public:
	struct FItemData                             AmmoType;                                          // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         Found;                                             // 0x1F0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_493D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemType;                                          // 0x1F8(0x1F0)(Parm, OutParm, ContainsInstancedReference)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_494A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Find_ReturnValue;                         // 0x3EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindStackTotalWithMatchingData_ReturnValue; // 0x3F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_496F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x3F8(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4977[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindStackTotalWithMatchingData_ReturnValue_1; // 0x5EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Find_ReturnValue_1;                       // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x5F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4985[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_1;                    // 0x5F8(0x1F0)(ContainsInstancedReference)
};

// 0x3F8 (0x3F8 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoItem
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetCurrentAmmoItem_Params
{
public:
	bool                                         SlotValid;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             AmmoItemRef;                                       // 0x8(0x1F0)(Parm, OutParm, ContainsInstancedReference)
	class UInventory*                            CallFunc_GetWeaponInventoryContainer_Inventory;    // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemRef_bIsValid;                      // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A35[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItemRef_ReturnValue;                   // 0x208(0x1F0)(ContainsInstancedReference)
};

// 0x29 (0x29 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetWeaponInventoryContainer
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetWeaponInventoryContainer_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryContainerComponent*          CallFunc_GetTrait_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_Inventory;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetInventory_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB33 (0xB33 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetFiredProjectileInfo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetFiredProjectileInfo_Params
{
public:
	bool                                         HasBallisticData;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBallisticData                        BallisticData;                                     // 0x8(0x1E0)(Parm, OutParm)
	int32                                        ProjectileCount;                                   // 0x1E8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ProjectileAccuracy;                                // 0x1EC(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PerProjectileAccuracy;                             // 0x1F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BallisticCount;                                    // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x208(0x1F0)(ContainsInstancedReference)
	struct FItemStaticData                       CallFunc_GetStaticItemData_StaticData;             // 0x3F8(0x4D0)(None)
	enum class EDataValid                        CallFunc_GetStaticItemData_Paths;                  // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BBD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAmmoTypeData                         CallFunc_GetAmmoTypesStruct_AmmoTypes;             // 0x8D0(0x78)(None)
	enum class EValid                            CallFunc_GetAmmoTypesStruct_Paths;                 // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBallisticData                        CallFunc_GetBallisticStruct_Ballistic;             // 0x950(0x1E0)(None)
	enum class EValid                            CallFunc_GetBallisticStruct_Paths;                 // 0xB30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xB31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0xB32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.WantsAutoReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_WantsAutoReload_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAmmo_HasAmmo;                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAutoReloadTime
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetAutoReloadTime_Params
{
public:
	float                                        FireRate;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController;         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFireRate_FireRate;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x451 (0x451 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindAmmoTypeToSwapTo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindAmmoTypeToSwapTo_Params
{
public:
	bool                                         FoundType;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             AmmoType;                                          // 0x8(0x1F0)(Parm, OutParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInventoryAmmoCount_Count;              // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FValidAmmoTypes                       CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes;   // 0x210(0x28)(None)
	enum class EValid                            CallFunc_GetValidAmmoTypesStruct_Paths;            // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item;                           // 0x23C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindValidAmmoDataByStatic_Found;          // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FindValidAmmoDataByStatic_ItemType;       // 0x260(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdatePersistentAudio
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_UpdatePersistentAudio_Params
{
public:
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryFromName
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetInventoryFromName_Params
{
public:
	class FName                                  InventoryName;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetNameForInventory
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetNameForInventory_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20B (0x20B - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuAmmoSelected
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ContextMenuAmmoSelected_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Payload;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventoryFromName_ReturnValue;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x18(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuUnloadSelected
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ContextMenuUnloadSelected_Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Payload;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1018 (0x1018 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Open Ammo Select Menu
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Open_Ammo_Select_Menu_Params
{
public:
	bool                                         AsRadial;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Opened;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFindAllStacksResult>          AllAmmoTypes;                                      // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FItemableData                         Itemable;                                          // 0x18(0xE8)(Edit, BlueprintVisible)
	TArray<int32>                                AmmoStack;                                         // 0x100(0x10)(Edit, BlueprintVisible)
	TArray<struct FFindItemSlotInfo>             Ammo;                                              // 0x110(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FItemsStaticRowHandle>         ValidAmmoTypes;                                    // 0x120(0x10)(Edit, BlueprintVisible)
	bool                                         ShowUnload;                                        // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AContextMenuFactory*                   ContextMenu;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       Temp_object_Variable;                              // 0x140(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         Temp_bool_Variable;                                // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_RadialMenu_ImprovedItemIcon_C*    CallFunc_Create_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           K2Node_DynamicCast_AsIcarus_Item;                  // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5307[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x180(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FFirearmData                          CallFunc_GetFirearmData_FirearmData;               // 0x190(0x6F8)(None)
	enum class EDataValid                        CallFunc_GetFirearmData_Paths;                     // 0x888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5311[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRangedWeaponData                     CallFunc_GetRangedWeaponData_RangedWeaponData;     // 0x890(0xD0)(None)
	enum class EDataValid                        CallFunc_GetRangedWeaponData_Paths;                // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x961(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x962(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_531F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FValidAmmoTypes                       CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes;   // 0x968(0x28)(None)
	enum class EValid                            CallFunc_GetValidAmmoTypesStruct_Paths;            // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x991(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x992(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_532C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AContextMenuFactory*                   CallFunc_CreateContextMenu_ReturnValue;            // 0x9A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid_1;      // 0x9A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5339[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_1;  // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x9B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x9C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5344[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x9D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x9D8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5367[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFindAllStacksResult                  CallFunc_Array_Get_Item;                           // 0x9F0(0x208)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xBF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomItem_ReturnValue;                 // 0xBFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5371[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData;             // 0xC00(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths;                    // 0xCE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xCE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5388[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       K2Node_Select_Default;                             // 0xCF0(0x10)(ReferenceParm, ContainsInstancedReference)
	class FName                                  CallFunc_GetNameForInventory_ReturnValue;          // 0xD00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FContextMenuItemData                  K2Node_MakeStruct_ContextMenuItemData;             // 0xD08(0xB0)(ContainsInstancedReference)
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item_1;                         // 0xDB8(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xDD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFindAllStacksResult>          CallFunc_FindAllUniqueStacks_ReturnValue;          // 0xDD8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFindAllStacksResult>          CallFunc_FindAllUniqueStacks_ReturnValue_1;        // 0xDF0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FFindAllStacksResult>          CallFunc_CombineFindAllStackResults_ReturnValue;   // 0xE00(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FFindAllStacksResult>          CallFunc_CombineFindAllStackResults_ReturnValue_1; // 0xE10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0xE20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xE24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FContextMenuItemData                  K2Node_MakeStruct_ContextMenuItemData_1;           // 0xE28(0xB0)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xED8(0x10)(ZeroConstructor, NoDestructor)
	class UContextMenuWidget*                    CallFunc_ShowAsContextMenu_ReturnValue;            // 0xEE8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UContextMenuWidget*                    CallFunc_ShowAsRadialMenu_ReturnValue;             // 0xEF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LocalOrServer_Local;                      // 0xEF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0xEF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xF00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xF08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5408[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           K2Node_DynamicCast_AsIcarus_Item_1;                // 0xF10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5422[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_ItemableData_1;           // 0xF20(0xE8)(None)
	enum class EDataValid                        CallFunc_GetItemableData_Paths_1;                  // 0x1008(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x1009(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5432[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x100C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsAwaitingAutoReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_IsAwaitingAutoReload_Params
{
public:
	bool                                         WaitingReload;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanAbortReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CanAbortReload_Params
{
public:
	bool                                         CanAbort;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F9 (0x1F9 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.AutoReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_AutoReload_Params
{
public:
	bool                                         CallFunc_FindAmmoTypeToSwapTo_FoundType;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FindAmmoTypeToSwapTo_AmmoType;            // 0x8(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_HasAnyReserveAmmo_HasAnyReserve;          // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CheckReload_Params
{
public:
	bool                                         CallFunc_WantsAutoReload_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_559F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetAutoReloadTime_FireRate;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_55AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x610 (0x610 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoDataByStatic
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_FindValidAmmoDataByStatic_Params
{
public:
	struct FItemsStaticRowHandle                 AmmoType;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_561B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ItemType;                                          // 0x20(0x1F0)(Parm, OutParm, ContainsInstancedReference)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5624[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindStatic_ReturnValue;                   // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindStaticStackTotal_ReturnValue;         // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x220(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5631[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindStaticStackTotal_ReturnValue_1;       // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindStatic_ReturnValue_1;                 // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x41C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5639[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_1;                    // 0x420(0x1F0)(ContainsInstancedReference)
};

// 0x5EA (0x5EA - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoType
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_SetCurrentAmmoType_Params
{
public:
	struct FItemData                             AmmoType;                                          // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FItemData                             CallFunc_CreateItem_ReturnValue;                   // 0x1F0(0x1F0)(ContainsInstancedReference)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths;               // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetWeaponInventoryContainer_Inventory;    // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_56B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x3F8(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_SetItem_ReturnValue;                      // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Setup
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Setup_Params
{
public:
	class AIcarusActor*                          ForOwner;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnRep_Reloading
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnRep_Reloading_Params
{
public:
	bool                                         CallFunc_LocalOrServer_Local;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_1;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_1;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleShotRollback
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HandleShotRollback_Params
{
public:
	int32                                        OldLocalAmmo;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x451 (0x451 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckAmmo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CheckAmmo_Params
{
public:
	bool                                         bInitial;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x18(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_HasAmmo_HasAmmo;                          // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57DF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FValidAmmoTypes                       CallFunc_GetValidAmmoTypesStruct_ValidAmmoTypes;   // 0x210(0x28)(None)
	enum class EValid                            CallFunc_GetValidAmmoTypesStruct_Paths;            // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57EE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 CallFunc_Array_Get_Item;                           // 0x23C(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindValidAmmoDataByStatic_Found;          // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FindValidAmmoDataByStatic_ItemType;       // 0x260(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x200 (0x200 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdateLocalAmmo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_UpdateLocalAmmo_Params
{
public:
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5858[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x8(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local;                      // 0x1FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0x1FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1FF (0x1FF - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_TryReload_Params
{
public:
	bool                                         Force;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ForceIfReloading;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_FindValidAmmoData_Found;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FindValidAmmoData_ItemType;               // 0x8(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanReload_CanReload;                      // 0x1FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x418 (0x418 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ServerFinishReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ServerFinishReload_Params
{
public:
	int32                                        MagAmmo;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalAmmo;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_592A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x10(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid_1;           // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_592F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef_1;         // 0x208(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetInventoryAmmoCount_Count;              // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_593B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAmmoCapacity_ReturnValue;              // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x40C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x40D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount_1;   // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadAnimPlayRate
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetReloadAnimPlayRate_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_Value;                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPlayLength_ReturnValue;                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadTimeMultiplier
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetReloadTimeMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_Value;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ConsumeAmmo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ConsumeAmmo_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoCount
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_SetCurrentAmmoCount_Params
{
public:
	int32                                        CurrentAmmo;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LocalOrServer_Local;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_1;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_1;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UInventory*                            CallFunc_GetWeaponInventoryContainer_Inventory;    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetItemDynamicProperty_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x204 (0x204 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryAmmoCount
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetInventoryAmmoCount_Params
{
public:
	struct FItemData                             ItemType;                                          // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        Count;                                             // 0x1F0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1F6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AC9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FindStackTotalWithMatchingData_ReturnValue; // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FindStackTotalWithMatchingData_ReturnValue_1; // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAmmoCapacity
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetAmmoCapacity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_Value;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x204 (0x204 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoCount
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_GetCurrentAmmoCount_Params
{
public:
	int32                                        CurrentAmmoCount;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x8(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x1FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local;                      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1FD (0x1FD - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAnyReserveAmmo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HasAnyReserveAmmo_Params
{
public:
	bool                                         HasAnyReserve;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BEA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x8(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetInventoryAmmoCount_Count;              // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsReloading
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_IsReloading_Params
{
public:
	bool                                         Reloading;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanReload
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_CanReload_Params
{
public:
	bool                                         CanReload;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyReserveAmmo_HasAnyReserve;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C39[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAmmoCapacity_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAmmo
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HasAmmo_Params
{
public:
	bool                                         HasAmmo;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveEndPlay
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnInventoryItemAdded
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnInventoryItemAdded_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnTraitAnimNotify
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OnTraitAnimNotify_Params
{
public:
	struct FAnimNotifyEvent                      Notify;                                            // 0x0(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                AnimInstancePawn;                                  // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleReloadAnimNotify
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_HandleReloadAnimNotify_Params
{
public:
	class FString                                NotifyName;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_RequestNewAmmoType
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Server_RequestNewAmmoType_Params
{
public:
	struct FItemData                             NewAmmoType;                                       // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0xA (0xA - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PerformAction
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_PerformAction_Params
{
public:
	class AActor*                                InvokingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionableEventType              OnActionType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionableTrigger                ActionTrigger;                                     // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_OnReloadEnd
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Client_OnReloadEnd_Params
{
public:
	int32                                        NewAmmoCount;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryReloadWithTimeStamp
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_Server_TryReloadWithTimeStamp_Params
{
public:
	float                                        RequestTime;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OwningPlayerInventoryUpdated
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_OwningPlayerInventoryUpdated_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x117E (0x117E - 0x0)
// Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C_ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local;                      // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_1;                    // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_1;                   // 0x57(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LocalOrServer_Local_2;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_2;                   // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_607D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory_1;                    // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_1;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetReloadTimeMultiplier_ReturnValue;      // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6088[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEvent                      K2Node_Event_Notify;                               // 0x90(0xB8)(ConstParm, ContainsInstancedReference)
	class AActor*                                K2Node_Event_AnimInstancePawn;                     // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusAnimNotify*                     K2Node_DynamicCast_AsIcarus_Anim_Notify;           // 0x150(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_609C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_NotifyName;                     // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_3;                    // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_3;                   // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_NewAmmoType;                    // 0x178(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_LocalOrServer_Local_4;                    // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_4;                   // 0x369(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x36A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_5;                    // 0x36B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_5;                   // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionableBehaviour_FireArm_FireController_Base_C* CallFunc_GetFireController_FireController;         // 0x370(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_6;                    // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_6;                   // 0x37A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x37B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanReload_CanReload;                      // 0x37C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_7;                    // 0x37D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_7;                   // 0x37E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x37F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_8;                    // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_8;                   // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsReloading_Reloading;                    // 0x382(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x383(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Open_Ammo_Select_Menu_Opened;             // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ContextMenu_Radial_C*             K2Node_DynamicCast_AsUMG_Context_Menu_Radial;      // 0x398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetReloadTimeMultiplier_ReturnValue_1;    // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_Value;                            // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentAmmoCount_CurrentAmmoCount;     // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindAmmoTypeToSwapTo_FoundType;           // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FindAmmoTypeToSwapTo_AmmoType;            // 0x3C0(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_InvokingActor;                        // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionableEventType              K2Node_Event_OnActionType;                         // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EActionableTrigger                K2Node_Event_ActionTrigger;                        // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60F7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x5C8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x608(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x618(0x18)(None)
	bool                                         CallFunc_LocalOrServer_Local_9;                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_9;                   // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_10;                   // 0x632(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_10;                  // 0x633(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x634(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid;             // 0x635(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6110[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef;           // 0x638(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsSameItem_ReturnValue;                   // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6115[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAmmoItem_SlotValid_1;           // 0x838(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_611B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetCurrentAmmoItem_AmmoItemRef_1;         // 0x840(0x1F0)(ContainsInstancedReference)
	struct FItemStaticData                       CallFunc_GetStaticItemData_StaticData;             // 0xA30(0x4D0)(None)
	enum class EDataValid                        CallFunc_GetStaticItemData_Paths;                  // 0xF00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xF01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6124[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBallisticData                        CallFunc_GetBallisticStruct_Ballistic;             // 0xF08(0x1E0)(None)
	enum class EValid                            CallFunc_GetBallisticStruct_Paths;                 // 0x10E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x10E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_612A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryContainerComponent*          CallFunc_GetTrait_ReturnValue;                     // 0x10F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x10F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasLinkedInventory_Fast_ReturnValue;      // 0x10F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x10FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x10FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x10FC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6130[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetWeaponInventoryContainer_Inventory;    // 0x1110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NewAmmoCount;                   // 0x1118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_RequestTime;                    // 0x111C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1120(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x1130(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_11;                   // 0x1140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_11;                  // 0x1141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_12;                   // 0x1144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_12;                  // 0x1145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Local_13;                   // 0x1146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_13;                  // 0x1147(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UInventory*                            K2Node_CustomEvent_Inventory;                      // 0x1148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location;                       // 0x1150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6169[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x1158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetInventory_ReturnValue_1;               // 0x1160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LocalOrServer_Local_14;                   // 0x1168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_14;                  // 0x1169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x116A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6177[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x116C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x117C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x117D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


