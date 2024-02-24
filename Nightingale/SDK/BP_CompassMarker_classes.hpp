#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x310 - 0x2A0)
// BlueprintGeneratedClass BP_CompassMarker.BP_CompassMarker_C
class ABP_CompassMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         SparkleRange;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_7603[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          IconTint;                                          // 0x2BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        PlayerId;                                          // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayer;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_760D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IconVisibilityDistance;                            // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                   MarkerRow;                                         // 0x2E0(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x2F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OwningActor;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CompassMarker_C* GetDefaultObj();

	void RemoveCompassMarker_FrCompass(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void AddCompassMarker_ToCompass(class AActor* MarkingActor, class AActor* CallFunc_GetParentActor_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue_1, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ICameraProviderInterface> K2Node_DynamicCast_AsCamera_Provider_Interface, bool K2Node_DynamicCast_bSuccess_2, class UCameraComponent* CallFunc_GetCamera_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCameraComponent* Temp_object_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AHUD* CallFunc_GetHUD_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void RemoveCompassMarker_FromCompass(class AActor* Self_Reference);
	void ReceiveBeginPlay();
	void Init();
	void ExecuteUbergraph_BP_CompassMarker(int32 EntryPoint, class AActor* CallFunc_GetParentActor_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPlayerId_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_CustomEvent_Self_Reference, bool CallFunc_IsValid_ReturnValue_1, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetPlayerId_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


