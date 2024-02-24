#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CombatComponents.CCActivateCollisionNotifyWindow
// (None)

class UClass* UCCActivateCollisionNotifyWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCActivateCollisionNotifyWindow");

	return Clss;
}


// CCActivateCollisionNotifyWindow CombatComponents.Default__CCActivateCollisionNotifyWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UCCActivateCollisionNotifyWindow* UCCActivateCollisionNotifyWindow::GetDefaultObj()
{
	static class UCCActivateCollisionNotifyWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCActivateCollisionNotifyWindow*>(UCCActivateCollisionNotifyWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class CombatComponents.CCClearHitActorsNotify
// (None)

class UClass* UCCClearHitActorsNotify::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCClearHitActorsNotify");

	return Clss;
}


// CCClearHitActorsNotify CombatComponents.Default__CCClearHitActorsNotify
// (Public, ClassDefaultObject, ArchetypeObject)

class UCCClearHitActorsNotify* UCCClearHitActorsNotify::GetDefaultObj()
{
	static class UCCClearHitActorsNotify* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCClearHitActorsNotify*>(UCCClearHitActorsNotify::StaticClass()->DefaultObject);

	return Default;
}


// Class CombatComponents.CCCollisionHandlerComponent
// (None)

class UClass* UCCCollisionHandlerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCCollisionHandlerComponent");

	return Clss;
}


// CCCollisionHandlerComponent CombatComponents.Default__CCCollisionHandlerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCCCollisionHandlerComponent* UCCCollisionHandlerComponent::GetDefaultObj()
{
	static class UCCCollisionHandlerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCCollisionHandlerComponent*>(UCCCollisionHandlerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CombatComponents.CCCollisionHandlerComponent.UpdateCollidingComponents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCCCollidingComponent>CollidingComponents                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UCCCollisionHandlerComponent::UpdateCollidingComponents(TArray<struct FCCCollidingComponent>& CollidingComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "UpdateCollidingComponents");

	Params::UCCCollisionHandlerComponent_UpdateCollidingComponents_Params Parms{};

	Parms.CollidingComponents = CollidingComponents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.UpdateCollidingComponent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                Sockets                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCCCollisionHandlerComponent::UpdateCollidingComponent(class UPrimitiveComponent* Component, TArray<class FName>& Sockets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "UpdateCollidingComponent");

	Params::UCCCollisionHandlerComponent_UpdateCollidingComponent_Params Parms{};

	Parms.Component = Component;
	Parms.Sockets = Sockets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.TraceCheckLoop
// (Final, Native, Protected)
// Parameters:

void UCCCollisionHandlerComponent::TraceCheckLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "TraceCheckLoop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.SetActiveCollisionPart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECCCollisionPart        CollisionPart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCCCollisionHandlerComponent::SetActiveCollisionPart(enum class ECCCollisionPart CollisionPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "SetActiveCollisionPart");

	Params::UCCCollisionHandlerComponent_SetActiveCollisionPart_Params Parms{};

	Parms.CollisionPart = CollisionPart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.OnRep_IsCollisionActivated
// (Final, Native, Protected)
// Parameters:

void UCCCollisionHandlerComponent::OnRep_IsCollisionActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "OnRep_IsCollisionActivated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.IsCollisionActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCCCollisionHandlerComponent::IsCollisionActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "IsCollisionActivated");

	Params::UCCCollisionHandlerComponent_IsCollisionActivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CombatComponents.CCCollisionHandlerComponent.GetActivatedCollisionPart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECCCollisionPart        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECCCollisionPart UCCCollisionHandlerComponent::GetActivatedCollisionPart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "GetActivatedCollisionPart");

	Params::UCCCollisionHandlerComponent_GetActivatedCollisionPart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CombatComponents.CCCollisionHandlerComponent.DrawHitSphere
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCCCollisionHandlerComponent::DrawHitSphere(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "DrawHitSphere");

	Params::UCCCollisionHandlerComponent_DrawHitSphere_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.DrawDebugTrace
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCCCollisionHandlerComponent::DrawDebugTrace(const struct FVector& Start, const struct FVector& End)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "DrawDebugTrace");

	Params::UCCCollisionHandlerComponent_DrawDebugTrace_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.DeactivateCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCCCollisionHandlerComponent::DeactivateCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "DeactivateCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.ClearHitActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCCCollisionHandlerComponent::ClearHitActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "ClearHitActors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCCollisionHandlerComponent.ActivateCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECCCollisionPart        CollisionPart                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCCCollisionHandlerComponent::ActivateCollision(enum class ECCCollisionPart CollisionPart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCCollisionHandlerComponent", "ActivateCollision");

	Params::UCCCollisionHandlerComponent_ActivateCollision_Params Parms{};

	Parms.CollisionPart = CollisionPart;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CombatComponents.CCRotateOwnerNotify
// (None)

class UClass* UCCRotateOwnerNotify::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCRotateOwnerNotify");

	return Clss;
}


