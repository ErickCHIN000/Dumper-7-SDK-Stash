#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x378 - 0x298)
// BlueprintGeneratedClass BP_Audio_Area.BP_Audio_Area_C
class ABP_Audio_Area_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_VisualizeArea;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  T_Priority;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   AudioBillboard;                                    // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger_Collision;                                 // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         GameStarted;                                       // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Audio_Manager_C*                   AudioReference;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  AreaName;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Priority;                                          // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_Audio>                     Ambient_Sounds;                                    // 0x2E0(0x10)(Edit, BlueprintVisible)
	TArray<struct FST_Audio>                     ExplorationMusic;                                  // 0x2F0(0x10)(Edit, BlueprintVisible)
	TArray<struct FST_Audio>                     CombatMusic;                                       // 0x300(0x10)(Edit, BlueprintVisible)
	TArray<struct FST_Audio>                     RandomAmbientSoundCue;                             // 0x310(0x10)(Edit, BlueprintVisible)
	double                                       RandomAmbientSoundMinDelay;                        // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RandomAmbientSoundMaxDelay;                        // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Switch_Method                   E_AudioSwitchMethod;                               // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             Switch_Stinger_Combat;                             // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Switch_Stinger_Combat_Delay;                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Switch_Stinger_Exploration;                        // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Switch_Stinger_Exploration_Delay;                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Delete_SM_VisualizeArea;                           // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOverwriteVisualizationSettings;                   // 0x359(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bVisualizeArea;                                    // 0x35A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DelayBeforeStart;                                  // 0x35B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDelayedMusic;                                   // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DelayedFadeDuration;                               // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DelayBetweenMusicMin;                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DelayBetweenMusicMax;                              // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Audio_Area_C* GetDefaultObj();

	void VisualizeArea(bool bNewVisibility);
	void UserConstructionScript(int32 Temp_int_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UMaterialInterface* Temp_object_Variable_5, int32 Temp_int_Variable_1, const struct FColor& K2Node_MakeStruct_Color, const struct FColor& K2Node_MakeStruct_Color_1, const struct FColor& K2Node_MakeStruct_Color_2, const struct FColor& K2Node_MakeStruct_Color_3, TArray<class ABP_Audio_Manager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Audio_Manager_C* CallFunc_Array_Get_Item, class UMaterialInterface* K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FColor& K2Node_Select_Default_1);
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void NewAudioManager(class ABP_Audio_Manager_C* AudioReference);
	void ExecuteUbergraph_BP_Audio_Area(int32 EntryPoint, class ABP_Audio_Area_C* Temp_object_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<class ABP_Audio_Manager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ABP_Audio_Manager_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_Audio_Manager_C* K2Node_CustomEvent_AudioReference);
};

}


