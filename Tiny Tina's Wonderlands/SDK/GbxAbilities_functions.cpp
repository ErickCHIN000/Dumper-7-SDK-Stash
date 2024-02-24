#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxAbilities.GbxAbility
// (None)

class UClass* UGbxAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbility");

	return Clss;
}


// GbxAbility GbxAbilities.Default__GbxAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbility* UGbxAbility::GetDefaultObj()
{
	static class UGbxAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbility*>(UGbxAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAbilities.GbxAbility.OnUnregistered
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnUnregistered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnUnregistered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnResumed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnResumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnResumed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnRep_Manager
// (Final, Native, Private)
// Parameters:

void UGbxAbility::OnRep_Manager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnRep_Manager");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnRep_AbilityState
// (Final, Native, Private)
// Parameters:

void UGbxAbility::OnRep_AbilityState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnRep_AbilityState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnRegistered
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnRegistered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnRegistered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnPaused
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnPaused");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnForcedRefresh
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnForcedRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnForcedRefresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnDeactivated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnDeactivated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.OnActivated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UGbxAbility::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "OnActivated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.IsReplicated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAbility::IsReplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "IsReplicated");

	Params::UGbxAbility_IsReplicated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAbilities.GbxAbility.GetAbilityOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGbxAbility::GetAbilityOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "GetAbilityOwner");

	Params::UGbxAbility_GetAbilityOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAbilities.GbxAbility.Client_Deactivate
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:

void UGbxAbility::Client_Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "Client_Deactivate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbility.CalculateAbilityState
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EGbxAbilityState        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGbxAbilityState UGbxAbility::CalculateAbilityState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbility", "CalculateAbilityState");

	Params::UGbxAbility_CalculateAbilityState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAbilities.GbxAbilityEffectTargetResolutionData
// (None)

class UClass* UGbxAbilityEffectTargetResolutionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbilityEffectTargetResolutionData");

	return Clss;
}


