#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExploreItem.ExploreItem_C
// (None)

class UClass* UExploreItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExploreItem_C");

	return Clss;
}


// ExploreItem_C ExploreItem.Default__ExploreItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExploreItem_C* UExploreItem_C::GetDefaultObj()
{
	static class UExploreItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExploreItem_C*>(UExploreItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ExploreItem.ExploreItem_C.GetProgressMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UExploreItem_C::GetProgressMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExploreItem_C", "GetProgressMax");

	Params::UExploreItem_C_GetProgressMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ExploreItem.ExploreItem_C.OnRemoveFromPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExploreItem_C::OnRemoveFromPlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExploreItem_C", "OnRemoveFromPlayer");

	Params::UExploreItem_C_OnRemoveFromPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExploreItem.ExploreItem_C.OnGivePlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExploreItem_C::OnGivePlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExploreItem_C", "OnGivePlayer");

	Params::UExploreItem_C_OnGivePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExploreItem.ExploreItem_C.OnItemExplored_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHInventoryPlaceholder*     ExploredItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UExploreItem_C::OnItemExplored_Event_0(class USHInventoryPlaceholder* ExploredItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExploreItem_C", "OnItemExplored_Event_0");

	Params::UExploreItem_C_OnItemExplored_Event_0_Params Parms{};

	Parms.ExploredItem = ExploredItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ExploreItem.ExploreItem_C.ExecuteUbergraph_ExploreItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Player_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHInventoryPlaceholder*     K2Node_CustomEvent_ExploredItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UExploreItem_C::ExecuteUbergraph_ExploreItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, class USHInventoryPlaceholder* K2Node_CustomEvent_ExploredItem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExploreItem_C", "ExecuteUbergraph_ExploreItem");

	Params::UExploreItem_C_ExecuteUbergraph_ExploreItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Player_1 = K2Node_Event_Player_1;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.K2Node_CustomEvent_ExploredItem = K2Node_CustomEvent_ExploredItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


