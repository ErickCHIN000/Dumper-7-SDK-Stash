#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x358 - 0x230)
// WidgetBlueprintGeneratedClass LobbyMenu.LobbyMenu_C
class ULobbyMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterSelect_C*                    CharacterSelect;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindow_C*                         ChatWindow;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ChooseCharacter;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameSettings_C*                       GameSettings;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeaveLobby;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               LobbySettings;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MapTexture;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PlayerList;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PlayerWindow;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ReadyStart;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SetGameSettings;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_3;                                       // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_5;                                       // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_39;                                      // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LobbyServerName;                                   // 0x2B8(0x18)(Edit, BlueprintVisible, Net, ExposeOnSpawn)
	class FText                                  MapName;                                           // 0x2D0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                  MapTime;                                           // 0x2E8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UTexture2D*                            MapImage;                                          // 0x300(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PlayersDisplay;                                    // 0x308(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class ALobbyPC_C*                            LobbyControllerRef;                                // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ReadyButtonText;                                   // 0x328(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class FText                                  ReadyStatus;                                       // 0x340(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULobbyMenu_C* GetDefaultObj();

	bool EnableReadyStartButton(bool ButtonStatus, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnFailure_644333AB436DA73363A6BC8814E69262();
	void OnSuccess_644333AB436DA73363A6BC8814E69262();
	void ClearPlayerList();
	void UpdatePlayerWindow(const struct FPlayerInfo& IncomingPlayerInfo);
	void Construct();
	void BndEvt__LeaveLobby_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReadyStart_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void UpdateStatus();
	void BndEvt__SetGameSettings_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ChooseCharacter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_LobbyMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FPlayerInfo& K2Node_CustomEvent_IncomingPlayerInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALobbyGM_C* K2Node_DynamicCast_AsLobby_GM, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC_2, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class UConnectedPlayer_C* CallFunc_Create_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_1);
};

}