// GbxAbilityEffectTargetResolutionData GbxAbilities.Default__GbxAbilityEffectTargetResolutionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbilityEffectTargetResolutionData* UGbxAbilityEffectTargetResolutionData::GetDefaultObj()
{
	static class UGbxAbilityEffectTargetResolutionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbilityEffectTargetResolutionData*>(UGbxAbilityEffectTargetResolutionData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAbilities.GbxAbilityManagerComponent
// (None)

class UClass* UGbxAbilityManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbilityManagerComponent");

	return Clss;
}


// GbxAbilityManagerComponent GbxAbilities.Default__GbxAbilityManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbilityManagerComponent* UGbxAbilityManagerComponent::GetDefaultObj()
{
	static class UGbxAbilityManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbilityManagerComponent*>(UGbxAbilityManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGbxAbility>     AbilityClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAbilityManagerComponent::RemoveAbility(TSubclassOf<class UGbxAbility> AbilityClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityManagerComponent", "RemoveAbility");

	Params::UGbxAbilityManagerComponent_RemoveAbility_Params Parms{};

	Parms.AbilityClass = AbilityClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAbilities.GbxAbilityManagerComponent.HasAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGbxAbility>     AbilityClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAbilityManagerComponent::HasAbility(TSubclassOf<class UGbxAbility> AbilityClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityManagerComponent", "HasAbility");

	Params::UGbxAbilityManagerComponent_HasAbility_Params Parms{};

	Parms.AbilityClass = AbilityClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAbilities.GbxAbilityManagerComponent.FindAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGbxAbility>     AbilityClass                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxAbility*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxAbility* UGbxAbilityManagerComponent::FindAbility(TSubclassOf<class UGbxAbility> AbilityClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityManagerComponent", "FindAbility");

	Params::UGbxAbilityManagerComponent_FindAbility_Params Parms{};

	Parms.AbilityClass = AbilityClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAbilities.GbxAbilityManagerComponent.AddAbility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilitySpec             Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UGbxAbility*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxAbility* UGbxAbilityManagerComponent::AddAbility(struct FGbxAbilitySpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityManagerComponent", "AddAbility");

	Params::UGbxAbilityManagerComponent_AddAbility_Params Parms{};

	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAbilities.GbxAbilityAttributePropertyValueResolver
// (None)

class UClass* UGbxAbilityAttributePropertyValueResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbilityAttributePropertyValueResolver");

	return Clss;
}


// GbxAbilityAttributePropertyValueResolver GbxAbilities.Default__GbxAbilityAttributePropertyValueResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbilityAttributePropertyValueResolver* UGbxAbilityAttributePropertyValueResolver::GetDefaultObj()
{
	static class UGbxAbilityAttributePropertyValueResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbilityAttributePropertyValueResolver*>(UGbxAbilityAttributePropertyValueResolver::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Owner
// (None)

class UClass* UGbxAbilityEffectTargetResolutionData_Owner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbilityEffectTargetResolutionData_Owner");

	return Clss;
}


// GbxAbilityEffectTargetResolutionData_Owner GbxAbilities.Default__GbxAbilityEffectTargetResolutionData_Owner
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbilityEffectTargetResolutionData_Owner* UGbxAbilityEffectTargetResolutionData_Owner::GetDefaultObj()
{
	static class UGbxAbilityEffectTargetResolutionData_Owner* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbilityEffectTargetResolutionData_Owner*>(UGbxAbilityEffectTargetResolutionData_Owner::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Self
// (None)

class UClass* UGbxAbilityEffectTargetResolutionData_Self::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbilityEffectTargetResolutionData_Self");

	return Clss;
}


// GbxAbilityEffectTargetResolutionData_Self GbxAbilities.Default__GbxAbilityEffectTargetResolutionData_Self
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbilityEffectTargetResolutionData_Self* UGbxAbilityEffectTargetResolutionData_Self::GetDefaultObj()
{
	static class UGbxAbilityEffectTargetResolutionData_Self* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbilityEffectTargetResolutionData_Self*>(UGbxAbilityEffectTargetResolutionData_Self::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary
// (None)

class UClass* UGbxAbilityResourceControllerBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAbilityResourceControllerBlueprintFunctionLibrary");

	return Clss;
}


// GbxAbilityResourceControllerBlueprintFunctionLibrary GbxAbilities.Default__GbxAbilityResourceControllerBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAbilityResourceControllerBlueprintFunctionLibrary* UGbxAbilityResourceControllerBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UGbxAbilityResourceControllerBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAbilityResourceControllerBlueprintFunctionLibrary*>(UGbxAbilityResourceControllerBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ResourcePoolDelegateController                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateSpec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::UnregisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate& Controller, struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityResourceControllerBlueprintFunctionLibrary", "UnregisterResourcePoolDelegate");

	Params::UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterResourcePoolDelegate_Params Parms{};

	Parms.Controller = Controller;
	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ConditionalDamageModifierController                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierSpec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::UnregisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier& Controller, struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityResourceControllerBlueprintFunctionLibrary", "UnregisterConditionalDamageModifier");

	Params::UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterConditionalDamageModifier_Params Parms{};

	Parms.Controller = Controller;
	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ScriptDelegateController                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGbxAbilityResourceSpec_ScriptDelegateSpec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::UnregisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate& Controller, struct FGbxAbilityResourceSpec_ScriptDelegate& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityResourceControllerBlueprintFunctionLibrary", "UnregisterAbilityDelegate");

	Params::UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterAbilityDelegate_Params Parms{};

	Parms.Controller = Controller;
	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ResourcePoolDelegateController                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGbxAbilityResourceSpec_ResourcePoolDelegateSpec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::RegisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate& Controller, struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityResourceControllerBlueprintFunctionLibrary", "RegisterResourcePoolDelegate");

	Params::UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterResourcePoolDelegate_Params Parms{};

	Parms.Controller = Controller;
	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ConditionalDamageModifierController                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierSpec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::RegisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier& Controller, struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityResourceControllerBlueprintFunctionLibrary", "RegisterConditionalDamageModifier");

	Params::UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterConditionalDamageModifier_Params Parms{};

	Parms.Controller = Controller;
	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGbxAbilityResourceController_ScriptDelegateController                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGbxAbilityResourceSpec_ScriptDelegateSpec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UGbxAbilityResourceControllerBlueprintFunctionLibrary::RegisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate& Controller, struct FGbxAbilityResourceSpec_ScriptDelegate& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAbilityResourceControllerBlueprintFunctionLibrary", "RegisterAbilityDelegate");

	Params::UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterAbilityDelegate_Params Parms{};

	Parms.Controller = Controller;
	Parms.Spec = Spec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAbilities.GbxCondition_HasAbility
// (None)

class UClass* UGbxCondition_HasAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_HasAbility");

	return Clss;
}


// GbxCondition_HasAbility GbxAbilities.Default__GbxCondition_HasAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_HasAbility* UGbxCondition_HasAbility::GetDefaultObj()
{
	static class UGbxCondition_HasAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_HasAbility*>(UGbxCondition_HasAbility::StaticClass()->DefaultObject);

	return Default;
}

}


