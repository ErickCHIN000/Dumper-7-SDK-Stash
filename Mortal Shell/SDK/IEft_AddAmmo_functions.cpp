#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_AddAmmo.IEft_AddAmmo_C
// (None)

class UClass* UIEft_AddAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_AddAmmo_C");

	return Clss;
}


// IEft_AddAmmo_C IEft_AddAmmo.Default__IEft_AddAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_AddAmmo_C* UIEft_AddAmmo_C::GetDefaultObj()
{
	static class UIEft_AddAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_AddAmmo_C*>(UIEft_AddAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_AddAmmo.IEft_AddAmmo_C.OnPickUp
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_AddAmmo_C::OnPickUp(class FName ItemId, class AActor* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddAmmo_C", "OnPickUp");

	Params::UIEft_AddAmmo_C_OnPickUp_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_AddAmmo.IEft_AddAmmo_C.ExecuteUbergraph_IEft_AddAmmo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ItemID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_PlayerCharacter                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_AddAmmo_C::ExecuteUbergraph_IEft_AddAmmo(int32 EntryPoint, class FName K2Node_Event_ItemID, class AActor* K2Node_Event_PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_AddAmmo_C", "ExecuteUbergraph_IEft_AddAmmo");

	Params::UIEft_AddAmmo_C_ExecuteUbergraph_IEft_AddAmmo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemID = K2Node_Event_ItemID;
	Parms.K2Node_Event_PlayerCharacter = K2Node_Event_PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}

}


