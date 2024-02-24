#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x128 - 0xA0)
// BlueprintGeneratedClass BP_MapExplorationComponent.BP_MapExplorationComponent_C
class UBP_MapExplorationComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGuid                                 ID;                                                // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_OverlapType                     Overlap_Type;                                      // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Overlap_Position;                                  // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Box_Extent;                                        // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Sphere_Overlap_Radius;                             // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title_Text;                                        // 0xF8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Zone_Name;                                         // 0x110(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_MapExplorationComponent_C* GetDefaultObj();

	void Timed_Overlap_Check(TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_FMin_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_FMin_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
	void On_Overlap(class AActor* Actor, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Initialize(enum class E_OverlapType Overlap_Type, const struct FVector& Overlap_Position, const struct FVector& Box_Extent, double Sphere_Overlap_Radius, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Get_ID(struct FGuid* ID);
	void ReceiveBeginPlay();
	void Event_MapLocationManagerReady(class AManagerBase* Manager, bool bIsReady);
	void ExecuteUbergraph_BP_MapExplorationComponent(int32 EntryPoint, const struct FGuid& CallFunc_NewGuid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, bool CallFunc_IsServer_ReturnValue, class ABP_MapLocationManager_C* K2Node_DynamicCast_AsBP_Map_Location_Manager, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDiscoveryLocation& CallFunc_Make_DiscoveryLocation_Discovery_Location, TSubclassOf<class AManagerBase> Temp_class_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
};

}


