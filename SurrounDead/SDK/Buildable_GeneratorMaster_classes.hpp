#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x431 - 0x3D1)
// BlueprintGeneratedClass Buildable_GeneratorMaster.Buildable_GeneratorMaster_C
class ABuildable_GeneratorMaster_C : public ABuildable_MASTER_C
{
public:
	uint8                                        Pad_2851[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sphere;                                            // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Collision;                                         // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentFuel;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxFuel;                                           // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TurnedOn_;                                         // 0x408(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2865[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ShakeTimer;                                        // 0x410(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FuelTimer;                                         // 0x418(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FindObjectsTimer;                                  // 0x420(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                 Player;                                            // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerClicked_;                                    // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuildable_GeneratorMaster_C* GetDefaultObj();

	void OnRep_CurrentFuel();
	void FuelCost(bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void Shake(const struct FVector& RelativeMeshLoc, double SpriteShakeHor, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void OnRep_TurnedOn_(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2);
	void GetObjects(TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IBPI_Buildables_C> K2Node_DynamicCast_AsBPI_Buildables, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Buildables_C> K2Node_DynamicCast_AsBPI_Buildables_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Requires_Power__Required_, TScriptInterface<class IBPI_Buildables_C> K2Node_DynamicCast_AsBPI_Buildables_2, bool K2Node_DynamicCast_bSuccess_2);
	void ActorLoaded();
	void ReceiveBeginPlay();
	void OnBeginInteract(class AActor* InteractingActor);
	void OnEndInteract();
	void Svr_UpdateFuel(double Fuel);
	void Client_Notification(class FText Message, class UTexture2D* Icon, const struct FLinearColor& Icon_Colour, double Delay);
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void BndEvt__BP_CookingStation_AIOSubject_K2Node_ComponentBoundEvent_0_OnOptimizationUpdate__DelegateSignature(bool bIsBeyondLastLayer, int32 LayerIndex, bool bIsSeen);
	void ExecuteUbergraph_Buildable_GeneratorMaster(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsBeyondLastLayer, int32 K2Node_ComponentBoundEvent_LayerIndex, bool K2Node_ComponentBoundEvent_bIsSeen, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class AActor* K2Node_Event_InteractingActor, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double K2Node_CustomEvent_Fuel, class AActor* CallFunc_GetOwner_ReturnValue, class FText K2Node_CustomEvent_Message, class UTexture2D* K2Node_CustomEvent_Icon, const struct FLinearColor& K2Node_CustomEvent_Icon_Colour, double K2Node_CustomEvent_Delay, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_ServerFindThenConsumeByItemID_Result, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInventoryVisible__Result, int32 K2Node_Event_OptionIndex, class AActor* K2Node_Event_ByActor, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD, class AHUD_Game_C* CallFunc_GetHUD_HUD_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class AHUD_Game_C* CallFunc_GetHUD_HUD_3, class FText CallFunc_Append_Text_Return_Value, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
};

}


