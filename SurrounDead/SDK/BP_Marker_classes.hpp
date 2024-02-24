#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x310 - 0x298)
// BlueprintGeneratedClass BP_Marker.BP_Marker_C
class ABP_Marker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_MarkerType>              Marker_Type;                                       // 0x2A8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            Marker_Texture;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Text;                                              // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             Text_Size;                                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UW_POIMarker_C*>                Markers;                                           // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ABP_Marker_C* GetDefaultObj();

	void AddMarker();
	void ExecuteUbergraph_BP_Marker(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, TArray<class UW_POIMarker_C*>& CallFunc_Add_POI_Marker_Markers);
};

}


