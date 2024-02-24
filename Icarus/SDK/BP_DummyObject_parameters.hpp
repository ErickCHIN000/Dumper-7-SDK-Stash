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

// 0x2 (0x2 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.UpdateVisibility
struct ABP_DummyObject_C_UpdateVisibility_Params
{
public:
	bool                                         Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3CB (0x3CB - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.CreateLocal
struct ABP_DummyObject_C_CreateLocal_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMeshableData                         CallFunc_GetMeshableData_MeshableData;             // 0x1F8(0x1D0)(None)
	enum class EDataValid                        CallFunc_GetMeshableData_Paths;                    // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D4 (0x1D4 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.Create
struct ABP_DummyObject_C_Create_Params
{
public:
	struct FMeshableData                         CallFunc_GetMeshableData_MeshableData;             // 0x0(0x1D0)(None)
	enum class EDataValid                        CallFunc_GetMeshableData_Paths;                    // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x1D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1D3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.SetState
struct ABP_DummyObject_C_SetState_Params
{
public:
	enum class EProcessorPreview                 Preview;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.OnLoaded_F290FD0849F356AD3452B8A99B8E0F60
struct ABP_DummyObject_C_OnLoaded_F290FD0849F356AD3452B8A99B8E0F60_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.LoadItemMesh
struct ABP_DummyObject_C_LoadItemMesh_Params
{
public:
	TSoftObjectPtr<class UObject>                MeshToLoad;                                        // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x200 (0x200 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.Initilaise
struct ABP_DummyObject_C_Initilaise_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        Location;                                          // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            Inventory;                                         // 0x1F8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D1 (0x2D1 - 0x0)
// Function BP_DummyObject.BP_DummyObject_C.ExecuteUbergraph_BP_DummyObject
struct ABP_DummyObject_C_ExecuteUbergraph_BP_DummyObject_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoxSphereBounds                      CallFunc_GetBounds_ReturnValue;                    // 0x34(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBoxSphereBounds                      CallFunc_GetBounds_ReturnValue_1;                  // 0x50(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_3;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x7C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x88(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_MeshToLoad;                     // 0x98(0x28)(HasGetValueTypeHash)
	struct FItemData                             K2Node_CustomEvent_Item;                           // 0xC0(0x1F0)(ContainsInstancedReference)
	int32                                        K2Node_CustomEvent_Location;                       // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FFB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory;                      // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


