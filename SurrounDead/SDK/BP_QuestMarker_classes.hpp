#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2F0 - 0x2A8)
// BlueprintGeneratedClass BP_QuestMarker.BP_QuestMarker_C
class ABP_QuestMarker_C : public ABP_MasterQuestObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            Marker_Texture;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Text;                                              // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UW_QuestMarker_C*>              Markers;                                           // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_CompassMarker_C*                   CompassMarker;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_QuestMarker_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void AddMarker();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_QuestMarker(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CompassMarker_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class UW_QuestMarker_C*>& CallFunc_Add_Quest_Marker_Markers, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue_1, class UW_QuestMarker_C* CallFunc_Array_Get_Item);
};

}


