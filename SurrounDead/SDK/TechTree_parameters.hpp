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
// DelegateFunction TechTree.TechnologyTree.OnTechnologyUnlockStateChanged__DelegateSignature
struct UTechnologyTree_OnTechnologyUnlockStateChanged__DelegateSignature_Params
{
public:
	class UTTTechNode*                           TechNode;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnlocked;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechnologyTree.IsTechnologyUnlocked
struct UTechnologyTree_IsTechnologyUnlocked_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C55[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechnologyTree.HasUnlockedParents
struct UTechnologyTree_HasUnlockedParents_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechnologyTree.GetTechAssetName
struct UTechnologyTree_GetTechAssetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechnologyTree.GetConnections
struct UTechnologyTree_GetConnections_Params
{
public:
	TArray<struct FTechNodeLink>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TechTree.TechnologyTree.FilterConnections
struct UTechnologyTree_FilterConnections_Params
{
public:
	TArray<struct FTechNodeLink>                 ConnectionsIn;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UTechnologyAsset*>              IgnoredParentTechnologies;                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UTechnologyAsset*>              IgnoredChildTechnologies;                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FTechNodeLink>                 ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.UnlockTechnology
struct UTechTreeManager_UnlockTechnology_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.SelectTechTree
struct UTechTreeManager_SelectTechTree_Params
{
public:
	class UTechnologyTree*                       TechTree;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.SaveTechToObject
struct UTechTreeManager_SaveTechToObject_Params
{
public:
	class USaveGame*                             SaveGameObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TechTree.TechTreeManager.SaveTechStateFromSlot
struct UTechTreeManager_SaveTechStateFromSlot_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D22[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction TechTree.TechTreeManager.OnTechTreeRecovered__DelegateSignature
struct UTechTreeManager_OnTechTreeRecovered__DelegateSignature_Params
{
public:
	class UTechnologyTree*                       TechTree;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction TechTree.TechTreeManager.OnTechTreeAssigned__DelegateSignature
struct UTechTreeManager_OnTechTreeAssigned__DelegateSignature_Params
{
public:
	class UTechnologyTree*                       TechTree;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction TechTree.TechTreeManager.OnTechnologyUnlockStateChanged__DelegateSignature
struct UTechTreeManager_OnTechnologyUnlockStateChanged__DelegateSignature_Params
{
public:
	class UTechnologyTree*                       TechTree;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTTTechNode*                           TechNode;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnlocked;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.LockTechnology
struct UTechTreeManager_LockTechnology_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TechTree.TechTreeManager.LoadTechStateFromSlot
struct UTechTreeManager_LoadTechStateFromSlot_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D72[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.LoadTechFromObject
struct UTechTreeManager_LoadTechFromObject_Params
{
public:
	class USaveGame*                             SaveGameObject;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeManager.IsTechnologyUnlocked
struct UTechTreeManager_IsTechnologyUnlocked_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D88[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TechTree.TechTreeManager.IsChildTechnology
struct UTechTreeManager_IsChildTechnology_Params
{
public:
	class UTTTechNode*                           ParentNode;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechnologyAsset*                      ChildNodeTechnology;                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeManager.HasUnlockedParents
struct UTechTreeManager_HasUnlockedParents_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeManager.HandleTechnologyStateChanged
struct UTechTreeManager_HandleTechnologyStateChanged_Params
{
public:
	class UTTTechNode*                           TechNode;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnlocked;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.GetTechTreeWidget
struct UTechTreeManager_GetTechTreeWidget_Params
{
public:
	class UTechTreeWidget*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.GetSavegameTechObject
struct UTechTreeManager_GetSavegameTechObject_Params
{
public:
	class USaveGame*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TechTree.TechTreeManager.GetNumberTreesAssigned
struct UTechTreeManager_GetNumberTreesAssigned_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeManager.GetNodeFromTechAsset
struct UTechTreeManager_GetNodeFromTechAsset_Params
{
public:
	class UTechnologyAsset*                      Technology;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTTTechNode*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TechTree.TechTreeManager.GetAssignedTechTree
struct UTechTreeManager_GetAssignedTechTree_Params
{
public:
	class UTechnologyTree*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeManager.AssignTechTree
struct UTechTreeManager_AssignTechTree_Params
{
public:
	class UTechnologyTree*                       TechTree;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechTreeWidget*                       TechTreeWidget;                                    // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeWidget.UpdateConnections
struct UTechTreeWidget_UpdateConnections_Params
{
public:
	TArray<struct FTechNodeLink>                 Connections;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeWidget.GetTechNodeWidgets
struct UTechTreeWidget_GetTechNodeWidgets_Params
{
public:
	TArray<class UTechNodeWidget*>               ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeWidget.GetTechNode
struct UTechTreeWidget_GetTechNode_Params
{
public:
	class UTechnologyAsset*                      TechnologyAsset;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTechNodeWidget*                       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TechTree.TechTreeWidget.GetArrowWidgets
struct UTechTreeWidget_GetArrowWidgets_Params
{
public:
	TArray<class UTechNodeArrowWidget*>          ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


