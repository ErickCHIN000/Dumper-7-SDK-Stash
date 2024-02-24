#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameRulesRuntime.GameRule
// (None)

class UClass* UGameRule::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameRule");

	return Clss;
}


// GameRule GameRulesRuntime.Default__GameRule
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameRule* UGameRule::GetDefaultObj()
{
	static class UGameRule* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameRule*>(UGameRule::StaticClass()->DefaultObject);

	return Default;
}


// Class GameRulesRuntime.GameRuleArbiter
// (None)

class UClass* IGameRuleArbiter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameRuleArbiter");

	return Clss;
}


// GameRuleArbiter GameRulesRuntime.Default__GameRuleArbiter
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameRuleArbiter* IGameRuleArbiter::GetDefaultObj()
{
	static class IGameRuleArbiter* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameRuleArbiter*>(IGameRuleArbiter::StaticClass()->DefaultObject);

	return Default;
}


// Class GameRulesRuntime.GameRuleContainer
// (None)

class UClass* IGameRuleContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameRuleContainer");

	return Clss;
}


// GameRuleContainer GameRulesRuntime.Default__GameRuleContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameRuleContainer* IGameRuleContainer::GetDefaultObj()
{
	static class IGameRuleContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameRuleContainer*>(IGameRuleContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class GameRulesRuntime.GameRulePlayer
// (None)

class UClass* UGameRulePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameRulePlayer");

	return Clss;
}


// GameRulePlayer GameRulesRuntime.Default__GameRulePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameRulePlayer* UGameRulePlayer::GetDefaultObj()
{
	static class UGameRulePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameRulePlayer*>(UGameRulePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GameRulesRuntime.GameRuleProvider
// (None)

class UClass* IGameRuleProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameRuleProvider");

	return Clss;
}


// GameRuleProvider GameRulesRuntime.Default__GameRuleProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameRuleProvider* IGameRuleProvider::GetDefaultObj()
{
	static class IGameRuleProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameRuleProvider*>(IGameRuleProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function GameRulesRuntime.GameRuleProvider.UnbindEventFrom_GameRuleEvents
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGameRuleProvider::UnbindEventFrom_GameRuleEvents(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameRuleProvider", "UnbindEventFrom_GameRuleEvents");

	Params::IGameRuleProvider_UnbindEventFrom_GameRuleEvents_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameRulesRuntime.GameRuleProvider.BindEventTo_GameRuleEvents
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGameRuleProvider::BindEventTo_GameRuleEvents(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameRuleProvider", "BindEventTo_GameRuleEvents");

	Params::IGameRuleProvider_BindEventTo_GameRuleEvents_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameRulesRuntime.GameRuleRealm
// (None)

class UClass* UGameRuleRealm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameRuleRealm");

	return Clss;
}


// GameRuleRealm GameRulesRuntime.Default__GameRuleRealm
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameRuleRealm* UGameRuleRealm::GetDefaultObj()
{
	static class UGameRuleRealm* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameRuleRealm*>(UGameRuleRealm::StaticClass()->DefaultObject);

	return Default;
}

}


