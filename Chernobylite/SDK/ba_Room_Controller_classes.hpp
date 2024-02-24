#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x371 - 0x2DD)
// BlueprintGeneratedClass ba_Room_Controller.ba_Room_Controller_C
class Aba_Room_Controller_C : public Aba_ia_BaseInteractableObject_01_C
{
public:
	uint8                                        Pad_1C1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  Sm_Ch_Sc_Door_03_04;                               // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube;                                              // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InteractionDistance;                               // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1C2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInteractionWith;                                 // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ANote*                                 PlaceRoomHere;                                     // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                      Door;                                              // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_RoomSelection_C*                   Room_Selection;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Room_Index;                                        // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_RoomUpgrades_C*                    RoomUpgrades;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRoomBuild;                                       // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Is_opened;                                         // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         Never_used;                                        // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C54[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_TutorialWidget_C*                  Tutorial;                                          // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnShowTutorial;                                    // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Mytutorial;                                        // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_Room_Controller_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	float MaxInteractionDistance();
	void SetActive(bool InNewActive, bool CallFunc_Not_PreBool_ReturnValue);
	void OnPlayerFocusGainedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnPlayerFocusLostComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void InternalOnInteractionLockedStateChanged();
	void Delete_Room(class FName RoomID);
	void Add_New_Room(class FName RoomID, class UClass* SkillTree, TArray<class Abp_RoomWidgetController_C*>& Controllers, class FName RoomDataKey, class FName RoomDescKey);
	void RefreshDoors();
	void Hide_Indicator();
	void Show_Indicator();
	void TutorialEnded();
	void ExecuteUbergraph_ba_Room_Controller(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AMainPawnCpp* K2Node_Event_PlayerPawn_2, class UActorComponent* K2Node_Event_ComponentHit_2, class AMainPawnCpp* K2Node_Event_PlayerPawn_1, class UActorComponent* K2Node_Event_ComponentHit_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class FName K2Node_CustomEvent_RoomID_1, class FName K2Node_CustomEvent_RoomID, class UClass* K2Node_CustomEvent_SkillTree, TArray<class Abp_RoomWidgetController_C*>& K2Node_CustomEvent_Controllers, class FName K2Node_CustomEvent_RoomDataKey, class FName K2Node_CustomEvent_RoomDescKey, bool CallFunc_HaveValidLevel_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue);
	void OnShowTutorial__DelegateSignature();
	void OnRoomBuild__DelegateSignature();
	void OnInteractionWith__DelegateSignature();
};

}


