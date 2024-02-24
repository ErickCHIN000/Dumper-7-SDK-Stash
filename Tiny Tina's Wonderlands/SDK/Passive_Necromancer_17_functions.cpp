#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Necromancer_17.Passive_Necromancer_17_C
// (None)

class UClass* UPassive_Necromancer_17_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Necromancer_17_C");

	return Clss;
}


// Passive_Necromancer_17_C Passive_Necromancer_17.Default__Passive_Necromancer_17_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Necromancer_17_C* UPassive_Necromancer_17_C::GetDefaultObj()
{
	static class UPassive_Necromancer_17_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Necromancer_17_C*>(UPassive_Necromancer_17_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Necromancer_17.Passive_Necromancer_17_C.OakPassiveOnCastSpell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeMod*                 SpellMod                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        EquippedPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Necromancer_17_C::OakPassiveOnCastSpell(class AGrenadeMod* SpellMod, class AOakCharacter_Player* EquippedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Necromancer_17_C", "OakPassiveOnCastSpell");

	Params::UPassive_Necromancer_17_C_OakPassiveOnCastSpell_Params Parms{};

	Parms.SpellMod = SpellMod;
	Parms.EquippedPlayer = EquippedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Necromancer_17.Passive_Necromancer_17_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Necromancer_17_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Necromancer_17_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Necromancer_17.Passive_Necromancer_17_C.ExecuteUbergraph_Passive_Necromancer_17
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGrenadeMod*                 K2Node_Event_SpellMod                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_Event_EquippedPlayer                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_Necromancer_17_C::ExecuteUbergraph_Passive_Necromancer_17(int32 EntryPoint, class AGrenadeMod* K2Node_Event_SpellMod, class AOakCharacter_Player* K2Node_Event_EquippedPlayer, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Necromancer_17_C", "ExecuteUbergraph_Passive_Necromancer_17");

	Params::UPassive_Necromancer_17_C_ExecuteUbergraph_Passive_Necromancer_17_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SpellMod = K2Node_Event_SpellMod;
	Parms.K2Node_Event_EquippedPlayer = K2Node_Event_EquippedPlayer;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


