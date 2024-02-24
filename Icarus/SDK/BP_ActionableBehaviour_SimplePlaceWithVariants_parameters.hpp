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

// 0xCC (0xCC - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.CreateMenuItem
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_CreateMenuItem_Params
{
public:
	class AContextMenuFactory*                   ContextMenuFactory;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FContextMenuItemData                  ContextMenuItemData;                               // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        ItemIndex;                                         // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xBC(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.GetContextMenuItems
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_GetContextMenuItems_Params
{
public:
	TArray<struct FContextMenuItemData>          MenuItems;                                         // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x149 (0x149 - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.GetContextMenuInfo
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_GetContextMenuInfo_Params
{
public:
	class FText                                  MenuName;                                          // 0x0(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             MenuIcon;                                          // 0x18(0x28)(Parm, OutParm, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1BA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableData_OutData;                  // 0x60(0xE8)(None)
	bool                                         CallFunc_GetItemableData_ReturnValue;              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.LocalOrServer
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_LocalOrServer_Params
{
public:
	bool                                         Local;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Server;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.SetupPlayer
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_SetupPlayer_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.MenuItemSelected
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_MenuItemSelected_Params
{
public:
	class FName                                  ItemIdentifier;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemPayload;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x164 (0x164 - 0x0)
// Function BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C.ExecuteUbergraph_BP_ActionableBehaviour_SimplePlaceWithVariants
struct UBP_ActionableBehaviour_SimplePlaceWithVariants_C_ExecuteUbergraph_BP_ActionableBehaviour_SimplePlaceWithVariants_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ContextMenu_Radial_C*             K2Node_DynamicCast_AsUMG_Context_Menu_Radial;      // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LocalOrServer_Local;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_203[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AContextMenuFactory*                   CallFunc_CreateContextMenu_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LocalOrServer_Local_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LocalOrServer_Server_1;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_206[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UContextMenuWidget*                    CallFunc_ShowAsRadialMenu_ReturnValue;             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FContextMenuItemData>          CallFunc_GetContextMenuItems_MenuItems;            // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	class FName                                  K2Node_CustomEvent_ItemIdentifier;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ItemPayload;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_208[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FContextMenuItemData                  CallFunc_Array_Get_Item;                           // 0x60(0xB0)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetContextMenuInfo_MenuName;              // 0x118(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetContextMenuInfo_MenuIcon;              // 0x130(0x28)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


