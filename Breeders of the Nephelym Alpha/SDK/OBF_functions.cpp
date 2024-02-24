#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OBF.SexyAIController
// (Actor)

class UClass* ASexyAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIController");

	return Clss;
}


// SexyAIController OBF.Default__SexyAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyAIController* ASexyAIController::GetDefaultObj()
{
	static class ASexyAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyAIController*>(ASexyAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAI_Roamer
// (Actor)

class UClass* ASexyAI_Roamer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAI_Roamer");

	return Clss;
}


// SexyAI_Roamer OBF.Default__SexyAI_Roamer
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyAI_Roamer* ASexyAI_Roamer::GetDefaultObj()
{
	static class ASexyAI_Roamer* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyAI_Roamer*>(ASexyAI_Roamer::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAICrowdManager
// (None)

class UClass* USexyAICrowdManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAICrowdManager");

	return Clss;
}


// SexyAICrowdManager OBF.Default__SexyAICrowdManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAICrowdManager* USexyAICrowdManager::GetDefaultObj()
{
	static class USexyAICrowdManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAICrowdManager*>(USexyAICrowdManager::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAITask
// (None)

class UClass* USexyAITask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAITask");

	return Clss;
}


// SexyAITask OBF.Default__SexyAITask
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAITask* USexyAITask::GetDefaultObj()
{
	static class USexyAITask* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAITask*>(USexyAITask::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAICuteAction
// (None)

class UClass* USexyAICuteAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAICuteAction");

	return Clss;
}


// SexyAICuteAction OBF.Default__SexyAICuteAction
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAICuteAction* USexyAICuteAction::GetDefaultObj()
{
	static class USexyAICuteAction* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAICuteAction*>(USexyAICuteAction::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAIDecideRoamingAction
// (None)

class UClass* USexyAIDecideRoamingAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIDecideRoamingAction");

	return Clss;
}


// SexyAIDecideRoamingAction OBF.Default__SexyAIDecideRoamingAction
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAIDecideRoamingAction* USexyAIDecideRoamingAction::GetDefaultObj()
{
	static class USexyAIDecideRoamingAction* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAIDecideRoamingAction*>(USexyAIDecideRoamingAction::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAIDumbAction
// (None)

class UClass* USexyAIDumbAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIDumbAction");

	return Clss;
}


// SexyAIDumbAction OBF.Default__SexyAIDumbAction
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAIDumbAction* USexyAIDumbAction::GetDefaultObj()
{
	static class USexyAIDumbAction* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAIDumbAction*>(USexyAIDumbAction::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAIHotSpotManager
// (None)

class UClass* USexyAIHotSpotManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIHotSpotManager");

	return Clss;
}


// SexyAIHotSpotManager OBF.Default__SexyAIHotSpotManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAIHotSpotManager* USexyAIHotSpotManager::GetDefaultObj()
{
	static class USexyAIHotSpotManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAIHotSpotManager*>(USexyAIHotSpotManager::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAIMoveTo
// (None)

class UClass* USexyAIMoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIMoveTo");

	return Clss;
}


// SexyAIMoveTo OBF.Default__SexyAIMoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAIMoveTo* USexyAIMoveTo::GetDefaultObj()
{
	static class USexyAIMoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAIMoveTo*>(USexyAIMoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAIPerceptionSystem
// (None)

class UClass* USexyAIPerceptionSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIPerceptionSystem");

	return Clss;
}


// SexyAIPerceptionSystem OBF.Default__SexyAIPerceptionSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAIPerceptionSystem* USexyAIPerceptionSystem::GetDefaultObj()
{
	static class USexyAIPerceptionSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAIPerceptionSystem*>(USexyAIPerceptionSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAISeekBreeder
// (None)

class UClass* USexyAISeekBreeder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAISeekBreeder");

	return Clss;
}


// SexyAISeekBreeder OBF.Default__SexyAISeekBreeder
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAISeekBreeder* USexyAISeekBreeder::GetDefaultObj()
{
	static class USexyAISeekBreeder* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAISeekBreeder*>(USexyAISeekBreeder::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAISeekMate
// (None)

class UClass* USexyAISeekMate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAISeekMate");

	return Clss;
}


// SexyAISeekMate OBF.Default__SexyAISeekMate
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAISeekMate* USexyAISeekMate::GetDefaultObj()
{
	static class USexyAISeekMate* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAISeekMate*>(USexyAISeekMate::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAITrySeduce
// (None)

class UClass* USexyAITrySeduce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAITrySeduce");

	return Clss;
}


// SexyAITrySeduce OBF.Default__SexyAITrySeduce
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAITrySeduce* USexyAITrySeduce::GetDefaultObj()
{
	static class USexyAITrySeduce* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAITrySeduce*>(USexyAITrySeduce::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAITrySurpriseSex
// (None)

class UClass* USexyAITrySurpriseSex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAITrySurpriseSex");

	return Clss;
}


// SexyAITrySurpriseSex OBF.Default__SexyAITrySurpriseSex
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAITrySurpriseSex* USexyAITrySurpriseSex::GetDefaultObj()
{
	static class USexyAITrySurpriseSex* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAITrySurpriseSex*>(USexyAITrySurpriseSex::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAIWander
// (None)

class UClass* USexyAIWander::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAIWander");

	return Clss;
}


// SexyAIWander OBF.Default__SexyAIWander
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAIWander* USexyAIWander::GetDefaultObj()
{
	static class USexyAIWander* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAIWander*>(USexyAIWander::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyWorldNode
// (Actor)

class UClass* ASexyWorldNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyWorldNode");

	return Clss;
}


// SexyWorldNode OBF.Default__SexyWorldNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyWorldNode* ASexyWorldNode::GetDefaultObj()
{
	static class ASexyWorldNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyWorldNode*>(ASexyWorldNode::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyWorldNode.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyWorldNode::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldNode", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyWorldNode.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyWorldNode::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldNode", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyWorldNode.Notify
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFromActivation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWorldNodeNotify        Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FConditions                 GameFlags                                                        (Parm, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                Item                                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ItemCount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyWorldNode::Notify(bool bFromActivation, enum class EWorldNodeNotify Type, const struct FConditions& GameFlags, class FText Message, const struct FGameplayTag& Item, int32 ItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldNode", "Notify");

	Params::ASexyWorldNode_Notify_Params Parms{};

	Parms.bFromActivation = bFromActivation;
	Parms.Type = Type;
	Parms.GameFlags = GameFlags;
	Parms.Message = Message;
	Parms.Item = Item;
	Parms.ItemCount = ItemCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyWorldNode.GetBreeder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASexyBreederCharacter*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASexyBreederCharacter* ASexyWorldNode::GetBreeder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldNode", "GetBreeder");

	Params::ASexyWorldNode_GetBreeder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OBF.SexyWorldNode.CheckGameFlags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FConditions                 GameFlags                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASexyWorldNode::CheckGameFlags(const struct FConditions& GameFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldNode", "CheckGameFlags");

	Params::ASexyWorldNode_CheckGameFlags_Params Parms{};

	Parms.GameFlags = GameFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OBF.SexyASOG
// (Actor)

class UClass* ASexyASOG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyASOG");

	return Clss;
}


// SexyASOG OBF.Default__SexyASOG
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyASOG* ASexyASOG::GetDefaultObj()
{
	static class ASexyASOG* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyASOG*>(ASexyASOG::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyAssetManager
// (None)

class UClass* USexyAssetManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyAssetManager");

	return Clss;
}


// SexyAssetManager OBF.Default__SexyAssetManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyAssetManager* USexyAssetManager::GetDefaultObj()
{
	static class USexyAssetManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyAssetManager*>(USexyAssetManager::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBaseCharacter
// (Actor, Pawn)

class UClass* ASexyBaseCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBaseCharacter");

	return Clss;
}


// SexyBaseCharacter OBF.Default__SexyBaseCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBaseCharacter* ASexyBaseCharacter::GetDefaultObj()
{
	static class ASexyBaseCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBaseCharacter*>(ASexyBaseCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyBaseCharacter.Teleport
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Destination                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ASexyBaseCharacter::Teleport(const struct FTransform& Destination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "Teleport");

	Params::ASexyBaseCharacter_Teleport_Params Parms{};

	Parms.Destination = Destination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBaseCharacter.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyBaseCharacter::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyBaseCharacter.ProximityCapsuleEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBaseCharacter::ProximityCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "ProximityCapsuleEndOverlap");

	Params::ASexyBaseCharacter_ProximityCapsuleEndOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBaseCharacter.ProximityCapsuleBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ASexyBaseCharacter::ProximityCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "ProximityCapsuleBeginOverlap");

	Params::ASexyBaseCharacter_ProximityCapsuleBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBaseCharacter.OnStartSex
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyBaseCharacter::OnStartSex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "OnStartSex");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyBaseCharacter.OnSexEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyBaseCharacter::OnSexEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "OnSexEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyBaseCharacter.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyBaseCharacter::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyBaseCharacter.OnNoLongerDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyBaseCharacter::OnNoLongerDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "OnNoLongerDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyBaseCharacter.OnBlink
// (Final, Native, Public)
// Parameters:

void ASexyBaseCharacter::OnBlink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "OnBlink");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBaseCharacter.OnBecameDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyBaseCharacter::OnBecameDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "OnBecameDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyBaseCharacter.EnableCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASexyBaseCharacter::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "EnableCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBaseCharacter.DisableCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ASexyBaseCharacter::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "DisableCollision");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBaseCharacter.CheckGameFlags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FConditions                 GameFlags                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASexyBaseCharacter::CheckGameFlags(const struct FConditions& GameFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacter", "CheckGameFlags");

	Params::ASexyBaseCharacter_CheckGameFlags_Params Parms{};

	Parms.GameFlags = GameFlags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OBF.SexyBaseCharacterAnimation
// (None)

class UClass* USexyBaseCharacterAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBaseCharacterAnimation");

	return Clss;
}


// SexyBaseCharacterAnimation OBF.Default__SexyBaseCharacterAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyBaseCharacterAnimation* USexyBaseCharacterAnimation::GetDefaultObj()
{
	static class USexyBaseCharacterAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyBaseCharacterAnimation*>(USexyBaseCharacterAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyBaseCharacterAnimation.NotifyFluidBurst
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USexyBaseCharacterAnimation::NotifyFluidBurst(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBaseCharacterAnimation", "NotifyFluidBurst");

	Params::USexyBaseCharacterAnimation_NotifyFluidBurst_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyBlessedSexNode
// (Actor)

class UClass* ASexyBlessedSexNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBlessedSexNode");

	return Clss;
}


// SexyBlessedSexNode OBF.Default__SexyBlessedSexNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBlessedSexNode* ASexyBlessedSexNode::GetDefaultObj()
{
	static class ASexyBlessedSexNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBlessedSexNode*>(ASexyBlessedSexNode::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyProceduralCharacter
// (Actor, Pawn)

class UClass* ASexyProceduralCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyProceduralCharacter");

	return Clss;
}


// SexyProceduralCharacter OBF.Default__SexyProceduralCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyProceduralCharacter* ASexyProceduralCharacter::GetDefaultObj()
{
	static class ASexyProceduralCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyProceduralCharacter*>(ASexyProceduralCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreederCharacter
// (Actor, Pawn)

class UClass* ASexyBreederCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreederCharacter");

	return Clss;
}


// SexyBreederCharacter OBF.Default__SexyBreederCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBreederCharacter* ASexyBreederCharacter::GetDefaultObj()
{
	static class ASexyBreederCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBreederCharacter*>(ASexyBreederCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreederController
// (Actor, PlayerController)

class UClass* ASexyBreederController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreederController");

	return Clss;
}


// SexyBreederController OBF.Default__SexyBreederController
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBreederController* ASexyBreederController::GetDefaultObj()
{
	static class ASexyBreederController* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBreederController*>(ASexyBreederController::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyBreederController.OnZoom
// (Final, Native, Public)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBreederController::OnZoom(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnZoom");

	Params::ASexyBreederController_OnZoom_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnYawAxis
// (Final, Native, Public)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBreederController::OnYawAxis(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnYawAxis");

	Params::ASexyBreederController_OnYawAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnWriteShapeData
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnWriteShapeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnWriteShapeData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnWriteAppearanceData
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnWriteAppearanceData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnWriteAppearanceData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnWalk
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnWalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnWalk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnToggleUnderwear
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnToggleUnderwear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnToggleUnderwear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnToggleUI
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnToggleUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnToggleUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnToggleShirt
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnToggleShirt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnToggleShirt");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnTogglePants
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnTogglePants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnTogglePants");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnToggleClothing
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnToggleClothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnToggleClothing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnToggleBoots
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnToggleBoots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnToggleBoots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnTest5
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnTest5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnTest5");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnTest4
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnTest4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnTest4");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnTest3
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnTest3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnTest3");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnTest2
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnTest2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnTest2");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnTest1
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnTest1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnTest1");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnStopWalk
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnStopWalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnStopWalk");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnStopSprint
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnStopSprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnStopSprint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnStopRotateCamera
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnStopRotateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnStopRotateCamera");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnStopPanCamera
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnStopPanCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnStopPanCamera");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnSprint
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnSprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnSprint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnSpiritForm
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnSpiritForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnSpiritForm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnShowCommandLine
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnShowCommandLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnShowCommandLine");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnShowAdventureCursor
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnShowAdventureCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnShowAdventureCursor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnRotateCamera
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnRotateCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnRotateCamera");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnResetResolution
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnResetResolution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnResetResolution");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnPitchAxis
// (Final, Native, Public)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBreederController::OnPitchAxis(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnPitchAxis");

	Params::ASexyBreederController_OnPitchAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnPanCamera
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnPanCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnPanCamera");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnMoveUp
// (Final, Native, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBreederController::OnMoveUp(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnMoveUp");

	Params::ASexyBreederController_OnMoveUp_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnMoveRight
// (Final, Native, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBreederController::OnMoveRight(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnMoveRight");

	Params::ASexyBreederController_OnMoveRight_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnMoveForward
// (Final, Native, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyBreederController::OnMoveForward(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnMoveForward");

	Params::ASexyBreederController_OnMoveForward_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnJumpRelease
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnJumpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnJumpRelease");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnJump
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnJump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnJump");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnHideAdventureCursor
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnHideAdventureCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnHideAdventureCursor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnFastTravelMenu
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnFastTravelMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnFastTravelMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnDumpWhateverJSON
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnDumpWhateverJSON()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnDumpWhateverJSON");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnBack
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnBack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreederController.OnAction
// (Final, Native, Public)
// Parameters:

void ASexyBreederController::OnAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederController", "OnAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyRanchBuilding
// (Actor)

class UClass* ASexyRanchBuilding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyRanchBuilding");

	return Clss;
}


// SexyRanchBuilding OBF.Default__SexyRanchBuilding
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyRanchBuilding* ASexyRanchBuilding::GetDefaultObj()
{
	static class ASexyRanchBuilding* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyRanchBuilding*>(ASexyRanchBuilding::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreederHouse
// (Actor)

class UClass* ASexyBreederHouse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreederHouse");

	return Clss;
}


// SexyBreederHouse OBF.Default__SexyBreederHouse
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBreederHouse* ASexyBreederHouse::GetDefaultObj()
{
	static class ASexyBreederHouse* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBreederHouse*>(ASexyBreederHouse::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyBreederHouse.TransitionDay
// (Final, Native, Public)
// Parameters:

void ASexyBreederHouse::TransitionDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreederHouse", "TransitionDay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyBreederInput
// (None)

class UClass* USexyBreederInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreederInput");

	return Clss;
}


// SexyBreederInput OBF.Default__SexyBreederInput
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class USexyBreederInput* USexyBreederInput::GetDefaultObj()
{
	static class USexyBreederInput* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyBreederInput*>(USexyBreederInput::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexySystem
// (Actor)

class UClass* ASexySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySystem");

	return Clss;
}


// SexySystem OBF.Default__SexySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexySystem* ASexySystem::GetDefaultObj()
{
	static class ASexySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexySystem*>(ASexySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreederRanch
// (Actor)

class UClass* ASexyBreederRanch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreederRanch");

	return Clss;
}


// SexyBreederRanch OBF.Default__SexyBreederRanch
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBreederRanch* ASexyBreederRanch::GetDefaultObj()
{
	static class ASexyBreederRanch* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBreederRanch*>(ASexyBreederRanch::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreedingSystem
// (Actor)

class UClass* ASexyBreedingSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreedingSystem");

	return Clss;
}


// SexyBreedingSystem OBF.Default__SexyBreedingSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBreedingSystem* ASexyBreedingSystem::GetDefaultObj()
{
	static class ASexyBreedingSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBreedingSystem*>(ASexyBreedingSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyBreedingSystem.ReleaseCooldown
// (Final, Native, Public)
// Parameters:

void ASexyBreedingSystem::ReleaseCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreedingSystem", "ReleaseCooldown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyBreedingSystem.PostSexFinished
// (Final, Native, Public)
// Parameters:

void ASexyBreedingSystem::PostSexFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyBreedingSystem", "PostSexFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyBreedingYard
// (Actor)

class UClass* ASexyBreedingYard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreedingYard");

	return Clss;
}


// SexyBreedingYard OBF.Default__SexyBreedingYard
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyBreedingYard* ASexyBreedingYard::GetDefaultObj()
{
	static class ASexyBreedingYard* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyBreedingYard*>(ASexyBreedingYard::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCameraManager
// (Actor)

class UClass* ASexyCameraManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCameraManager");

	return Clss;
}


// SexyCameraManager OBF.Default__SexyCameraManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyCameraManager* ASexyCameraManager::GetDefaultObj()
{
	static class ASexyCameraManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyCameraManager*>(ASexyCameraManager::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyCameraManager.SwitchMusic
// (Final, Native, Public)
// Parameters:

void ASexyCameraManager::SwitchMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyCameraManager", "SwitchMusic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyCameraTether
// (SceneComponent)

class UClass* USexyCameraTether::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCameraTether");

	return Clss;
}


// SexyCameraTether OBF.Default__SexyCameraTether
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCameraTether* USexyCameraTether::GetDefaultObj()
{
	static class USexyCameraTether* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCameraTether*>(USexyCameraTether::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USexyCharacterComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterComponent");

	return Clss;
}


// SexyCharacterComponent OBF.Default__SexyCharacterComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterComponent* USexyCharacterComponent::GetDefaultObj()
{
	static class USexyCharacterComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterComponent*>(USexyCharacterComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterBodyComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USexyCharacterBodyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterBodyComponent");

	return Clss;
}


// SexyCharacterBodyComponent OBF.Default__SexyCharacterBodyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterBodyComponent* USexyCharacterBodyComponent::GetDefaultObj()
{
	static class USexyCharacterBodyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterBodyComponent*>(USexyCharacterBodyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterFurComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USexyCharacterFurComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterFurComponent");

	return Clss;
}


// SexyCharacterFurComponent OBF.Default__SexyCharacterFurComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterFurComponent* USexyCharacterFurComponent::GetDefaultObj()
{
	static class USexyCharacterFurComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterFurComponent*>(USexyCharacterFurComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterMovement
// (None)

class UClass* USexyCharacterMovement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterMovement");

	return Clss;
}


// SexyCharacterMovement OBF.Default__SexyCharacterMovement
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterMovement* USexyCharacterMovement::GetDefaultObj()
{
	static class USexyCharacterMovement* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterMovement*>(USexyCharacterMovement::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterSystem
// (Actor)

class UClass* ASexyCharacterSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterSystem");

	return Clss;
}


// SexyCharacterSystem OBF.Default__SexyCharacterSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyCharacterSystem* ASexyCharacterSystem::GetDefaultObj()
{
	static class ASexyCharacterSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyCharacterSystem*>(ASexyCharacterSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCreationNode
// (Actor)

class UClass* ASexyCreationNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCreationNode");

	return Clss;
}


// SexyCreationNode OBF.Default__SexyCreationNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyCreationNode* ASexyCreationNode::GetDefaultObj()
{
	static class ASexyCreationNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyCreationNode*>(ASexyCreationNode::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyDailyToy
// (Actor)

class UClass* ASexyDailyToy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDailyToy");

	return Clss;
}


// SexyDailyToy OBF.Default__SexyDailyToy
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyDailyToy* ASexyDailyToy::GetDefaultObj()
{
	static class ASexyDailyToy* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyDailyToy*>(ASexyDailyToy::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyDailyToy.OnSetToy
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyDailyToy::OnSetToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDailyToy", "OnSetToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Class OBF.SexyData
// (None)

class UClass* USexyData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyData");

	return Clss;
}


// SexyData OBF.Default__SexyData
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyData* USexyData::GetDefaultObj()
{
	static class USexyData* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyData*>(USexyData::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.ToySensationPreset
// (None)

class UClass* UToySensationPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToySensationPreset");

	return Clss;
}


// ToySensationPreset OBF.Default__ToySensationPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class UToySensationPreset* UToySensationPreset::GetDefaultObj()
{
	static class UToySensationPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<UToySensationPreset*>(UToySensationPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterAttachment
// (None)

class UClass* USexyCharacterAttachment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterAttachment");

	return Clss;
}


// SexyCharacterAttachment OBF.Default__SexyCharacterAttachment
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterAttachment* USexyCharacterAttachment::GetDefaultObj()
{
	static class USexyCharacterAttachment* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterAttachment*>(USexyCharacterAttachment::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterDecor
// (None)

class UClass* USexyCharacterDecor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterDecor");

	return Clss;
}


// SexyCharacterDecor OBF.Default__SexyCharacterDecor
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterDecor* USexyCharacterDecor::GetDefaultObj()
{
	static class USexyCharacterDecor* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterDecor*>(USexyCharacterDecor::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterAssets
// (None)

class UClass* USexyCharacterAssets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterAssets");

	return Clss;
}


// SexyCharacterAssets OBF.Default__SexyCharacterAssets
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterAssets* USexyCharacterAssets::GetDefaultObj()
{
	static class USexyCharacterAssets* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterAssets*>(USexyCharacterAssets::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyWaterAssets
// (None)

class UClass* USexyWaterAssets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyWaterAssets");

	return Clss;
}


// SexyWaterAssets OBF.Default__SexyWaterAssets
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyWaterAssets* USexyWaterAssets::GetDefaultObj()
{
	static class USexyWaterAssets* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyWaterAssets*>(USexyWaterAssets::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterScheme
// (None)

class UClass* USexyCharacterScheme::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterScheme");

	return Clss;
}


// SexyCharacterScheme OBF.Default__SexyCharacterScheme
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterScheme* USexyCharacterScheme::GetDefaultObj()
{
	static class USexyCharacterScheme* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterScheme*>(USexyCharacterScheme::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterPreset
// (None)

class UClass* USexyCharacterPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterPreset");

	return Clss;
}


// SexyCharacterPreset OBF.Default__SexyCharacterPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterPreset* USexyCharacterPreset::GetDefaultObj()
{
	static class USexyCharacterPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterPreset*>(USexyCharacterPreset::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyGlobalFaceTargets
// (None)

class UClass* USexyGlobalFaceTargets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyGlobalFaceTargets");

	return Clss;
}


// SexyGlobalFaceTargets OBF.Default__SexyGlobalFaceTargets
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyGlobalFaceTargets* USexyGlobalFaceTargets::GetDefaultObj()
{
	static class USexyGlobalFaceTargets* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyGlobalFaceTargets*>(USexyGlobalFaceTargets::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyVariantSexScene
// (None)

class UClass* USexyVariantSexScene::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyVariantSexScene");

	return Clss;
}


// SexyVariantSexScene OBF.Default__SexyVariantSexScene
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyVariantSexScene* USexyVariantSexScene::GetDefaultObj()
{
	static class USexyVariantSexScene* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyVariantSexScene*>(USexyVariantSexScene::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCharacterVariant
// (None)

class UClass* USexyCharacterVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterVariant");

	return Clss;
}


// SexyCharacterVariant OBF.Default__SexyCharacterVariant
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterVariant* USexyCharacterVariant::GetDefaultObj()
{
	static class USexyCharacterVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterVariant*>(USexyCharacterVariant::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyNameRegistry
// (None)

class UClass* USexyNameRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyNameRegistry");

	return Clss;
}


// SexyNameRegistry OBF.Default__SexyNameRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyNameRegistry* USexyNameRegistry::GetDefaultObj()
{
	static class USexyNameRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyNameRegistry*>(USexyNameRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyRanchUpgrade
// (None)

class UClass* USexyRanchUpgrade::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyRanchUpgrade");

	return Clss;
}


// SexyRanchUpgrade OBF.Default__SexyRanchUpgrade
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyRanchUpgrade* USexyRanchUpgrade::GetDefaultObj()
{
	static class USexyRanchUpgrade* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyRanchUpgrade*>(USexyRanchUpgrade::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreedingMontage
// (None)

class UClass* USexyBreedingMontage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreedingMontage");

	return Clss;
}


// SexyBreedingMontage OBF.Default__SexyBreedingMontage
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyBreedingMontage* USexyBreedingMontage::GetDefaultObj()
{
	static class USexyBreedingMontage* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyBreedingMontage*>(USexyBreedingMontage::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBreedingSession
// (None)

class UClass* USexyBreedingSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBreedingSession");

	return Clss;
}


// SexyBreedingSession OBF.Default__SexyBreedingSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyBreedingSession* USexyBreedingSession::GetDefaultObj()
{
	static class USexyBreedingSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyBreedingSession*>(USexyBreedingSession::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyItem
// (None)

class UClass* USexyItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyItem");

	return Clss;
}


// SexyItem OBF.Default__SexyItem
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyItem* USexyItem::GetDefaultObj()
{
	static class USexyItem* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyItem*>(USexyItem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyStore
// (None)

class UClass* USexyStore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyStore");

	return Clss;
}


// SexyStore OBF.Default__SexyStore
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyStore* USexyStore::GetDefaultObj()
{
	static class USexyStore* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyStore*>(USexyStore::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyDialogueSession
// (None)

class UClass* USexyDialogueSession::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDialogueSession");

	return Clss;
}


// SexyDialogueSession OBF.Default__SexyDialogueSession
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyDialogueSession* USexyDialogueSession::GetDefaultObj()
{
	static class USexyDialogueSession* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyDialogueSession*>(USexyDialogueSession::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyDialogueResponse
// (None)

class UClass* USexyDialogueResponse::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDialogueResponse");

	return Clss;
}


// SexyDialogueResponse OBF.Default__SexyDialogueResponse
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyDialogueResponse* USexyDialogueResponse::GetDefaultObj()
{
	static class USexyDialogueResponse* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyDialogueResponse*>(USexyDialogueResponse::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyDialogueGroup
// (None)

class UClass* USexyDialogueGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDialogueGroup");

	return Clss;
}


// SexyDialogueGroup OBF.Default__SexyDialogueGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyDialogueGroup* USexyDialogueGroup::GetDefaultObj()
{
	static class USexyDialogueGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyDialogueGroup*>(USexyDialogueGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyQuest
// (None)

class UClass* USexyQuest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyQuest");

	return Clss;
}


// SexyQuest OBF.Default__SexyQuest
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyQuest* USexyQuest::GetDefaultObj()
{
	static class USexyQuest* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyQuest*>(USexyQuest::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyBlessedSceneAsset
// (None)

class UClass* USexyBlessedSceneAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyBlessedSceneAsset");

	return Clss;
}


// SexyBlessedSceneAsset OBF.Default__SexyBlessedSceneAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyBlessedSceneAsset* USexyBlessedSceneAsset::GetDefaultObj()
{
	static class USexyBlessedSceneAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyBlessedSceneAsset*>(USexyBlessedSceneAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyASOGRegistry
// (None)

class UClass* USexyASOGRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyASOGRegistry");

	return Clss;
}


// SexyASOGRegistry OBF.Default__SexyASOGRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyASOGRegistry* USexyASOGRegistry::GetDefaultObj()
{
	static class USexyASOGRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyASOGRegistry*>(USexyASOGRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyTextRegistry
// (None)

class UClass* USexyTextRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyTextRegistry");

	return Clss;
}


// SexyTextRegistry OBF.Default__SexyTextRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyTextRegistry* USexyTextRegistry::GetDefaultObj()
{
	static class USexyTextRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyTextRegistry*>(USexyTextRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexySaveGame
// (None)

class UClass* USexySaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySaveGame");

	return Clss;
}


// SexySaveGame OBF.Default__SexySaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class USexySaveGame* USexySaveGame::GetDefaultObj()
{
	static class USexySaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<USexySaveGame*>(USexySaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexySavedGameActions
// (None)

class UClass* USexySavedGameActions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySavedGameActions");

	return Clss;
}


// SexySavedGameActions OBF.Default__SexySavedGameActions
// (Public, ClassDefaultObject, ArchetypeObject)

class USexySavedGameActions* USexySavedGameActions::GetDefaultObj()
{
	static class USexySavedGameActions* Default = nullptr;

	if (!Default)
		Default = static_cast<USexySavedGameActions*>(USexySavedGameActions::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyDazeShrine
// (Actor)

class UClass* ASexyDazeShrine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDazeShrine");

	return Clss;
}


// SexyDazeShrine OBF.Default__SexyDazeShrine
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyDazeShrine* ASexyDazeShrine::GetDefaultObj()
{
	static class ASexyDazeShrine* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyDazeShrine*>(ASexyDazeShrine::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyDazeShrine.OnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyDazeShrine::OnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDazeShrine", "OnDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyDazeShrine.OnActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyDazeShrine::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDazeShrine", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Class OBF.SexyDazeSystem
// (Actor)

class UClass* ASexyDazeSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDazeSystem");

	return Clss;
}


// SexyDazeSystem OBF.Default__SexyDazeSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyDazeSystem* ASexyDazeSystem::GetDefaultObj()
{
	static class ASexyDazeSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyDazeSystem*>(ASexyDazeSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyDazeSystem.PostResurrect
// (Final, Native, Public)
// Parameters:

void ASexyDazeSystem::PostResurrect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDazeSystem", "PostResurrect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyDazeSystem.PostInitiateResurrect
// (Final, Native, Public)
// Parameters:

void ASexyDazeSystem::PostInitiateResurrect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDazeSystem", "PostInitiateResurrect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyDialogueSystem
// (Actor)

class UClass* ASexyDialogueSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyDialogueSystem");

	return Clss;
}


// SexyDialogueSystem OBF.Default__SexyDialogueSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyDialogueSystem* ASexyDialogueSystem::GetDefaultObj()
{
	static class ASexyDialogueSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyDialogueSystem*>(ASexyDialogueSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyDialogueSystem.PostWrite
// (Final, Native, Public)
// Parameters:

void ASexyDialogueSystem::PostWrite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDialogueSystem", "PostWrite");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyDialogueSystem.Advance
// (Final, Native, Public)
// Parameters:

void ASexyDialogueSystem::Advance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyDialogueSystem", "Advance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyEventMarker
// (Actor)

class UClass* ASexyEventMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyEventMarker");

	return Clss;
}


// SexyEventMarker OBF.Default__SexyEventMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyEventMarker* ASexyEventMarker::GetDefaultObj()
{
	static class ASexyEventMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyEventMarker*>(ASexyEventMarker::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyEventMarker.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyEventMarker::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyEventMarker", "OnTrigger");

	Params::ASexyEventMarker_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OBF.SexyEventMarker.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyEventMarker::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyEventMarker", "OnBlock");

	Params::ASexyEventMarker_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Class OBF.SexyCharacterFur
// (None)

class UClass* USexyCharacterFur::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCharacterFur");

	return Clss;
}


// SexyCharacterFur OBF.Default__SexyCharacterFur
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCharacterFur* USexyCharacterFur::GetDefaultObj()
{
	static class USexyCharacterFur* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCharacterFur*>(USexyCharacterFur::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyGameInstance
// (None)

class UClass* USexyGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyGameInstance");

	return Clss;
}


// SexyGameInstance OBF.Default__SexyGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyGameInstance* USexyGameInstance::GetDefaultObj()
{
	static class USexyGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyGameInstance*>(USexyGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyGameMode
// (Actor)

class UClass* ASexyGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyGameMode");

	return Clss;
}


// SexyGameMode OBF.Default__SexyGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyGameMode* ASexyGameMode::GetDefaultObj()
{
	static class ASexyGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyGameMode*>(ASexyGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyGameViewportClient
// (None)

class UClass* USexyGameViewportClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyGameViewportClient");

	return Clss;
}


// SexyGameViewportClient OBF.Default__SexyGameViewportClient
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyGameViewportClient* USexyGameViewportClient::GetDefaultObj()
{
	static class USexyGameViewportClient* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyGameViewportClient*>(USexyGameViewportClient::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyGuruPortal
// (Actor)

class UClass* ASexyGuruPortal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyGuruPortal");

	return Clss;
}


// SexyGuruPortal OBF.Default__SexyGuruPortal
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyGuruPortal* ASexyGuruPortal::GetDefaultObj()
{
	static class ASexyGuruPortal* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyGuruPortal*>(ASexyGuruPortal::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyGuruPortal.OnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyGuruPortal::OnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyGuruPortal", "OnDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyGuruPortal.OnActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyGuruPortal::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyGuruPortal", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Class OBF.SexyHarvestNode
// (Actor)

class UClass* ASexyHarvestNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyHarvestNode");

	return Clss;
}


// SexyHarvestNode OBF.Default__SexyHarvestNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyHarvestNode* ASexyHarvestNode::GetDefaultObj()
{
	static class ASexyHarvestNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyHarvestNode*>(ASexyHarvestNode::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyHarvestNode.OnFillComplete
// (Final, Native, Public)
// Parameters:

void ASexyHarvestNode::OnFillComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyHarvestNode", "OnFillComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyItemInventory
// (Actor)

class UClass* ASexyItemInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyItemInventory");

	return Clss;
}


// SexyItemInventory OBF.Default__SexyItemInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyItemInventory* ASexyItemInventory::GetDefaultObj()
{
	static class ASexyItemInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyItemInventory*>(ASexyItemInventory::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyItemSystem
// (Actor)

class UClass* ASexyItemSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyItemSystem");

	return Clss;
}


// SexyItemSystem OBF.Default__SexyItemSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyItemSystem* ASexyItemSystem::GetDefaultObj()
{
	static class ASexyItemSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyItemSystem*>(ASexyItemSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyLovenseSystem
// (Actor)

class UClass* ASexyLovenseSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyLovenseSystem");

	return Clss;
}


// SexyLovenseSystem OBF.Default__SexyLovenseSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyLovenseSystem* ASexyLovenseSystem::GetDefaultObj()
{
	static class ASexyLovenseSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyLovenseSystem*>(ASexyLovenseSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyManualCharacter
// (Actor, Pawn)

class UClass* ASexyManualCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyManualCharacter");

	return Clss;
}


// SexyManualCharacter OBF.Default__SexyManualCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyManualCharacter* ASexyManualCharacter::GetDefaultObj()
{
	static class ASexyManualCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyManualCharacter*>(ASexyManualCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyManualCharacterAnimation
// (None)

class UClass* USexyManualCharacterAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyManualCharacterAnimation");

	return Clss;
}


// SexyManualCharacterAnimation OBF.Default__SexyManualCharacterAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyManualCharacterAnimation* USexyManualCharacterAnimation::GetDefaultObj()
{
	static class USexyManualCharacterAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyManualCharacterAnimation*>(USexyManualCharacterAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyManualCharacterAnimation.NotifyStartPenetration
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyManualCharacterAnimation::NotifyStartPenetration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyManualCharacterAnimation", "NotifyStartPenetration");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyManualCharacterAnimation.NotifyOnOrgasm
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyManualCharacterAnimation::NotifyOnOrgasm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyManualCharacterAnimation", "NotifyOnOrgasm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyManualCharacterAnimation.NotifyAdvanceSexDialogue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyManualCharacterAnimation::NotifyAdvanceSexDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyManualCharacterAnimation", "NotifyAdvanceSexDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyMerchantSystem
// (Actor)

class UClass* ASexyMerchantSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyMerchantSystem");

	return Clss;
}


// SexyMerchantSystem OBF.Default__SexyMerchantSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyMerchantSystem* ASexyMerchantSystem::GetDefaultObj()
{
	static class ASexyMerchantSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyMerchantSystem*>(ASexyMerchantSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyMonsterBarn
// (Actor)

class UClass* ASexyMonsterBarn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyMonsterBarn");

	return Clss;
}


// SexyMonsterBarn OBF.Default__SexyMonsterBarn
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyMonsterBarn* ASexyMonsterBarn::GetDefaultObj()
{
	static class ASexyMonsterBarn* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyMonsterBarn*>(ASexyMonsterBarn::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyMonsterInventory
// (Actor)

class UClass* ASexyMonsterInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyMonsterInventory");

	return Clss;
}


// SexyMonsterInventory OBF.Default__SexyMonsterInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyMonsterInventory* ASexyMonsterInventory::GetDefaultObj()
{
	static class ASexyMonsterInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyMonsterInventory*>(ASexyMonsterInventory::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyMonsterSystem
// (Actor)

class UClass* ASexyMonsterSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyMonsterSystem");

	return Clss;
}


// SexyMonsterSystem OBF.Default__SexyMonsterSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyMonsterSystem* ASexyMonsterSystem::GetDefaultObj()
{
	static class ASexyMonsterSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyMonsterSystem*>(ASexyMonsterSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyMonsterSystem.PostSexFinished
// (Final, Native, Public)
// Parameters:

void ASexyMonsterSystem::PostSexFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyMonsterSystem", "PostSexFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyNameGenerator
// (Actor)

class UClass* ASexyNameGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyNameGenerator");

	return Clss;
}


// SexyNameGenerator OBF.Default__SexyNameGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyNameGenerator* ASexyNameGenerator::GetDefaultObj()
{
	static class ASexyNameGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyNameGenerator*>(ASexyNameGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyNavArea
// (None)

class UClass* USexyNavArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyNavArea");

	return Clss;
}


// SexyNavArea OBF.Default__SexyNavArea
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyNavArea* USexyNavArea::GetDefaultObj()
{
	static class USexyNavArea* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyNavArea*>(USexyNavArea::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyNPCNode
// (Actor)

class UClass* ASexyNPCNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyNPCNode");

	return Clss;
}


// SexyNPCNode OBF.Default__SexyNPCNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyNPCNode* ASexyNPCNode::GetDefaultObj()
{
	static class ASexyNPCNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyNPCNode*>(ASexyNPCNode::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyOverworldInterface
// (Actor)

class UClass* ASexyOverworldInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyOverworldInterface");

	return Clss;
}


// SexyOverworldInterface OBF.Default__SexyOverworldInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyOverworldInterface* ASexyOverworldInterface::GetDefaultObj()
{
	static class ASexyOverworldInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyOverworldInterface*>(ASexyOverworldInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyOverworldInterface.OnLevelReleased
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AStaticMeshActor*            Area                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyOverworldInterface::OnLevelReleased(class AStaticMeshActor* Area)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "OnLevelReleased");

	Params::ASexyOverworldInterface_OnLevelReleased_Params Parms{};

	Parms.Area = Area;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyOverworldInterface.OnLevelLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AStaticMeshActor*            Area                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyOverworldInterface::OnLevelLoaded(class AStaticMeshActor* Area)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "OnLevelLoaded");

	Params::ASexyOverworldInterface_OnLevelLoaded_Params Parms{};

	Parms.Area = Area;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyOverworldInterface.OnEnterZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AStaticMeshActor*            Area                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyOverworldInterface::OnEnterZone(class AStaticMeshActor* Area)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "OnEnterZone");

	Params::ASexyOverworldInterface_OnEnterZone_Params Parms{};

	Parms.Area = Area;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyOverworldInterface.GetBreederCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASexyProceduralCharacter*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASexyProceduralCharacter* ASexyOverworldInterface::GetBreederCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "GetBreederCharacter");

	Params::ASexyOverworldInterface_GetBreederCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OBF.SexyOverworldInterface.GameStateIs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                State                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASexyOverworldInterface::GameStateIs(const struct FGameplayTag& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "GameStateIs");

	Params::ASexyOverworldInterface_GameStateIs_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OBF.SexyOverworldInterface.BindLevelEvents
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyOverworldInterface::BindLevelEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "BindLevelEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyOverworldInterface.AreaVolumeBeginOverlap
// (Final, Native, Public)
// Parameters:
// class AActor*                      OverlappedActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyOverworldInterface::AreaVolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyOverworldInterface", "AreaVolumeBeginOverlap");

	Params::ASexyOverworldInterface_AreaVolumeBeginOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyProceduralCharacterAnimation
// (None)

class UClass* USexyProceduralCharacterAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyProceduralCharacterAnimation");

	return Clss;
}


// SexyProceduralCharacterAnimation OBF.Default__SexyProceduralCharacterAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyProceduralCharacterAnimation* USexyProceduralCharacterAnimation::GetDefaultObj()
{
	static class USexyProceduralCharacterAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyProceduralCharacterAnimation*>(USexyProceduralCharacterAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyProceduralCharacterAnimation.NotifyOnStep
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyOnStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyOnStep");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyOnOrgasm
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyOnOrgasm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyOnOrgasm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyOnLand
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyOnLand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyOnLand");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyOnJump
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyOnJump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyOnJump");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyOnClimax
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyOnClimax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyOnClimax");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyMoan
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyMoan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyMoan");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyCameraShake
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyCameraShake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyCameraShake");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyProceduralCharacterAnimation.NotifyAdvanceSexDialogue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USexyProceduralCharacterAnimation::NotifyAdvanceSexDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyProceduralCharacterAnimation", "NotifyAdvanceSexDialogue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyPropComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USexyPropComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyPropComponent");

	return Clss;
}


// SexyPropComponent OBF.Default__SexyPropComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyPropComponent* USexyPropComponent::GetDefaultObj()
{
	static class USexyPropComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyPropComponent*>(USexyPropComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyQueryFilter_Follower
// (None)

class UClass* USexyQueryFilter_Follower::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyQueryFilter_Follower");

	return Clss;
}


// SexyQueryFilter_Follower OBF.Default__SexyQueryFilter_Follower
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyQueryFilter_Follower* USexyQueryFilter_Follower::GetDefaultObj()
{
	static class USexyQueryFilter_Follower* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyQueryFilter_Follower*>(USexyQueryFilter_Follower::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyQueryFilter_Roamer
// (None)

class UClass* USexyQueryFilter_Roamer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyQueryFilter_Roamer");

	return Clss;
}


// SexyQueryFilter_Roamer OBF.Default__SexyQueryFilter_Roamer
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyQueryFilter_Roamer* USexyQueryFilter_Roamer::GetDefaultObj()
{
	static class USexyQueryFilter_Roamer* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyQueryFilter_Roamer*>(USexyQueryFilter_Roamer::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyRoamerSpawnNode
// (Actor)

class UClass* ASexyRoamerSpawnNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyRoamerSpawnNode");

	return Clss;
}


// SexyRoamerSpawnNode OBF.Default__SexyRoamerSpawnNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyRoamerSpawnNode* ASexyRoamerSpawnNode::GetDefaultObj()
{
	static class ASexyRoamerSpawnNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyRoamerSpawnNode*>(ASexyRoamerSpawnNode::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyRoamerSpawnNode.PostPhaseIn
// (Final, Native, Public)
// Parameters:

void ASexyRoamerSpawnNode::PostPhaseIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyRoamerSpawnNode", "PostPhaseIn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyRoamingCharacter
// (Actor, Pawn)

class UClass* ASexyRoamingCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyRoamingCharacter");

	return Clss;
}


// SexyRoamingCharacter OBF.Default__SexyRoamingCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyRoamingCharacter* ASexyRoamingCharacter::GetDefaultObj()
{
	static class ASexyRoamingCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyRoamingCharacter*>(ASexyRoamingCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyRoamingSystem
// (Actor)

class UClass* ASexyRoamingSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyRoamingSystem");

	return Clss;
}


// SexyRoamingSystem OBF.Default__SexyRoamingSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyRoamingSystem* ASexyRoamingSystem::GetDefaultObj()
{
	static class ASexyRoamingSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyRoamingSystem*>(ASexyRoamingSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyRoamingSystem.OnSurpriseCooldownExpire
// (Final, Native, Public)
// Parameters:

void ASexyRoamingSystem::OnSurpriseCooldownExpire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyRoamingSystem", "OnSurpriseCooldownExpire");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyRoamingZone
// (Actor)

class UClass* ASexyRoamingZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyRoamingZone");

	return Clss;
}


// SexyRoamingZone OBF.Default__SexyRoamingZone
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyRoamingZone* ASexyRoamingZone::GetDefaultObj()
{
	static class ASexyRoamingZone* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyRoamingZone*>(ASexyRoamingZone::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyRoamingZone.VolumeBeginOverlap
// (Final, Native, Public)
// Parameters:
// class AActor*                      OverlappedActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyRoamingZone::VolumeBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyRoamingZone", "VolumeBeginOverlap");

	Params::ASexyRoamingZone_VolumeBeginOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexySaveSystem
// (Actor)

class UClass* ASexySaveSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySaveSystem");

	return Clss;
}


// SexySaveSystem OBF.Default__SexySaveSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexySaveSystem* ASexySaveSystem::GetDefaultObj()
{
	static class ASexySaveSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexySaveSystem*>(ASexySaveSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexySemenPoolComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* USexySemenPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySemenPoolComponent");

	return Clss;
}


// SexySemenPoolComponent OBF.Default__SexySemenPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USexySemenPoolComponent* USexySemenPoolComponent::GetDefaultObj()
{
	static class USexySemenPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USexySemenPoolComponent*>(USexySemenPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexySettingsSystem
// (Actor)

class UClass* ASexySettingsSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySettingsSystem");

	return Clss;
}


// SexySettingsSystem OBF.Default__SexySettingsSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexySettingsSystem* ASexySettingsSystem::GetDefaultObj()
{
	static class ASexySettingsSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexySettingsSystem*>(ASexySettingsSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexySky
// (Actor)

class UClass* ASexySky::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexySky");

	return Clss;
}


// SexySky OBF.Default__SexySky
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexySky* ASexySky::GetDefaultObj()
{
	static class ASexySky* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexySky*>(ASexySky::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyTaskBoard
// (Actor)

class UClass* ASexyTaskBoard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyTaskBoard");

	return Clss;
}


// SexyTaskBoard OBF.Default__SexyTaskBoard
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyTaskBoard* ASexyTaskBoard::GetDefaultObj()
{
	static class ASexyTaskBoard* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyTaskBoard*>(ASexyTaskBoard::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyTentacleAnimation
// (None)

class UClass* USexyTentacleAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyTentacleAnimation");

	return Clss;
}


// SexyTentacleAnimation OBF.Default__SexyTentacleAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyTentacleAnimation* USexyTentacleAnimation::GetDefaultObj()
{
	static class USexyTentacleAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyTentacleAnimation*>(USexyTentacleAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyTentacleAnimation.NotifyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USexyTentacleAnimation::NotifyState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleAnimation", "NotifyState");

	Params::USexyTentacleAnimation_NotifyState_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyTentacleNode
// (Actor)

class UClass* ASexyTentacleNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyTentacleNode");

	return Clss;
}


// SexyTentacleNode OBF.Default__SexyTentacleNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyTentacleNode* ASexyTentacleNode::GetDefaultObj()
{
	static class ASexyTentacleNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyTentacleNode*>(ASexyTentacleNode::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyTentacleNode.Submerge
// (Final, Native, Public)
// Parameters:

void ASexyTentacleNode::Submerge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "Submerge");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTentacleNode.ResetCooldown
// (Final, Native, Public)
// Parameters:

void ASexyTentacleNode::ResetCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "ResetCooldown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTentacleNode.ProximityEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASexyTentacleNode::ProximityEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "ProximityEndOverlap");

	Params::ASexyTentacleNode_ProximityEndOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTentacleNode.ProximityBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ASexyTentacleNode::ProximityBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "ProximityBeginOverlap");

	Params::ASexyTentacleNode_ProximityBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTentacleNode.OuterProximityBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ASexyTentacleNode::OuterProximityBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "OuterProximityBeginOverlap");

	Params::ASexyTentacleNode_OuterProximityBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTentacleNode.OnSexFinished
// (Final, Native, Public)
// Parameters:

void ASexyTentacleNode::OnSexFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "OnSexFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTentacleNode.OnClimax
// (Final, Native, Public)
// Parameters:

void ASexyTentacleNode::OnClimax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTentacleNode", "OnClimax");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyToySensationNode
// (Actor)

class UClass* ASexyToySensationNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyToySensationNode");

	return Clss;
}


// SexyToySensationNode OBF.Default__SexyToySensationNode
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyToySensationNode* ASexyToySensationNode::GetDefaultObj()
{
	static class ASexyToySensationNode* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyToySensationNode*>(ASexyToySensationNode::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyToySensationNode.TriggerCapsuleBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ASexyToySensationNode::TriggerCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyToySensationNode", "TriggerCapsuleBeginOverlap");

	Params::ASexyToySensationNode_TriggerCapsuleBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyToySensationNode.ResetCooldown
// (Final, Native, Public)
// Parameters:

void ASexyToySensationNode::ResetCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyToySensationNode", "ResetCooldown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyToySensationNode.ProximityCapsuleBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ASexyToySensationNode::ProximityCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyToySensationNode", "ProximityCapsuleBeginOverlap");

	Params::ASexyToySensationNode_ProximityCapsuleBeginOverlap_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyTravelShrine
// (Actor)

class UClass* ASexyTravelShrine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyTravelShrine");

	return Clss;
}


// SexyTravelShrine OBF.Default__SexyTravelShrine
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyTravelShrine* ASexyTravelShrine::GetDefaultObj()
{
	static class ASexyTravelShrine* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyTravelShrine*>(ASexyTravelShrine::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyTravelShrine.OnDeactivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyTravelShrine::OnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTravelShrine", "OnDeactivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OBF.SexyTravelShrine.OnActivate
// (Event, Public, BlueprintEvent)
// Parameters:

void ASexyTravelShrine::OnActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTravelShrine", "OnActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Class OBF.SexyTravelSystem
// (Actor)

class UClass* ASexyTravelSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyTravelSystem");

	return Clss;
}


// SexyTravelSystem OBF.Default__SexyTravelSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyTravelSystem* ASexyTravelSystem::GetDefaultObj()
{
	static class ASexyTravelSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyTravelSystem*>(ASexyTravelSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyTravelSystem.PostTravel
// (Final, Native, Public)
// Parameters:

void ASexyTravelSystem::PostTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTravelSystem", "PostTravel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyTravelSystem.PostInitiateTravel
// (Final, Native, Public)
// Parameters:

void ASexyTravelSystem::PostInitiateTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyTravelSystem", "PostInitiateTravel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyLoadingScreenStyle
// (None)

class UClass* USexyLoadingScreenStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyLoadingScreenStyle");

	return Clss;
}


// SexyLoadingScreenStyle OBF.Default__SexyLoadingScreenStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyLoadingScreenStyle* USexyLoadingScreenStyle::GetDefaultObj()
{
	static class USexyLoadingScreenStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyLoadingScreenStyle*>(USexyLoadingScreenStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyCoreStyle
// (None)

class UClass* USexyCoreStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyCoreStyle");

	return Clss;
}


// SexyCoreStyle OBF.Default__SexyCoreStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyCoreStyle* USexyCoreStyle::GetDefaultObj()
{
	static class USexyCoreStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyCoreStyle*>(USexyCoreStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyFontStyle
// (None)

class UClass* USexyFontStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyFontStyle");

	return Clss;
}


// SexyFontStyle OBF.Default__SexyFontStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyFontStyle* USexyFontStyle::GetDefaultObj()
{
	static class USexyFontStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyFontStyle*>(USexyFontStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyShapeStyle
// (None)

class UClass* USexyShapeStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyShapeStyle");

	return Clss;
}


// SexyShapeStyle OBF.Default__SexyShapeStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyShapeStyle* USexyShapeStyle::GetDefaultObj()
{
	static class USexyShapeStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyShapeStyle*>(USexyShapeStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyIconStyle
// (None)

class UClass* USexyIconStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyIconStyle");

	return Clss;
}


// SexyIconStyle OBF.Default__SexyIconStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyIconStyle* USexyIconStyle::GetDefaultObj()
{
	static class USexyIconStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyIconStyle*>(USexyIconStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyFullscreenMenuStyle
// (None)

class UClass* USexyFullscreenMenuStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyFullscreenMenuStyle");

	return Clss;
}


// SexyFullscreenMenuStyle OBF.Default__SexyFullscreenMenuStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class USexyFullscreenMenuStyle* USexyFullscreenMenuStyle::GetDefaultObj()
{
	static class USexyFullscreenMenuStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<USexyFullscreenMenuStyle*>(USexyFullscreenMenuStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyUI
// (Actor)

class UClass* ASexyUI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyUI");

	return Clss;
}


// SexyUI OBF.Default__SexyUI
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyUI* ASexyUI::GetDefaultObj()
{
	static class ASexyUI* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyUI*>(ASexyUI::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyUI.WriteZoneMessage
// (Final, Native, Private)
// Parameters:

void ASexyUI::WriteZoneMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "WriteZoneMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyUI.WriteGlobalMessage
// (Final, Native, Private)
// Parameters:

void ASexyUI::WriteGlobalMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "WriteGlobalMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyUI.PushMenu
// (Final, Native, Private)
// Parameters:

void ASexyUI::PushMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "PushMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyUI.PostFadeMenu
// (Final, Native, Private)
// Parameters:

void ASexyUI::PostFadeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "PostFadeMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyUI.PopMenu
// (Final, Native, Private)
// Parameters:

void ASexyUI::PopMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "PopMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyUI.ClearItemMessage
// (Final, Native, Private)
// Parameters:

void ASexyUI::ClearItemMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "ClearItemMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyUI.ClearGlobalMessage
// (Final, Native, Private)
// Parameters:

void ASexyUI::ClearGlobalMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyUI", "ClearGlobalMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyVagrantCharacter
// (Actor, Pawn)

class UClass* ASexyVagrantCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyVagrantCharacter");

	return Clss;
}


// SexyVagrantCharacter OBF.Default__SexyVagrantCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyVagrantCharacter* ASexyVagrantCharacter::GetDefaultObj()
{
	static class ASexyVagrantCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyVagrantCharacter*>(ASexyVagrantCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class OBF.SexyWater
// (Actor)

class UClass* ASexyWater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyWater");

	return Clss;
}


// SexyWater OBF.Default__SexyWater
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyWater* ASexyWater::GetDefaultObj()
{
	static class ASexyWater* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyWater*>(ASexyWater::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyWater.OnWaterVolumeBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ASexyWater::OnWaterVolumeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWater", "OnWaterVolumeBeginOverlap");

	Params::ASexyWater_OnWaterVolumeBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OBF.SexyWorldSystem
// (Actor)

class UClass* ASexyWorldSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SexyWorldSystem");

	return Clss;
}


// SexyWorldSystem OBF.Default__SexyWorldSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ASexyWorldSystem* ASexyWorldSystem::GetDefaultObj()
{
	static class ASexyWorldSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ASexyWorldSystem*>(ASexyWorldSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function OBF.SexyWorldSystem.TickDay
// (Final, Native, Public)
// Parameters:

void ASexyWorldSystem::TickDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldSystem", "TickDay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyWorldSystem.StartNewDay
// (Final, Native, Public)
// Parameters:

void ASexyWorldSystem::StartNewDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldSystem", "StartNewDay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OBF.SexyWorldSystem.PostNewDay
// (Final, Native, Public)
// Parameters:

void ASexyWorldSystem::PostNewDay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SexyWorldSystem", "PostNewDay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


