#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerHUDInterface.PlayerHUDInterface_C
// (None)

class UClass* IPlayerHUDInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerHUDInterface_C");

	return Clss;
}


// PlayerHUDInterface_C PlayerHUDInterface.Default__PlayerHUDInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPlayerHUDInterface_C* IPlayerHUDInterface_C::GetDefaultObj()
{
	static class IPlayerHUDInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPlayerHUDInterface_C*>(IPlayerHUDInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerHUDInterface.PlayerHUDInterface_C.HidePasswordWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::HidePasswordWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "HidePasswordWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.ShowPasswordWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::ShowPasswordWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "ShowPasswordWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.HideRestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::HideRestWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "HideRestWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C. ShowRestWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::_ShowRestWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", " ShowRestWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetRestWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URestWidget_C*               RestWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetRestWidget(class URestWidget_C** RestWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetRestWidget");

	Params::IPlayerHUDInterface_C_GetRestWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RestWidget != nullptr)
		*RestWidget = Parms.RestWidget;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetTutorialNotifyVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPlayerHUDInterface_C::GetTutorialNotifyVisible(bool* IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetTutorialNotifyVisible");

	Params::IPlayerHUDInterface_C_GetTutorialNotifyVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetQuestZoneWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestZoneWidget_C*          QuestZoneWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetQuestZoneWidget(class UQuestZoneWidget_C** QuestZoneWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetQuestZoneWidget");

	Params::IPlayerHUDInterface_C_GetQuestZoneWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QuestZoneWidget != nullptr)
		*QuestZoneWidget = Parms.QuestZoneWidget;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.BPI Hide HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::BPI_Hide_HUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "BPI Hide HUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.BPI Show HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::BPI_Show_HUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "BPI Show HUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetSearchBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USearchBar_v3_C*             SearchBarWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetSearchBar(class USearchBar_v3_C** SearchBarWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetSearchBar");

	Params::IPlayerHUDInterface_C_GetSearchBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SearchBarWidget != nullptr)
		*SearchBarWidget = Parms.SearchBarWidget;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetTargetBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTargetBarWidget_v3_C*       TargetBarWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetTargetBar(class UTargetBarWidget_v3_C** TargetBarWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetTargetBar");

	Params::IPlayerHUDInterface_C_GetTargetBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetBarWidget != nullptr)
		*TargetBarWidget = Parms.TargetBarWidget;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetTextNotify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextNotify_C*               TextNotifyWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetTextNotify(class UTextNotify_C** TextNotifyWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetTextNotify");

	Params::IPlayerHUDInterface_C_GetTextNotify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TextNotifyWidget != nullptr)
		*TextNotifyWidget = Parms.TextNotifyWidget;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.ToggleCharacterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterScreenType    Screen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::ToggleCharacterUI(enum class ECharacterScreenType Screen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "ToggleCharacterUI");

	Params::IPlayerHUDInterface_C_ToggleCharacterUI_Params Parms{};

	Parms.Screen = Screen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.ToggleOnlineList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPressed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IPlayerHUDInterface_C::ToggleOnlineList(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "ToggleOnlineList");

	Params::IPlayerHUDInterface_C_ToggleOnlineList_Params Parms{};

	Parms.bPressed = bPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetAiStealthKillBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAiStealthKillBar_C*         AiKillBar                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetAiStealthKillBar(class UAiStealthKillBar_C** AiKillBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetAiStealthKillBar");

	Params::IPlayerHUDInterface_C_GetAiStealthKillBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AiKillBar != nullptr)
		*AiKillBar = Parms.AiKillBar;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetSubtitlesBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubtitlesBar_v3_C*          Bar                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetSubtitlesBar(class USubtitlesBar_v3_C** Bar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetSubtitlesBar");

	Params::IPlayerHUDInterface_C_GetSubtitlesBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Bar != nullptr)
		*Bar = Parms.Bar;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetItemSelectionBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSelectionBar_v3_C*      SelectionBar                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetItemSelectionBar(class UItemSelectionBar_v3_C** SelectionBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetItemSelectionBar");

	Params::IPlayerHUDInterface_C_GetItemSelectionBar_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectionBar != nullptr)
		*SelectionBar = Parms.SelectionBar;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.GetChatWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChatWidget_v3_C*            ChatWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPlayerHUDInterface_C::GetChatWidget(class UChatWidget_v3_C** ChatWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "GetChatWidget");

	Params::IPlayerHUDInterface_C_GetChatWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ChatWidget != nullptr)
		*ChatWidget = Parms.ChatWidget;

}


// Function PlayerHUDInterface.PlayerHUDInterface_C.RedrawInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IPlayerHUDInterface_C::RedrawInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerHUDInterface_C", "RedrawInventory");



	UObject::ProcessEvent(Func, nullptr);

}

}


