#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxTimeOfDay.MaterialExpressionTimeOfDay
// (None)

class UClass* UMaterialExpressionTimeOfDay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionTimeOfDay");

	return Clss;
}


// MaterialExpressionTimeOfDay GbxTimeOfDay.Default__MaterialExpressionTimeOfDay
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionTimeOfDay* UMaterialExpressionTimeOfDay::GetDefaultObj()
{
	static class UMaterialExpressionTimeOfDay* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionTimeOfDay*>(UMaterialExpressionTimeOfDay::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTimeOfDay.TimeOfDayActor
// (Actor)

class UClass* ATimeOfDayActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayActor");

	return Clss;
}


// TimeOfDayActor GbxTimeOfDay.Default__TimeOfDayActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATimeOfDayActor* ATimeOfDayActor::GetDefaultObj()
{
	static class ATimeOfDayActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATimeOfDayActor*>(ATimeOfDayActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTimeOfDay.TimeOfDayActor.GetDirectionalLightComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDirectionalLightComponent*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDirectionalLightComponent* ATimeOfDayActor::GetDirectionalLightComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayActor", "GetDirectionalLightComponent");

	Params::ATimeOfDayActor_GetDirectionalLightComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTimeOfDay.TimeOfDayActor.EnumerateLayerNames
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class FName>                OutLayerNames                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ATimeOfDayActor::EnumerateLayerNames(TArray<class FName>* OutLayerNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayActor", "EnumerateLayerNames");

	Params::ATimeOfDayActor_EnumerateLayerNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLayerNames != nullptr)
		*OutLayerNames = std::move(Parms.OutLayerNames);

}


// Function GbxTimeOfDay.TimeOfDayActor.AddEventListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InListener                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ATimeOfDayActor::AddEventListener(class UObject* InListener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayActor", "AddEventListener");

	Params::ATimeOfDayActor_AddEventListener_Params Parms{};

	Parms.InListener = InListener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTimeOfDay.TimeOfDayBlueprintLibrary
// (None)

class UClass* UTimeOfDayBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayBlueprintLibrary");

	return Clss;
}


// TimeOfDayBlueprintLibrary GbxTimeOfDay.Default__TimeOfDayBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayBlueprintLibrary* UTimeOfDayBlueprintLibrary::GetDefaultObj()
{
	static class UTimeOfDayBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayBlueprintLibrary*>(UTimeOfDayBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionUpOneLayer
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::TransitionUpOneLayer(class UObject* WorldContextObject, float TransitionDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "TransitionUpOneLayer");

	Params::UTimeOfDayBlueprintLibrary_TransitionUpOneLayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TransitionDuration = TransitionDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionToLayer
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ToLayer                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::TransitionToLayer(class UObject* WorldContextObject, const class FString& ToLayer, float TransitionDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "TransitionToLayer");

	Params::UTimeOfDayBlueprintLibrary_TransitionToLayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ToLayer = ToLayer;
	Parms.TransitionDuration = TransitionDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.TransitionDownOneLayer
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::TransitionDownOneLayer(class UObject* WorldContextObject, float TransitionDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "TransitionDownOneLayer");

	Params::UTimeOfDayBlueprintLibrary_TransitionDownOneLayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TransitionDuration = TransitionDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.StartTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::StartTimeOfDay(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "StartTimeOfDay");

	Params::UTimeOfDayBlueprintLibrary_StartTimeOfDay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.SetTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewTimeOfDay                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::SetTimeOfDay(class UObject* WorldContextObject, float NewTimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "SetTimeOfDay");

	Params::UTimeOfDayBlueprintLibrary_SetTimeOfDay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewTimeOfDay = NewTimeOfDay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.PauseTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::PauseTimeOfDay(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "PauseTimeOfDay");

	Params::UTimeOfDayBlueprintLibrary_PauseTimeOfDay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDayState
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETimeOfDayState         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETimeOfDayState UTimeOfDayBlueprintLibrary::GetTimeOfDayState(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "GetTimeOfDayState");

	Params::UTimeOfDayBlueprintLibrary_GetTimeOfDayState_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.GetTimeOfDay
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeOfDayBlueprintLibrary::GetTimeOfDay(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "GetTimeOfDay");

	Params::UTimeOfDayBlueprintLibrary_GetTimeOfDay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxTimeOfDay.TimeOfDayBlueprintLibrary.AddTimeOfDayListener
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InListener                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayBlueprintLibrary::AddTimeOfDayListener(class UObject* WorldContextObject, class UObject* InListener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayBlueprintLibrary", "AddTimeOfDayListener");

	Params::UTimeOfDayBlueprintLibrary_AddTimeOfDayListener_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InListener = InListener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTimeOfDay.TimeOfDayComponent
// (SceneComponent)

class UClass* UTimeOfDayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayComponent");

	return Clss;
}


// TimeOfDayComponent GbxTimeOfDay.Default__TimeOfDayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayComponent* UTimeOfDayComponent::GetDefaultObj()
{
	static class UTimeOfDayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayComponent*>(UTimeOfDayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTimeOfDay.TimeOfDayComponent.SetUseCinematicTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUseCinematicTimeOfDay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayComponent::SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayComponent", "SetUseCinematicTimeOfDay");

	Params::UTimeOfDayComponent_SetUseCinematicTimeOfDay_Params Parms{};

	Parms.InUseCinematicTimeOfDay = InUseCinematicTimeOfDay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTimeOfDay.TimeOfDayComponent.SetCinematicTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCinematicTimeOfDay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTimeOfDayComponent::SetCinematicTimeOfDay(float InCinematicTimeOfDay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TimeOfDayComponent", "SetCinematicTimeOfDay");

	Params::UTimeOfDayComponent_SetCinematicTimeOfDay_Params Parms{};

	Parms.InCinematicTimeOfDay = InCinematicTimeOfDay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTimeOfDay.TimeOfDayCycle
// (None)

class UClass* UTimeOfDayCycle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayCycle");

	return Clss;
}


// TimeOfDayCycle GbxTimeOfDay.Default__TimeOfDayCycle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayCycle* UTimeOfDayCycle::GetDefaultObj()
{
	static class UTimeOfDayCycle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayCycle*>(UTimeOfDayCycle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTimeOfDay.TimeOfDayCycleInstance
// (None)

class UClass* UTimeOfDayCycleInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayCycleInstance");

	return Clss;
}


// TimeOfDayCycleInstance GbxTimeOfDay.Default__TimeOfDayCycleInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayCycleInstance* UTimeOfDayCycleInstance::GetDefaultObj()
{
	static class UTimeOfDayCycleInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayCycleInstance*>(UTimeOfDayCycleInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTimeOfDay.TimeOfDayKeyBase
// (None)

class UClass* UTimeOfDayKeyBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayKeyBase");

	return Clss;
}


// TimeOfDayKeyBase GbxTimeOfDay.Default__TimeOfDayKeyBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayKeyBase* UTimeOfDayKeyBase::GetDefaultObj()
{
	static class UTimeOfDayKeyBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayKeyBase*>(UTimeOfDayKeyBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTimeOfDay.TimeOfDayEventKey
// (None)

class UClass* UTimeOfDayEventKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayEventKey");

	return Clss;
}


// TimeOfDayEventKey GbxTimeOfDay.Default__TimeOfDayEventKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayEventKey* UTimeOfDayEventKey::GetDefaultObj()
{
	static class UTimeOfDayEventKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayEventKey*>(UTimeOfDayEventKey::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTimeOfDay.TimeOfDayLayer
// (None)

class UClass* UTimeOfDayLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayLayer");

	return Clss;
}


// TimeOfDayLayer GbxTimeOfDay.Default__TimeOfDayLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayLayer* UTimeOfDayLayer::GetDefaultObj()
{
	static class UTimeOfDayLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayLayer*>(UTimeOfDayLayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTimeOfDay.TimeOfDayPropertyKey
// (None)

class UClass* UTimeOfDayPropertyKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeOfDayPropertyKey");

	return Clss;
}


// TimeOfDayPropertyKey GbxTimeOfDay.Default__TimeOfDayPropertyKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UTimeOfDayPropertyKey* UTimeOfDayPropertyKey::GetDefaultObj()
{
	static class UTimeOfDayPropertyKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UTimeOfDayPropertyKey*>(UTimeOfDayPropertyKey::StaticClass()->DefaultObject);

	return Default;
}

}


