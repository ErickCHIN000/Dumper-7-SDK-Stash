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

// 0x9 (0x9 - 0x0)
// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShouldShow
struct ABP_ContextMenuFactory_C_ShouldShow_Params
{
public:
	bool                                         ShouldShow;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsRadialMenu
struct ABP_ContextMenuFactory_C_ShowAsRadialMenu_Params
{
public:
	class UContextMenuWidget*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShow_ShouldShow;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_423A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ContextMenu_Base_C*               CallFunc_FinaliseMenu_ContextMenu;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsContextMenu
struct ABP_ContextMenuFactory_C_ShowAsContextMenu_Params
{
public:
	struct FVector2D                             ScreenPosition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UContextMenuWidget*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShow_ShouldShow;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsZero2D_ReturnValue;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42A7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetMousePositionOnViewport_ReturnValue;   // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ContextMenu_Base_C*               CallFunc_FinaliseMenu_ContextMenu;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ContextMenu_Base_C*               CallFunc_FinaliseMenu_ContextMenu_1;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.FinaliseMenu
struct ABP_ContextMenuFactory_C_FinaliseMenu_Params
{
public:
	class UClass*                                MenuClass;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ContextMenu_Base_C*               ContextMenu;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ContextMenu_Base_C*               CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.SetContextMenuData
struct ABP_ContextMenuFactory_C_SetContextMenuData_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x18(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ExecuteUbergraph_BP_ContextMenuFactory
struct ABP_ContextMenuFactory_C_ExecuteUbergraph_BP_ContextMenuFactory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Name;                                 // 0x8(0x18)(ConstParm)
	TSoftObjectPtr<class UTexture2D>             K2Node_Event_Icon;                                 // 0x20(0x28)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
};

}
}


