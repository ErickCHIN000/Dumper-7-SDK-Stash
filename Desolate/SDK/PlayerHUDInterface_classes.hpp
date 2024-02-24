#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PlayerHUDInterface.PlayerHUDInterface_C
class IPlayerHUDInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPlayerHUDInterface_C* GetDefaultObj();

	void HidePasswordWidget();
	void ShowPasswordWidget();
	void HideRestWidget();
	void _ShowRestWidget();
	void GetRestWidget(class URestWidget_C** RestWidget);
	void GetTutorialNotifyVisible(bool* IsVisible);
	void GetQuestZoneWidget(class UQuestZoneWidget_C** QuestZoneWidget);
	void BPI_Hide_HUD();
	void BPI_Show_HUD();
	void GetSearchBar(class USearchBar_v3_C** SearchBarWidget);
	void GetTargetBar(class UTargetBarWidget_v3_C** TargetBarWidget);
	void GetTextNotify(class UTextNotify_C** TextNotifyWidget);
	void ToggleCharacterUI(enum class ECharacterScreenType Screen);
	void ToggleOnlineList(bool bPressed);
	void GetAiStealthKillBar(class UAiStealthKillBar_C** AiKillBar);
	void GetSubtitlesBar(class USubtitlesBar_v3_C** Bar);
	void GetItemSelectionBar(class UItemSelectionBar_v3_C** SelectionBar);
	void GetChatWidget(class UChatWidget_v3_C** ChatWidget);
	void RedrawInventory();
};

}


