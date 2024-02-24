#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericRepBooster.GenericRepBooster_C
// (Actor)

class UClass* AGenericRepBooster_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericRepBooster_C");

	return Clss;
}


// GenericRepBooster_C GenericRepBooster.Default__GenericRepBooster_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericRepBooster_C* AGenericRepBooster_C::GetDefaultObj()
{
	static class AGenericRepBooster_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericRepBooster_C*>(AGenericRepBooster_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericRepBooster.GenericRepBooster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGenericRepBooster_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericRepBooster_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericRepBooster.GenericRepBooster_C.OnPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHInventory*                Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericRepBooster_C::OnPickup(class ASHInventory* Inventory, class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericRepBooster_C", "OnPickup");

	Params::AGenericRepBooster_C_OnPickup_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericRepBooster.GenericRepBooster_C.ExecuteUbergraph_GenericRepBooster
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHInventory*                K2Node_Event_Inventory                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Use_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericRepBooster_C::ExecuteUbergraph_GenericRepBooster(int32 EntryPoint, class ASHInventory* K2Node_Event_Inventory, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_Use_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericRepBooster_C", "ExecuteUbergraph_GenericRepBooster");

	Params::AGenericRepBooster_C_ExecuteUbergraph_GenericRepBooster_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Inventory = K2Node_Event_Inventory;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_Use_ReturnValue = CallFunc_Use_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


