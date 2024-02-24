#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xEA0 - 0xE60)
// BlueprintGeneratedClass BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C
class ABP_Vehicle_PoliceCar_C : public AGGVehicle_Car_PoliceCar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       SirenAudio;                                        // 0xE68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceTimestamp;                                 // 0xE70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B15[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGGGoat*>                       NearbyGoats;                                       // 0xE78(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        GoatVisibleRange;                                  // 0xE88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          GoatCheckTimer;                                    // 0xE90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SirenMeshComponent;                                // 0xE98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Vehicle_PoliceCar_C* GetDefaultObj();

	void SpawnPolicePassengers(class AActor* TargetActor, bool HasPolicePassenger);
	void FindSirenMeshComponent(class UStaticMeshComponent** SirenMeshComponent, bool* IsValid, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ToggleSirenMaterial(bool Enabled, bool EnableSirens, class UStaticMeshComponent* CallFunc_FindSirenMeshComponent_SirenMeshComponent, bool CallFunc_FindSirenMeshComponent_IsValid);
	void CharacterEnter(class AGGCharacter* Character, bool AsPassanger, bool PlacedFromManager);
	void ToggleSiren(bool bSirenEnabled);
	void ExecuteUbergraph_BP_Vehicle_PoliceCar(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class AGGCharacter* K2Node_Event_Character, bool K2Node_Event_AsPassanger, bool K2Node_Event_PlacedFromManager, class FName CallFunc_MakeLiteralName_ReturnValue_1, class ABP_GGNPC_Police_C* K2Node_DynamicCast_AsBP_GGNPC_Police, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bSirenEnabled, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
};

}


