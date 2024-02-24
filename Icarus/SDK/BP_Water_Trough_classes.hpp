#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x7C8 - 0x78A)
// BlueprintGeneratedClass BP_Water_Trough.BP_Water_Trough_C
class ABP_Water_Trough_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_66F1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  WaterProxyPlane;                                   // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                   InventoryComponent;                                // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TroughContainsWater;                               // 0x7B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Empty_Mesh;                                        // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           Filled_Mesh;                                       // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Water_Trough_C* GetDefaultObj();

	void UpdateWaterVisibility(bool Visible, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue);
	void OnRep_TroughContainsWater();
	void UpdateProxyMeshVisibility(enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	void Snow(float Intensity);
	void IcarusBeginPlay();
	void OnDynamicDataUpdate();
	void Rain(int32 Millilitres);
	void ExecuteUbergraph_BP_Water_Trough(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Intensity, int32 K2Node_Event_Millilitres, enum class EValid CallFunc_GetTrait_Paths, class UFillableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsSheltered_ReturnValue, bool CallFunc_ContainerCurrentlyAcceptsType_ReturnValue, int32 CallFunc_AddContainerActorCapacity_ReturnValue);
};

}