// CCRotateOwnerNotify CombatComponents.Default__CCRotateOwnerNotify
// (Public, ClassDefaultObject, ArchetypeObject)

class UCCRotateOwnerNotify* UCCRotateOwnerNotify::GetDefaultObj()
{
	static class UCCRotateOwnerNotify* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCRotateOwnerNotify*>(UCCRotateOwnerNotify::StaticClass()->DefaultObject);

	return Default;
}


// Class CombatComponents.CCRotateOwnerNotifyWindow
// (None)

class UClass* UCCRotateOwnerNotifyWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCRotateOwnerNotifyWindow");

	return Clss;
}


// CCRotateOwnerNotifyWindow CombatComponents.Default__CCRotateOwnerNotifyWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UCCRotateOwnerNotifyWindow* UCCRotateOwnerNotifyWindow::GetDefaultObj()
{
	static class UCCRotateOwnerNotifyWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCRotateOwnerNotifyWindow*>(UCCRotateOwnerNotifyWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class CombatComponents.CCRotatingOwnerComponent
// (None)

class UClass* UCCRotatingOwnerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCRotatingOwnerComponent");

	return Clss;
}


// CCRotatingOwnerComponent CombatComponents.Default__CCRotatingOwnerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCCRotatingOwnerComponent* UCCRotatingOwnerComponent::GetDefaultObj()
{
	static class UCCRotatingOwnerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCCRotatingOwnerComponent*>(UCCRotatingOwnerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CombatComponents.CCRotatingOwnerComponent.StopRotating
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCCRotatingOwnerComponent::StopRotating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "StopRotating");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCRotatingOwnerComponent.StartRotatingWithLimit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              MaxPossibleRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DegressPerSecond                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCCRotatingOwnerComponent::StartRotatingWithLimit(float MaxPossibleRotation, float DegressPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "StartRotatingWithLimit");

	Params::UCCRotatingOwnerComponent_StartRotatingWithLimit_Params Parms{};

	Parms.MaxPossibleRotation = MaxPossibleRotation;
	Parms.DegressPerSecond = DegressPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCRotatingOwnerComponent.StartRotating
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DegressPerSecond                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCCRotatingOwnerComponent::StartRotating(float Time, float DegressPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "StartRotating");

	Params::UCCRotatingOwnerComponent_StartRotating_Params Parms{};

	Parms.Time = Time;
	Parms.DegressPerSecond = DegressPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCRotatingOwnerComponent.SetOwnerRotation
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FRotator                    NewRotation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCCRotatingOwnerComponent::SetOwnerRotation(struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "SetOwnerRotation");

	Params::UCCRotatingOwnerComponent_SetOwnerRotation_Params Parms{};

	Parms.NewRotation = NewRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCRotatingOwnerComponent.NotifyOnRotatingStart
// (Final, Native, Protected)
// Parameters:

void UCCRotatingOwnerComponent::NotifyOnRotatingStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "NotifyOnRotatingStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCRotatingOwnerComponent.NotifyOnRotatingEnd
// (Final, Native, Protected)
// Parameters:

void UCCRotatingOwnerComponent::NotifyOnRotatingEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "NotifyOnRotatingEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CombatComponents.CCRotatingOwnerComponent.IsRotating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCCRotatingOwnerComponent::IsRotating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerComponent", "IsRotating");

	Params::UCCRotatingOwnerComponent_IsRotating_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CombatComponents.CCRotatingOwnerInterface
// (None)

class UClass* ICCRotatingOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCRotatingOwnerInterface");

	return Clss;
}


// CCRotatingOwnerInterface CombatComponents.Default__CCRotatingOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICCRotatingOwnerInterface* ICCRotatingOwnerInterface::GetDefaultObj()
{
	static class ICCRotatingOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICCRotatingOwnerInterface*>(ICCRotatingOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function CombatComponents.CCRotatingOwnerInterface.GetDesiredRotation
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator ICCRotatingOwnerInterface::GetDesiredRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCRotatingOwnerInterface", "GetDesiredRotation");

	Params::ICCRotatingOwnerInterface_GetDesiredRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


