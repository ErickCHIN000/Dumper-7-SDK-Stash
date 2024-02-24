#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x57 (0x428 - 0x3D1)
// BlueprintGeneratedClass Buildable_BaseMarker.Buildable_BaseMarker_C
class ABuildable_BaseMarker_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_23D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Marker_Material;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                Text;                                              // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Text_Size;                                         // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_POIMarker_C*                        MarkerRef;                                         // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_BaseMarker_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void AddMarker();
	void ReceiveDestroyed();
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_BaseMarker(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, TArray<class UW_POIMarker_C*>& CallFunc_Add_POI_Marker_Markers, class UW_POIMarker_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, bool K2Node_SwitchInteger_CmpSuccess);
};

}


