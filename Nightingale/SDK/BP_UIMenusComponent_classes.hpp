#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7A0 (0x840 - 0xA0)
// BlueprintGeneratedClass BP_UIMenusComponent.BP_UIMenusComponent_C
class UBP_UIMenusComponent_C : public UMenusComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerState_C*                     OwnerPlayerState;                                  // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  SpyglassSettings;                                  // 0xB0(0x6E0)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       Spyglass_FOV;                                      // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CreateRealmRequest;                                // 0x798(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Event_OnDialogueClosed;                            // 0x7A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            JoinDeploymentRequest;                             // 0x7B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GroupDetailsReturned;                              // 0x7C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FMember>                       PartyMembers;                                      // 0x7D8(0x10)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            UnlockedSchematicsReady;                           // 0x7E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            UnlockedRecipesReady;                              // 0x7F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FKey                                  SwitchWindowKey;                                   // 0x808(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  NarrativePlayablePopup;                            // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               BuildingObject;                                    // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RevivingNPC;                                       // 0x830(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_UIMenusComponent_C* GetDefaultObj();

	void IsEntityPinned(class FName ID, bool* IsPinned);
	void GetDefaultActionStationType(enum class Enum_ActionStationType* ActionStationType);
	void GetPingObjectType(enum class E_PingObjectType* PingObjectType, class FName* DataTableRowName);
	void OnErrorMessageAdded(struct FErrorMessageData& ErrorMessageData, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_Popup_Error_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue);
	void InitializeErrorMessaging(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController_1, const struct FErrorMessageData& CallFunc_GetNextError_OutErrorMessageData, bool CallFunc_GetNextError_ReturnValue, class UErrorMessagingSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController_2, bool CallFunc_IsValid_ReturnValue_1);
	bool IssueReportWindowCurrentlyOpen(class ANWXHUDBase* CallFunc_GetNWXHUD_ReturnValue, bool CallFunc_IsCurrentlyOpenWindowOfClass_ReturnValue);
	void CloseNarrativePlayablePopup(bool CallFunc_IsValid_ReturnValue);
	void OpenWindowFromKey(const struct FKey& Key, class UNWXCommonWindowWidget** Window, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, class UWBP_SocialScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, const struct FGameplayTag& CallFunc_GuideBookCraftingRecipesCategoryTag_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, class UWBP_PlayerMap_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_2, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_3, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_3, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_4, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_5, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_4, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_5, class UWBP_GuideBook_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4, class UWBP_InventoryScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_5, const struct FGameplayTag& CallFunc_GuideBookBuildingCategoryTag_ReturnValue);
	void ApplyDesiredInputMode(class UObject* Object, class UNWXWindowWidget* WindowWidget, class UNWXWindowWidget* K2Node_DynamicCast_AsNWXWindow_Widget, bool K2Node_DynamicCast_bSuccess, enum class EInputMode CallFunc_GetDesiredInputMode_ReturnValue);
	bool IsWindowOpen(class ABP_PlayerController_C* PlayerController, class UNWXWindowWidget* CallFunc_GetCurrentlyOpenWindow_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue);
	void BP_UIMenusComponent_AutoGenFunc(struct FGroup& Group, struct FOnlineServiceStatus& Status, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FMember& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool CanOpenWindow(class UNWXWindowWidget* Window, int32 ZOrder, class ANWXPlayerController* PlayerController, bool CallFunc_GetWorldIsTearingDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD_NWX_C* K2Node_DynamicCast_AsHUD_NWX, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetWorldIsTearingDown_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1);
	void OpenDialogueInternal(class UWBP_DialogueBase_C* Dialogue);
	void CloseLoadingScreen();
	void OpenLoadingScreen();
	void SetInputModeToGameAndUI(class UWidget* WidgetToFocus);
	void OpenDialogue(class AActor* NpcActor, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UWBP_DialogueBase_C* CallFunc_Create_ReturnValue);
	void GetOwningPlayerController(class ABP_PlayerController_C** PlayerController, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void AddPanelToViewport(class UUserWidget* Window, int32 ZOrder, class UNWXWindowWidget* CallFunc_GetCurrentlyOpenWindow_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EInputMode CallFunc_GetDesiredInputMode_ReturnValue, class ABP_PlayerController_C* CallFunc_GetOwningPlayerController_PlayerController, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager);
	void SetInputModeToGame();
	void SetInputModeToUI(class UWidget* WidgetToFocus);
	void Server_ReviveHumanNPC(class ABP_Creature_NPC_Human_C* NPCToRevive);
	void Client_OpenNPCScreen(class UBP_NPCComponent_C* NPCComponent, class AActor* NPC_Actor);
	void GetGroupDetails(const class FString& GroupID);
	void ReturnGroupDetails(const class FString& ID, const class FString& Name, const class FString& Message);
	void PopulatePartyMembersForClient(struct FMember& NewItem);
	void ReceiveBeginPlay();
	void EnterPlacementModeFromUI(const struct FStructureAssetReference& PlacementStructureAssetRef);
	void TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding);
	void TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding);
	void OnClosed(class UNWXWindowWidget* Window);
	void InstantSwitchToWindow(const struct FKey& Key);
	void OpenPlayerReadinessWindow();
	void OpenNarrativePlayablePopup(class FText TitleText, class FText BodyText);
	void OpenFeedbackWindow();
	void OpenRenameStructureMenu(class UObject* Structure);
	void ExecuteUbergraph_BP_UIMenusComponent(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue, class UWBP_ReportIssue_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class ABP_Creature_NPC_Human_C* K2Node_CustomEvent_NPCToRevive, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class UWBP_NPC_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UBP_NPCComponent_C* K2Node_CustomEvent_NpcComponent, class AActor* K2Node_CustomEvent_NPC_Actor, bool CallFunc_IsValid_ReturnValue_1, const class FString& K2Node_CustomEvent_GroupId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGroupComponentBase* CallFunc_GetGroupSystem_GroupComponent, const class FString& K2Node_CustomEvent_ID, const class FString& K2Node_CustomEvent_Name, const class FString& K2Node_CustomEvent_Message, const class FString& CallFunc_GetGroupName_ReturnValue, const struct FMember& K2Node_CustomEvent_NewItem, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FStructureAssetReference& K2Node_CustomEvent_PlacementStructureAssetRef, const struct FStructureAssetReference& K2Node_Event_StructureAssetRef, bool K2Node_Event_IsAdding_1, const struct FCraftingRecipeReference& K2Node_Event_CraftingRecipeRef, bool K2Node_Event_IsAdding, class UNWXWindowWidget* K2Node_CustomEvent_Window, class UNWXCommonWindowWidget* CallFunc_OpenWindowFromKey_Window, const struct FKey& K2Node_Event_Key, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_2, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess_1, class UWBP_PlayerReadiness_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_2, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue_3, class FText K2Node_CustomEvent_TitleText, class FText K2Node_CustomEvent_BodyText, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_3, class UWBP_Popup_General_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, TSubclassOf<class IInterface> Temp_class_Variable_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue_1, const class FString& CallFunc_ScreenShotDir_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IssueReportWindowCurrentlyOpen_ReturnValue, class UObject* K2Node_CustomEvent_Structure, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_2, class FText Temp_text_Variable, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_4, class UWBP_Structure_Rename_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4);
	void RevivingNPC__DelegateSignature(class ABP_Creature_NPC_Human_C* RevivedNPC);
	void UnlockedRecipesReady__DelegateSignature(const struct FS_UnlockedRecipes& SUnlockedRecipes);
	void UnlockedSchematicsReady__DelegateSignature(const struct FS_UnlockedSchematics& SUnlockedSchematics);
	void GroupDetailsReturned__DelegateSignature(const class FString& ID, const class FString& Name, const class FString& Message);
	void JoinDeploymentRequest__DelegateSignature(const class FString& ID, class ABP_PlayerController_C* RequestingController);
	void Event_OnDialogueClosed__DelegateSignature();
	void CreateRealmRequest__DelegateSignature(class AController* RequestingController, const struct FRealmRecipe& RealmRecipe);
};

}


