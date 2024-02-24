#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary
// (None)

class UClass* UDerivedStateIDGeneratorFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DerivedStateIDGeneratorFunctionLibrary");

	return Clss;
}


// DerivedStateIDGeneratorFunctionLibrary ExperienceStatesRuntime.Default__DerivedStateIDGeneratorFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDerivedStateIDGeneratorFunctionLibrary* UDerivedStateIDGeneratorFunctionLibrary::GetDefaultObj()
{
	static class UDerivedStateIDGeneratorFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDerivedStateIDGeneratorFunctionLibrary*>(UDerivedStateIDGeneratorFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary.GetDerivedIDForStateFromAssetData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EDerivedStates          State                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetData                  AssetData                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FExperienceStateID UDerivedStateIDGeneratorFunctionLibrary::GetDerivedIDForStateFromAssetData(enum class EDerivedStates State, struct FAssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DerivedStateIDGeneratorFunctionLibrary", "GetDerivedIDForStateFromAssetData");

	Params::UDerivedStateIDGeneratorFunctionLibrary_GetDerivedIDForStateFromAssetData_Params Parms{};

	Parms.State = State;
	Parms.AssetData = AssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary.GetDerivedIDForState
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EDerivedStates          State                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       UniqueID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FExperienceStateID UDerivedStateIDGeneratorFunctionLibrary::GetDerivedIDForState(enum class EDerivedStates State, struct FGuid& UniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DerivedStateIDGeneratorFunctionLibrary", "GetDerivedIDForState");

	Params::UDerivedStateIDGeneratorFunctionLibrary_GetDerivedIDForState_Params Parms{};

	Parms.State = State;
	Parms.UniqueID = UniqueID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary.FindUniqueID
// (Final, Native, Static, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FAssetData                  AssetData                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UDerivedStateIDGeneratorFunctionLibrary::FindUniqueID(struct FAssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DerivedStateIDGeneratorFunctionLibrary", "FindUniqueID");

	Params::UDerivedStateIDGeneratorFunctionLibrary_FindUniqueID_Params Parms{};

	Parms.AssetData = AssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ExperienceStatesRuntime.ExperienceStateCondition
// (None)

class UClass* UExperienceStateCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateCondition");

	return Clss;
}


// ExperienceStateCondition ExperienceStatesRuntime.Default__ExperienceStateCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateCondition* UExperienceStateCondition::GetDefaultObj()
{
	static class UExperienceStateCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateCondition*>(UExperienceStateCondition::StaticClass()->DefaultObject);

	return Default;
}


// Function ExperienceStatesRuntime.ExperienceStateCondition.OnCounterChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExperienceStateCondition::OnCounterChanged(struct FExperienceStateID& ID, int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateCondition", "OnCounterChanged");

	Params::UExperienceStateCondition_OnCounterChanged_Params Parms{};

	Parms.ID = ID;
	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ExperienceStatesRuntime.ExperienceStateDebugInterface
// (None)

class UClass* IExperienceStateDebugInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateDebugInterface");

	return Clss;
}


// ExperienceStateDebugInterface ExperienceStatesRuntime.Default__ExperienceStateDebugInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IExperienceStateDebugInterface* IExperienceStateDebugInterface::GetDefaultObj()
{
	static class IExperienceStateDebugInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IExperienceStateDebugInterface*>(IExperienceStateDebugInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateDefinitionProvider
// (None)

class UClass* IExperienceStateDefinitionProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateDefinitionProvider");

	return Clss;
}


// ExperienceStateDefinitionProvider ExperienceStatesRuntime.Default__ExperienceStateDefinitionProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IExperienceStateDefinitionProvider* IExperienceStateDefinitionProvider::GetDefaultObj()
{
	static class IExperienceStateDefinitionProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IExperienceStateDefinitionProvider*>(IExperienceStateDefinitionProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateDefinitionSource
// (None)

class UClass* UExperienceStateDefinitionSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateDefinitionSource");

	return Clss;
}


// ExperienceStateDefinitionSource ExperienceStatesRuntime.Default__ExperienceStateDefinitionSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateDefinitionSource* UExperienceStateDefinitionSource::GetDefaultObj()
{
	static class UExperienceStateDefinitionSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateDefinitionSource*>(UExperienceStateDefinitionSource::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateDefinitionSubSystemConfig
// (None)

class UClass* UExperienceStateDefinitionSubSystemConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateDefinitionSubSystemConfig");

	return Clss;
}


// ExperienceStateDefinitionSubSystemConfig ExperienceStatesRuntime.Default__ExperienceStateDefinitionSubSystemConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateDefinitionSubSystemConfig* UExperienceStateDefinitionSubSystemConfig::GetDefaultObj()
{
	static class UExperienceStateDefinitionSubSystemConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateDefinitionSubSystemConfig*>(UExperienceStateDefinitionSubSystemConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateDefinitionSubSystem
// (None)

class UClass* UExperienceStateDefinitionSubSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateDefinitionSubSystem");

	return Clss;
}


// ExperienceStateDefinitionSubSystem ExperienceStatesRuntime.Default__ExperienceStateDefinitionSubSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateDefinitionSubSystem* UExperienceStateDefinitionSubSystem::GetDefaultObj()
{
	static class UExperienceStateDefinitionSubSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateDefinitionSubSystem*>(UExperienceStateDefinitionSubSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateEventInterface
// (None)

class UClass* IExperienceStateEventInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateEventInterface");

	return Clss;
}


// ExperienceStateEventInterface ExperienceStatesRuntime.Default__ExperienceStateEventInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IExperienceStateEventInterface* IExperienceStateEventInterface::GetDefaultObj()
{
	static class IExperienceStateEventInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IExperienceStateEventInterface*>(IExperienceStateEventInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ExperienceStatesRuntime.ExperienceStateEventInterface.UnbindEventFrom_ExperienceStatesReady
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IExperienceStateEventInterface::UnbindEventFrom_ExperienceStatesReady(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateEventInterface", "UnbindEventFrom_ExperienceStatesReady");

	Params::IExperienceStateEventInterface_UnbindEventFrom_ExperienceStatesReady_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ExperienceStatesRuntime.ExperienceStateEventInterface.UnbindEventFrom_ExperienceStateChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ExperienceStateID                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IExperienceStateEventInterface::UnbindEventFrom_ExperienceStateChanged(struct FExperienceStateID& ExperienceStateID, FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateEventInterface", "UnbindEventFrom_ExperienceStateChanged");

	Params::IExperienceStateEventInterface_UnbindEventFrom_ExperienceStateChanged_Params Parms{};

	Parms.ExperienceStateID = ExperienceStateID;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ExperienceStatesRuntime.ExperienceStateEventInterface.BindEventTo_ExperienceStatesReady
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IExperienceStateEventInterface::BindEventTo_ExperienceStatesReady(FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateEventInterface", "BindEventTo_ExperienceStatesReady");

	Params::IExperienceStateEventInterface_BindEventTo_ExperienceStatesReady_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ExperienceStatesRuntime.ExperienceStateEventInterface.BindEventTo_ExperienceStateChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ExperienceStateID                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Event                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IExperienceStateEventInterface::BindEventTo_ExperienceStateChanged(struct FExperienceStateID& ExperienceStateID, FDelegateProperty_& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateEventInterface", "BindEventTo_ExperienceStateChanged");

	Params::IExperienceStateEventInterface_BindEventTo_ExperienceStateChanged_Params Parms{};

	Parms.ExperienceStateID = ExperienceStateID;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ExperienceStatesRuntime.ExperienceStateFunctionLibrary
// (None)

class UClass* UExperienceStateFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateFunctionLibrary");

	return Clss;
}


// ExperienceStateFunctionLibrary ExperienceStatesRuntime.Default__ExperienceStateFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateFunctionLibrary* UExperienceStateFunctionLibrary::GetDefaultObj()
{
	static class UExperienceStateFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateFunctionLibrary*>(UExperienceStateFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.ToDebugString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UExperienceStateFunctionLibrary::ToDebugString(struct FExperienceStateID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateFunctionLibrary", "ToDebugString");

	Params::UExperienceStateFunctionLibrary_ToDebugString_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.TestExperienceStateValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Reader                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENWXMathComparison      Comparator                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGetResult              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExperienceStateFunctionLibrary::TestExperienceStateValue(class UObject* Reader, struct FExperienceStateID& ID, enum class ENWXMathComparison Comparator, int32 TargetValue, enum class EGetResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateFunctionLibrary", "TestExperienceStateValue");

	Params::UExperienceStateFunctionLibrary_TestExperienceStateValue_Params Parms{};

	Parms.Reader = Reader;
	Parms.ID = ID;
	Parms.Comparator = Comparator;
	Parms.TargetValue = TargetValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.SetExperienceStateValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Writer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGetResult              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UExperienceStateFunctionLibrary::SetExperienceStateValue(class UObject* Writer, struct FExperienceStateID& ID, int32 Value, enum class EGetResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateFunctionLibrary", "SetExperienceStateValue");

	Params::UExperienceStateFunctionLibrary_SetExperienceStateValue_Params Parms{};

	Parms.Writer = Writer;
	Parms.ID = ID;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.ReadExperienceStateValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Reader                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGetResult              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UExperienceStateFunctionLibrary::ReadExperienceStateValue(class UObject* Reader, struct FExperienceStateID& ID, enum class EGetResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateFunctionLibrary", "ReadExperienceStateValue");

	Params::UExperienceStateFunctionLibrary_ReadExperienceStateValue_Params Parms{};

	Parms.Reader = Reader;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.ModifyExperienceStateValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Writer                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Change                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGetResult              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UExperienceStateFunctionLibrary::ModifyExperienceStateValue(class UObject* Writer, struct FExperienceStateID& ID, int32 Change, enum class EGetResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateFunctionLibrary", "ModifyExperienceStateValue");

	Params::UExperienceStateFunctionLibrary_ModifyExperienceStateValue_Params Parms{};

	Parms.Writer = Writer;
	Parms.ID = ID;
	Parms.Change = Change;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.EqualEqual_FExperienceStateID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FExperienceStateID          A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FExperienceStateID          B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExperienceStateFunctionLibrary::EqualEqual_FExperienceStateID(struct FExperienceStateID& A, struct FExperienceStateID& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateFunctionLibrary", "EqualEqual_FExperienceStateID");

	Params::UExperienceStateFunctionLibrary_EqualEqual_FExperienceStateID_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ExperienceStatesRuntime.ExperienceStateIDBuilder
// (None)

class UClass* UExperienceStateIDBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateIDBuilder");

	return Clss;
}


// ExperienceStateIDBuilder ExperienceStatesRuntime.Default__ExperienceStateIDBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateIDBuilder* UExperienceStateIDBuilder::GetDefaultObj()
{
	static class UExperienceStateIDBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateIDBuilder*>(UExperienceStateIDBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateReaderInterface
// (None)

class UClass* IExperienceStateReaderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateReaderInterface");

	return Clss;
}


// ExperienceStateReaderInterface ExperienceStatesRuntime.Default__ExperienceStateReaderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IExperienceStateReaderInterface* IExperienceStateReaderInterface::GetDefaultObj()
{
	static class IExperienceStateReaderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IExperienceStateReaderInterface*>(IExperienceStateReaderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateRequirement
// (None)

class UClass* UExperienceStateRequirement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateRequirement");

	return Clss;
}


// ExperienceStateRequirement ExperienceStatesRuntime.Default__ExperienceStateRequirement
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateRequirement* UExperienceStateRequirement::GetDefaultObj()
{
	static class UExperienceStateRequirement* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateRequirement*>(UExperienceStateRequirement::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateReward
// (None)

class UClass* UExperienceStateReward::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateReward");

	return Clss;
}


// ExperienceStateReward ExperienceStatesRuntime.Default__ExperienceStateReward
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateReward* UExperienceStateReward::GetDefaultObj()
{
	static class UExperienceStateReward* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateReward*>(UExperienceStateReward::StaticClass()->DefaultObject);

	return Default;
}


// Class ExperienceStatesRuntime.ExperienceStateTrackerComponent
// (None)

class UClass* UExperienceStateTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateTrackerComponent");

	return Clss;
}


// ExperienceStateTrackerComponent ExperienceStatesRuntime.Default__ExperienceStateTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UExperienceStateTrackerComponent* UExperienceStateTrackerComponent::GetDefaultObj()
{
	static class UExperienceStateTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UExperienceStateTrackerComponent*>(UExperienceStateTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ExperienceStatesRuntime.ExperienceStateTrackerComponent.Server_WriteExperienceState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FExperienceStateID          ExperienceStateID                                                (ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExperienceStateTrackerComponent::Server_WriteExperienceState(struct FExperienceStateID& ExperienceStateID, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateTrackerComponent", "Server_WriteExperienceState");

	Params::UExperienceStateTrackerComponent_Server_WriteExperienceState_Params Parms{};

	Parms.ExperienceStateID = ExperienceStateID;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ExperienceStatesRuntime.ExperienceStateTrackerComponent.OnRep_CompressedExperienceStateBuffer
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FCompressedExperienceStates PreviousValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UExperienceStateTrackerComponent::OnRep_CompressedExperienceStateBuffer(struct FCompressedExperienceStates& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExperienceStateTrackerComponent", "OnRep_CompressedExperienceStateBuffer");

	Params::UExperienceStateTrackerComponent_OnRep_CompressedExperienceStateBuffer_Params Parms{};

	Parms.PreviousValue = PreviousValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ExperienceStatesRuntime.ExperienceStateWriterInterface
// (None)

class UClass* IExperienceStateWriterInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExperienceStateWriterInterface");

	return Clss;
}


// ExperienceStateWriterInterface ExperienceStatesRuntime.Default__ExperienceStateWriterInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IExperienceStateWriterInterface* IExperienceStateWriterInterface::GetDefaultObj()
{
	static class IExperienceStateWriterInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IExperienceStateWriterInterface*>(IExperienceStateWriterInterface::StaticClass()->DefaultObject);

	return Default;
}

}


