#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxAI.AIActionBase
// (None)

class UClass* UAIActionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionBase");

	return Clss;
}


// AIActionBase GbxAI.Default__AIActionBase
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIActionBase* UAIActionBase::GetDefaultObj()
{
	static class UAIActionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionBase*>(UAIActionBase::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIActionBase.StopBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAIActionBase*               Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIActionBlueprintContext   Context                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bSucceeded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIActionBase::StopBP(class UAIActionBase* Action, struct FAIActionBlueprintContext& Context, bool bSucceeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionBase", "StopBP");

	Params::UAIActionBase_StopBP_Params Parms{};

	Parms.Action = Action;
	Parms.Context = Context;
	Parms.bSucceeded = bSucceeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIActionBase.CreateSubobjectNoName
// (Final, Native, Public)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAIActionBase::CreateSubobjectNoName(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionBase", "CreateSubobjectNoName");

	Params::UAIActionBase_CreateSubobjectNoName_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAction
// (None)

class UClass* UAIAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction");

	return Clss;
}


// AIAction GbxAI.Default__AIAction
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction* UAIAction::GetDefaultObj()
{
	static class UAIAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction*>(UAIAction::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAction.CreateSubAction
// (Final, Native, Public)
// Parameters:
// class UClass*                      ActionClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAction*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIAction* UAIAction::CreateSubAction(class UClass* ActionClass, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction", "CreateSubAction");

	Params::UAIAction_CreateSubAction_Params Parms{};

	Parms.ActionClass = ActionClass;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAction_Composite
// (None)

class UClass* UAIAction_Composite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Composite");

	return Clss;
}


// AIAction_Composite GbxAI.Default__AIAction_Composite
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Composite* UAIAction_Composite::GetDefaultObj()
{
	static class UAIAction_Composite* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Composite*>(UAIAction_Composite::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAction_Composite.CreateChild
// (Final, Native, Public)
// Parameters:
// class FName                        ChildName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAction_CompositeChild*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIAction_CompositeChild* UAIAction_Composite::CreateChild(class FName ChildName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_Composite", "CreateChild");

	Params::UAIAction_Composite_CreateChild_Params Parms{};

	Parms.ChildName = ChildName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAction_Selector
// (None)

class UClass* UAIAction_Selector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Selector");

	return Clss;
}


// AIAction_Selector GbxAI.Default__AIAction_Selector
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Selector* UAIAction_Selector::GetDefaultObj()
{
	static class UAIAction_Selector* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Selector*>(UAIAction_Selector::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Sequence
// (None)

class UClass* UAIAction_Sequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Sequence");

	return Clss;
}


// AIAction_Sequence GbxAI.Default__AIAction_Sequence
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Sequence* UAIAction_Sequence::GetDefaultObj()
{
	static class UAIAction_Sequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Sequence*>(UAIAction_Sequence::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_GoToPoint
// (None)

class UClass* UAIAction_GoToPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_GoToPoint");

	return Clss;
}


// AIAction_GoToPoint GbxAI.Default__AIAction_GoToPoint
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_GoToPoint* UAIAction_GoToPoint::GetDefaultObj()
{
	static class UAIAction_GoToPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_GoToPoint*>(UAIAction_GoToPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_ActionAtPoint
// (None)

class UClass* UAIAction_ActionAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ActionAtPoint");

	return Clss;
}


// AIAction_ActionAtPoint GbxAI.Default__AIAction_ActionAtPoint
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_ActionAtPoint* UAIAction_ActionAtPoint::GetDefaultObj()
{
	static class UAIAction_ActionAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ActionAtPoint*>(UAIAction_ActionAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction
// (None)

class UClass* UBTTask_AIAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction");

	return Clss;
}


// BTTask_AIAction GbxAI.Default__BTTask_AIAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction* UBTTask_AIAction::GetDefaultObj()
{
	static class UBTTask_AIAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction*>(UBTTask_AIAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_ActionAtPoint
// (None)

class UClass* UBTTask_AIAction_ActionAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_ActionAtPoint");

	return Clss;
}


// BTTask_AIAction_ActionAtPoint GbxAI.Default__BTTask_AIAction_ActionAtPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_ActionAtPoint* UBTTask_AIAction_ActionAtPoint::GetDefaultObj()
{
	static class UBTTask_AIAction_ActionAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_ActionAtPoint*>(UBTTask_AIAction_ActionAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Priority
// (None)

class UClass* UAIAction_Priority::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Priority");

	return Clss;
}


// AIAction_Priority GbxAI.Default__AIAction_Priority
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Priority* UAIAction_Priority::GetDefaultObj()
{
	static class UAIAction_Priority* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Priority*>(UAIAction_Priority::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_AITree
// (None)

class UClass* UAIAction_AITree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_AITree");

	return Clss;
}


// AIAction_AITree GbxAI.Default__AIAction_AITree
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_AITree* UAIAction_AITree::GetDefaultObj()
{
	static class UAIAction_AITree* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_AITree*>(UAIAction_AITree::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Charge
// (None)

class UClass* UAIAction_Charge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Charge");

	return Clss;
}


// AIAction_Charge GbxAI.Default__AIAction_Charge
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Charge* UAIAction_Charge::GetDefaultObj()
{
	static class UAIAction_Charge* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Charge*>(UAIAction_Charge::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_Charge
// (None)

class UClass* UBTTask_AIAction_Charge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_Charge");

	return Clss;
}


// BTTask_AIAction_Charge GbxAI.Default__BTTask_AIAction_Charge
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_Charge* UBTTask_AIAction_Charge::GetDefaultObj()
{
	static class UBTTask_AIAction_Charge* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_Charge*>(UBTTask_AIAction_Charge::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_CompositeChild
// (None)

class UClass* UAIAction_CompositeChild::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_CompositeChild");

	return Clss;
}


// AIAction_CompositeChild GbxAI.Default__AIAction_CompositeChild
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_CompositeChild* UAIAction_CompositeChild::GetDefaultObj()
{
	static class UAIAction_CompositeChild* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_CompositeChild*>(UAIAction_CompositeChild::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAction_CompositeChild.CreateAction
// (Final, Native, Public)
// Parameters:
// class UClass*                      ActionClass                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAction*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIAction* UAIAction_CompositeChild::CreateAction(class UClass* ActionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_CompositeChild", "CreateAction");

	Params::UAIAction_CompositeChild_CreateAction_Params Parms{};

	Parms.ActionClass = ActionClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAction_Decorator
// (None)

class UClass* UAIAction_Decorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Decorator");

	return Clss;
}


// AIAction_Decorator GbxAI.Default__AIAction_Decorator
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Decorator* UAIAction_Decorator::GetDefaultObj()
{
	static class UAIAction_Decorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Decorator*>(UAIAction_Decorator::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_MoveNode
// (None)

class UClass* UAIAction_MoveNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_MoveNode");

	return Clss;
}


// AIAction_MoveNode GbxAI.Default__AIAction_MoveNode
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_MoveNode* UAIAction_MoveNode::GetDefaultObj()
{
	static class UAIAction_MoveNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_MoveNode*>(UAIAction_MoveNode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Dropship
// (None)

class UClass* UAIAction_Dropship::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Dropship");

	return Clss;
}


// AIAction_Dropship GbxAI.Default__AIAction_Dropship
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Dropship* UAIAction_Dropship::GetDefaultObj()
{
	static class UAIAction_Dropship* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Dropship*>(UAIAction_Dropship::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Follow
// (None)

class UClass* UAIAction_Follow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Follow");

	return Clss;
}


// AIAction_Follow GbxAI.Default__AIAction_Follow
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Follow* UAIAction_Follow::GetDefaultObj()
{
	static class UAIAction_Follow* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Follow*>(UAIAction_Follow::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_GoToPoint
// (None)

class UClass* UBTTask_AIAction_GoToPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_GoToPoint");

	return Clss;
}


// BTTask_AIAction_GoToPoint GbxAI.Default__BTTask_AIAction_GoToPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_GoToPoint* UBTTask_AIAction_GoToPoint::GetDefaultObj()
{
	static class UBTTask_AIAction_GoToPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_GoToPoint*>(UBTTask_AIAction_GoToPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Land
// (None)

class UClass* UAIAction_Land::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Land");

	return Clss;
}


// AIAction_Land GbxAI.Default__AIAction_Land
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Land* UAIAction_Land::GetDefaultObj()
{
	static class UAIAction_Land* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Land*>(UAIAction_Land::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_LeadRoute
// (None)

class UClass* UAIAction_LeadRoute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_LeadRoute");

	return Clss;
}


// AIAction_LeadRoute GbxAI.Default__AIAction_LeadRoute
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_LeadRoute* UAIAction_LeadRoute::GetDefaultObj()
{
	static class UAIAction_LeadRoute* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_LeadRoute*>(UAIAction_LeadRoute::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_LeadRoute
// (None)

class UClass* UBTTask_AIAction_LeadRoute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_LeadRoute");

	return Clss;
}


// BTTask_AIAction_LeadRoute GbxAI.Default__BTTask_AIAction_LeadRoute
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_LeadRoute* UBTTask_AIAction_LeadRoute::GetDefaultObj()
{
	static class UBTTask_AIAction_LeadRoute* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_LeadRoute*>(UBTTask_AIAction_LeadRoute::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Leap
// (None)

class UClass* UAIAction_Leap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Leap");

	return Clss;
}


// AIAction_Leap GbxAI.Default__AIAction_Leap
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Leap* UAIAction_Leap::GetDefaultObj()
{
	static class UAIAction_Leap* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Leap*>(UAIAction_Leap::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_Leap
// (None)

class UClass* UBTTask_AIAction_Leap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_Leap");

	return Clss;
}


// BTTask_AIAction_Leap GbxAI.Default__BTTask_AIAction_Leap
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_Leap* UBTTask_AIAction_Leap::GetDefaultObj()
{
	static class UBTTask_AIAction_Leap* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_Leap*>(UBTTask_AIAction_Leap::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_LeapDirect
// (None)

class UClass* UAIAction_LeapDirect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_LeapDirect");

	return Clss;
}


// AIAction_LeapDirect GbxAI.Default__AIAction_LeapDirect
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_LeapDirect* UAIAction_LeapDirect::GetDefaultObj()
{
	static class UAIAction_LeapDirect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_LeapDirect*>(UAIAction_LeapDirect::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_LeapDirect
// (None)

class UClass* UBTTask_AIAction_LeapDirect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_LeapDirect");

	return Clss;
}


// BTTask_AIAction_LeapDirect GbxAI.Default__BTTask_AIAction_LeapDirect
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_LeapDirect* UBTTask_AIAction_LeapDirect::GetDefaultObj()
{
	static class UBTTask_AIAction_LeapDirect* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_LeapDirect*>(UBTTask_AIAction_LeapDirect::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_LookAroundRandomly
// (None)

class UClass* UAIAction_LookAroundRandomly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_LookAroundRandomly");

	return Clss;
}


// AIAction_LookAroundRandomly GbxAI.Default__AIAction_LookAroundRandomly
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_LookAroundRandomly* UAIAction_LookAroundRandomly::GetDefaultObj()
{
	static class UAIAction_LookAroundRandomly* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_LookAroundRandomly*>(UAIAction_LookAroundRandomly::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_MoveNode
// (None)

class UClass* UBTTask_AIAction_MoveNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_MoveNode");

	return Clss;
}


// BTTask_AIAction_MoveNode GbxAI.Default__BTTask_AIAction_MoveNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_MoveNode* UBTTask_AIAction_MoveNode::GetDefaultObj()
{
	static class UBTTask_AIAction_MoveNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_MoveNode*>(UBTTask_AIAction_MoveNode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_MoveSpline
// (None)

class UClass* UAIAction_MoveSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_MoveSpline");

	return Clss;
}


// AIAction_MoveSpline GbxAI.Default__AIAction_MoveSpline
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_MoveSpline* UAIAction_MoveSpline::GetDefaultObj()
{
	static class UAIAction_MoveSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_MoveSpline*>(UAIAction_MoveSpline::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAction_MoveSpline.SetupMoveSpline
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     TargetSpline                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsReverse                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIAction_MoveSpline::SetupMoveSpline(class AActor* TargetActor, class UObject* TargetSpline, float Offset, bool bIsReverse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_MoveSpline", "SetupMoveSpline");

	Params::UAIAction_MoveSpline_SetupMoveSpline_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.TargetSpline = TargetSpline;
	Parms.Offset = Offset;
	Parms.bIsReverse = bIsReverse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIAction_MoveSpline::ChangeSplineOffset(class AActor* TargetActor, float Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_MoveSpline", "ChangeSplineOffset");

	Params::UAIAction_MoveSpline_ChangeSplineOffset_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAction_OnAggro
// (None)

class UClass* UAIAction_OnAggro::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_OnAggro");

	return Clss;
}


// AIAction_OnAggro GbxAI.Default__AIAction_OnAggro
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_OnAggro* UAIAction_OnAggro::GetDefaultObj()
{
	static class UAIAction_OnAggro* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_OnAggro*>(UAIAction_OnAggro::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Orbit
// (None)

class UClass* UAIAction_Orbit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Orbit");

	return Clss;
}


// AIAction_Orbit GbxAI.Default__AIAction_Orbit
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Orbit* UAIAction_Orbit::GetDefaultObj()
{
	static class UAIAction_Orbit* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Orbit*>(UAIAction_Orbit::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Parallel
// (None)

class UClass* UAIAction_Parallel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Parallel");

	return Clss;
}


// AIAction_Parallel GbxAI.Default__AIAction_Parallel
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Parallel* UAIAction_Parallel::GetDefaultObj()
{
	static class UAIAction_Parallel* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Parallel*>(UAIAction_Parallel::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_ParallelChild
// (None)

class UClass* UAIAction_ParallelChild::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ParallelChild");

	return Clss;
}


// AIAction_ParallelChild GbxAI.Default__AIAction_ParallelChild
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_ParallelChild* UAIAction_ParallelChild::GetDefaultObj()
{
	static class UAIAction_ParallelChild* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ParallelChild*>(UAIAction_ParallelChild::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Plan
// (None)

class UClass* UAIAction_Plan::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Plan");

	return Clss;
}


// AIAction_Plan GbxAI.Default__AIAction_Plan
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Plan* UAIAction_Plan::GetDefaultObj()
{
	static class UAIAction_Plan* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Plan*>(UAIAction_Plan::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_PlayGbxAction
// (None)

class UClass* UAIAction_PlayGbxAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_PlayGbxAction");

	return Clss;
}


// AIAction_PlayGbxAction GbxAI.Default__AIAction_PlayGbxAction
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_PlayGbxAction* UAIAction_PlayGbxAction::GetDefaultObj()
{
	static class UAIAction_PlayGbxAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_PlayGbxAction*>(UAIAction_PlayGbxAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_PlayGbxAction
// (None)

class UClass* UBTTask_AIAction_PlayGbxAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_PlayGbxAction");

	return Clss;
}


// BTTask_AIAction_PlayGbxAction GbxAI.Default__BTTask_AIAction_PlayGbxAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_PlayGbxAction* UBTTask_AIAction_PlayGbxAction::GetDefaultObj()
{
	static class UBTTask_AIAction_PlayGbxAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_PlayGbxAction*>(UBTTask_AIAction_PlayGbxAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Random
// (None)

class UClass* UAIAction_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Random");

	return Clss;
}


// AIAction_Random GbxAI.Default__AIAction_Random
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Random* UAIAction_Random::GetDefaultObj()
{
	static class UAIAction_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Random*>(UAIAction_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_RandomChild
// (None)

class UClass* UAIAction_RandomChild::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_RandomChild");

	return Clss;
}


// AIAction_RandomChild GbxAI.Default__AIAction_RandomChild
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_RandomChild* UAIAction_RandomChild::GetDefaultObj()
{
	static class UAIAction_RandomChild* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_RandomChild*>(UAIAction_RandomChild::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Route
// (None)

class UClass* UAIAction_Route::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Route");

	return Clss;
}


// AIAction_Route GbxAI.Default__AIAction_Route
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Route* UAIAction_Route::GetDefaultObj()
{
	static class UAIAction_Route* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Route*>(UAIAction_Route::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_Route
// (None)

class UClass* UBTTask_AIAction_Route::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_Route");

	return Clss;
}


// BTTask_AIAction_Route GbxAI.Default__BTTask_AIAction_Route
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_Route* UBTTask_AIAction_Route::GetDefaultObj()
{
	static class UBTTask_AIAction_Route* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_Route*>(UBTTask_AIAction_Route::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_UseCover
// (None)

class UClass* UAIAction_UseCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_UseCover");

	return Clss;
}


// AIAction_UseCover GbxAI.Default__AIAction_UseCover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_UseCover* UAIAction_UseCover::GetDefaultObj()
{
	static class UAIAction_UseCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_UseCover*>(UAIAction_UseCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_SimpleCover
// (None)

class UClass* UAIAction_SimpleCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SimpleCover");

	return Clss;
}


// AIAction_SimpleCover GbxAI.Default__AIAction_SimpleCover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_SimpleCover* UAIAction_SimpleCover::GetDefaultObj()
{
	static class UAIAction_SimpleCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SimpleCover*>(UAIAction_SimpleCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_WeaponAtPoint
// (None)

class UClass* UAIAction_WeaponAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_WeaponAtPoint");

	return Clss;
}


// AIAction_WeaponAtPoint GbxAI.Default__AIAction_WeaponAtPoint
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_WeaponAtPoint* UAIAction_WeaponAtPoint::GetDefaultObj()
{
	static class UAIAction_WeaponAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_WeaponAtPoint*>(UAIAction_WeaponAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_SimpleHide
// (None)

class UClass* UAIAction_SimpleHide::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SimpleHide");

	return Clss;
}


// AIAction_SimpleHide GbxAI.Default__AIAction_SimpleHide
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_SimpleHide* UAIAction_SimpleHide::GetDefaultObj()
{
	static class UAIAction_SimpleHide* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SimpleHide*>(UAIAction_SimpleHide::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_SimpleMelee
// (None)

class UClass* UAIAction_SimpleMelee::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SimpleMelee");

	return Clss;
}


// AIAction_SimpleMelee GbxAI.Default__AIAction_SimpleMelee
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_SimpleMelee* UAIAction_SimpleMelee::GetDefaultObj()
{
	static class UAIAction_SimpleMelee* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SimpleMelee*>(UAIAction_SimpleMelee::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_SimpleRangedAttack
// (None)

class UClass* UAIAction_SimpleRangedAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SimpleRangedAttack");

	return Clss;
}


// AIAction_SimpleRangedAttack GbxAI.Default__AIAction_SimpleRangedAttack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_SimpleRangedAttack* UAIAction_SimpleRangedAttack::GetDefaultObj()
{
	static class UAIAction_SimpleRangedAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SimpleRangedAttack*>(UAIAction_SimpleRangedAttack::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_SimpleWeapon
// (None)

class UClass* UAIAction_SimpleWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_SimpleWeapon");

	return Clss;
}


// AIAction_SimpleWeapon GbxAI.Default__AIAction_SimpleWeapon
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_SimpleWeapon* UAIAction_SimpleWeapon::GetDefaultObj()
{
	static class UAIAction_SimpleWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_SimpleWeapon*>(UAIAction_SimpleWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_StateMachine
// (None)

class UClass* UAIAction_StateMachine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_StateMachine");

	return Clss;
}


// AIAction_StateMachine GbxAI.Default__AIAction_StateMachine
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_StateMachine* UAIAction_StateMachine::GetDefaultObj()
{
	static class UAIAction_StateMachine* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_StateMachine*>(UAIAction_StateMachine::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_StateMachineChild
// (None)

class UClass* UAIAction_StateMachineChild::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_StateMachineChild");

	return Clss;
}


// AIAction_StateMachineChild GbxAI.Default__AIAction_StateMachineChild
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_StateMachineChild* UAIAction_StateMachineChild::GetDefaultObj()
{
	static class UAIAction_StateMachineChild* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_StateMachineChild*>(UAIAction_StateMachineChild::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAction_StateMachineChild.GetAvailableStates
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// TArray<class UAIAction_StateMachineChild*>Array                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIAction_StateMachineChild::GetAvailableStates(TArray<class UAIAction_StateMachineChild*>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_StateMachineChild", "GetAvailableStates");

	Params::UAIAction_StateMachineChild_GetAvailableStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Class GbxAI.AIAction_Sweep
// (None)

class UClass* UAIAction_Sweep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Sweep");

	return Clss;
}


// AIAction_Sweep GbxAI.Default__AIAction_Sweep
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Sweep* UAIAction_Sweep::GetDefaultObj()
{
	static class UAIAction_Sweep* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Sweep*>(UAIAction_Sweep::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Swoop
// (None)

class UClass* UAIAction_Swoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Swoop");

	return Clss;
}


// AIAction_Swoop GbxAI.Default__AIAction_Swoop
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Swoop* UAIAction_Swoop::GetDefaultObj()
{
	static class UAIAction_Swoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Swoop*>(UAIAction_Swoop::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_TargetSequence
// (None)

class UClass* UAIAction_TargetSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_TargetSequence");

	return Clss;
}


// AIAction_TargetSequence GbxAI.Default__AIAction_TargetSequence
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_TargetSequence* UAIAction_TargetSequence::GetDefaultObj()
{
	static class UAIAction_TargetSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_TargetSequence*>(UAIAction_TargetSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_Teleport
// (None)

class UClass* UAIAction_Teleport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_Teleport");

	return Clss;
}


// AIAction_Teleport GbxAI.Default__AIAction_Teleport
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_Teleport* UAIAction_Teleport::GetDefaultObj()
{
	static class UAIAction_Teleport* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_Teleport*>(UAIAction_Teleport::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_Teleport
// (None)

class UClass* UBTTask_AIAction_Teleport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_Teleport");

	return Clss;
}


// BTTask_AIAction_Teleport GbxAI.Default__BTTask_AIAction_Teleport
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_Teleport* UBTTask_AIAction_Teleport::GetDefaultObj()
{
	static class UBTTask_AIAction_Teleport* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_Teleport*>(UBTTask_AIAction_Teleport::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_UseCover
// (None)

class UClass* UBTTask_AIAction_UseCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_UseCover");

	return Clss;
}


// BTTask_AIAction_UseCover GbxAI.Default__BTTask_AIAction_UseCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_UseCover* UBTTask_AIAction_UseCover::GetDefaultObj()
{
	static class UBTTask_AIAction_UseCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_UseCover*>(UBTTask_AIAction_UseCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_UseSmartObject
// (None)

class UClass* UAIAction_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_UseSmartObject");

	return Clss;
}


// AIAction_UseSmartObject GbxAI.Default__AIAction_UseSmartObject
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_UseSmartObject* UAIAction_UseSmartObject::GetDefaultObj()
{
	static class UAIAction_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_UseSmartObject*>(UAIAction_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_UseSmartObject
// (None)

class UClass* UBTTask_AIAction_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_UseSmartObject");

	return Clss;
}


// BTTask_AIAction_UseSmartObject GbxAI.Default__BTTask_AIAction_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_UseSmartObject* UBTTask_AIAction_UseSmartObject::GetDefaultObj()
{
	static class UBTTask_AIAction_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_UseSmartObject*>(UBTTask_AIAction_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_WeaponAtPoint
// (None)

class UClass* UBTTask_AIAction_WeaponAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_WeaponAtPoint");

	return Clss;
}


// BTTask_AIAction_WeaponAtPoint GbxAI.Default__BTTask_AIAction_WeaponAtPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_WeaponAtPoint* UBTTask_AIAction_WeaponAtPoint::GetDefaultObj()
{
	static class UBTTask_AIAction_WeaponAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_WeaponAtPoint*>(UBTTask_AIAction_WeaponAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAction_WeaponIdle
// (None)

class UClass* UAIAction_WeaponIdle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_WeaponIdle");

	return Clss;
}


// AIAction_WeaponIdle GbxAI.Default__AIAction_WeaponIdle
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_WeaponIdle* UAIAction_WeaponIdle::GetDefaultObj()
{
	static class UAIAction_WeaponIdle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_WeaponIdle*>(UAIAction_WeaponIdle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_WeaponIdle
// (None)

class UClass* UBTTask_AIAction_WeaponIdle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_WeaponIdle");

	return Clss;
}


// BTTask_AIAction_WeaponIdle GbxAI.Default__BTTask_AIAction_WeaponIdle
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_WeaponIdle* UBTTask_AIAction_WeaponIdle::GetDefaultObj()
{
	static class UBTTask_AIAction_WeaponIdle* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_WeaponIdle*>(UBTTask_AIAction_WeaponIdle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIActionBlueprint
// (Blueprint)

class UClass* UAIActionBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionBlueprint");

	return Clss;
}


// AIActionBlueprint GbxAI.Default__AIActionBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIActionBlueprint* UAIActionBlueprint::GetDefaultObj()
{
	static class UAIActionBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionBlueprint*>(UAIActionBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty
// (Final, Native, Static, Public)
// Parameters:
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIActionBlueprint::ShouldSkipBlackboardProperty(class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionBlueprint", "ShouldSkipBlackboardProperty");

	Params::UAIActionBlueprint_ShouldSkipBlackboardProperty_Params Parms{};

	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIActionBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UAIActionBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionBlueprintGeneratedClass");

	return Clss;
}


// AIActionBlueprintGeneratedClass GbxAI.Default__AIActionBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIActionBlueprintGeneratedClass* UAIActionBlueprintGeneratedClass::GetDefaultObj()
{
	static class UAIActionBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionBlueprintGeneratedClass*>(UAIActionBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GameplayTask_RunScriptedAIAction
// (None)

class UClass* UGameplayTask_RunScriptedAIAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_RunScriptedAIAction");

	return Clss;
}


// GameplayTask_RunScriptedAIAction GbxAI.Default__GameplayTask_RunScriptedAIAction
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::GetDefaultObj()
{
	static class UGameplayTask_RunScriptedAIAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_RunScriptedAIAction*>(UGameplayTask_RunScriptedAIAction::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIAction>       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_RunScriptedAIAction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_Object(class UObject* Object, TSubclassOf<class UAIAction> Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_RunScriptedAIAction", "RunScriptedAIAction_Object");

	Params::UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Object_Params Parms{};

	Parms.Object = Object;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxAIController*            Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIAction>       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_RunScriptedAIAction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_Controller(class AGbxAIController* Controller, TSubclassOf<class UAIAction> Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_RunScriptedAIAction", "RunScriptedAIAction_Controller");

	Params::UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Controller_Params Parms{};

	Parms.Controller = Controller;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIActionComponent*          AIActionComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIAction>       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_RunScriptedAIAction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_AIActionComponent(class UAIActionComponent* AIActionComponent, TSubclassOf<class UAIAction> Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_RunScriptedAIAction", "RunScriptedAIAction_AIActionComponent");

	Params::UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_AIActionComponent_Params Parms{};

	Parms.AIActionComponent = AIActionComponent;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIAction>       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_RunScriptedAIAction*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::RunScriptedAIAction_Actor(class AActor* Actor, TSubclassOf<class UAIAction> Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_RunScriptedAIAction", "RunScriptedAIAction_Actor");

	Params::UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Actor_Params Parms{};

	Parms.Actor = Actor;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIActionComponent
// (None)

class UClass* UAIActionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionComponent");

	return Clss;
}


// AIActionComponent GbxAI.Default__AIActionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIActionComponent* UAIActionComponent::GetDefaultObj()
{
	static class UAIActionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionComponent*>(UAIActionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIActionComponent.ReplaceMainAIAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAIAction>       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIActionComponent::ReplaceMainAIAction(TSubclassOf<class UAIAction> Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionComponent", "ReplaceMainAIAction");

	Params::UAIActionComponent_ReplaceMainAIAction_Params Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIActionComponent.GetBlackboardData
// (Final, Native, Public, Const)
// Parameters:
// class UBlackboardData*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardData* UAIActionComponent::GetBlackboardData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionComponent", "GetBlackboardData");

	Params::UAIActionComponent_GetBlackboardData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIActionComponent.AbortScriptedAIAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bStopImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIActionComponent::AbortScriptedAIAction(bool bStopImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIActionComponent", "AbortScriptedAIAction");

	Params::UAIActionComponent_AbortScriptedAIAction_Params Parms{};

	Parms.bStopImmediately = bStopImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.AIActionManager
// (None)

class UClass* UAIActionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIActionManager");

	return Clss;
}


// AIActionManager GbxAI.Default__AIActionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIActionManager* UAIActionManager::GetDefaultObj()
{
	static class UAIActionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIActionManager*>(UAIActionManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect
// (None)

class UClass* UAIAspect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect");

	return Clss;
}


// AIAspect GbxAI.Default__AIAspect
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect* UAIAspect::GetDefaultObj()
{
	static class UAIAspect* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect*>(UAIAspect::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_ActorCollision
// (None)

class UClass* UAIAspect_ActorCollision::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_ActorCollision");

	return Clss;
}


// AIAspect_ActorCollision GbxAI.Default__AIAspect_ActorCollision
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_ActorCollision* UAIAspect_ActorCollision::GetDefaultObj()
{
	static class UAIAspect_ActorCollision* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_ActorCollision*>(UAIAspect_ActorCollision::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_ActorCollision.OnPawnHit
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class AActor*                      SelfActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAIAspect_ActorCollision::OnPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_ActorCollision", "OnPawnHit");

	Params::UAIAspect_ActorCollision_OnPawnHit_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<class FName>                Options                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIAspect_ActorCollision::GetOnCollisionOptions(TArray<class FName>* Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_ActorCollision", "GetOnCollisionOptions");

	Params::UAIAspect_ActorCollision_GetOnCollisionOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

}


// Class GbxAI.AIAspect_Condition
// (None)

class UClass* UAIAspect_Condition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Condition");

	return Clss;
}


// AIAspect_Condition GbxAI.Default__AIAspect_Condition
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Condition* UAIAspect_Condition::GetDefaultObj()
{
	static class UAIAspect_Condition* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Condition*>(UAIAspect_Condition::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Condition.GetConditionDataDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_ConditionDataConditionData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Condition::GetConditionDataDescription(struct FAIAspectSettings_ConditionData& ConditionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Condition", "GetConditionDataDescription");

	Params::UAIAspect_Condition_GetConditionDataDescription_Params Parms{};

	Parms.ConditionData = ConditionData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_AIGroupCondition
// (None)

class UClass* UAIAspect_AIGroupCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_AIGroupCondition");

	return Clss;
}


// AIAspect_AIGroupCondition GbxAI.Default__AIAspect_AIGroupCondition
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_AIGroupCondition* UAIAspect_AIGroupCondition::GetDefaultObj()
{
	static class UAIAspect_AIGroupCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_AIGroupCondition*>(UAIAspect_AIGroupCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_AvoidWhileIdle
// (None)

class UClass* UAIAspect_AvoidWhileIdle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_AvoidWhileIdle");

	return Clss;
}


// AIAspect_AvoidWhileIdle GbxAI.Default__AIAspect_AvoidWhileIdle
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_AvoidWhileIdle* UAIAspect_AvoidWhileIdle::GetDefaultObj()
{
	static class UAIAspect_AvoidWhileIdle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_AvoidWhileIdle*>(UAIAspect_AvoidWhileIdle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_BlackboardKey
// (None)

class UClass* UAIAspect_BlackboardKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_BlackboardKey");

	return Clss;
}


// AIAspect_BlackboardKey GbxAI.Default__AIAspect_BlackboardKey
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_BlackboardKey* UAIAspect_BlackboardKey::GetDefaultObj()
{
	static class UAIAspect_BlackboardKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_BlackboardKey*>(UAIAspect_BlackboardKey::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_BlackboardKeyBBKeySettings                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_BlackboardKey::GetSettingsDescription(struct FAIAspectSettings_BlackboardKey& BBKeySettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_BlackboardKey", "GetSettingsDescription");

	Params::UAIAspect_BlackboardKey_GetSettingsDescription_Params Parms{};

	Parms.BBKeySettings = BBKeySettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_Charge
// (None)

class UClass* UAIAspect_Charge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Charge");

	return Clss;
}


// AIAspect_Charge GbxAI.Default__AIAspect_Charge
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Charge* UAIAspect_Charge::GetDefaultObj()
{
	static class UAIAspect_Charge* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Charge*>(UAIAspect_Charge::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Navigation
// (None)

class UClass* UAIAspect_Navigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Navigation");

	return Clss;
}


// AIAspect_Navigation GbxAI.Default__AIAspect_Navigation
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Navigation* UAIAspect_Navigation::GetDefaultObj()
{
	static class UAIAspect_Navigation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Navigation*>(UAIAspect_Navigation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_NavigationNavSettings                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Navigation::GetNavSettingsDescription(struct FAIAspectSettings_Navigation& NavSettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Navigation", "GetNavSettingsDescription");

	Params::UAIAspect_Navigation_GetNavSettingsDescription_Params Parms{};

	Parms.NavSettings = NavSettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_Circle
// (None)

class UClass* UAIAspect_Circle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Circle");

	return Clss;
}


// AIAspect_Circle GbxAI.Default__AIAspect_Circle
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Circle* UAIAspect_Circle::GetDefaultObj()
{
	static class UAIAspect_Circle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Circle*>(UAIAspect_Circle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_ClaimSmartObject
// (None)

class UClass* UAIAspect_ClaimSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_ClaimSmartObject");

	return Clss;
}


// AIAspect_ClaimSmartObject GbxAI.Default__AIAspect_ClaimSmartObject
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_ClaimSmartObject* UAIAspect_ClaimSmartObject::GetDefaultObj()
{
	static class UAIAspect_ClaimSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_ClaimSmartObject*>(UAIAspect_ClaimSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Cooldown
// (None)

class UClass* UAIAspect_Cooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Cooldown");

	return Clss;
}


// AIAspect_Cooldown GbxAI.Default__AIAspect_Cooldown
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Cooldown* UAIAspect_Cooldown::GetDefaultObj()
{
	static class UAIAspect_Cooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Cooldown*>(UAIAspect_Cooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Crouch
// (None)

class UClass* UAIAspect_Crouch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Crouch");

	return Clss;
}


// AIAspect_Crouch GbxAI.Default__AIAspect_Crouch
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Crouch* UAIAspect_Crouch::GetDefaultObj()
{
	static class UAIAspect_Crouch* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Crouch*>(UAIAspect_Crouch::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_DisableAvoidance
// (None)

class UClass* UAIAspect_DisableAvoidance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_DisableAvoidance");

	return Clss;
}


// AIAspect_DisableAvoidance GbxAI.Default__AIAspect_DisableAvoidance
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_DisableAvoidance* UAIAspect_DisableAvoidance::GetDefaultObj()
{
	static class UAIAspect_DisableAvoidance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_DisableAvoidance*>(UAIAspect_DisableAvoidance::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_MoveNode
// (None)

class UClass* UAIAspect_MoveNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_MoveNode");

	return Clss;
}


// AIAspect_MoveNode GbxAI.Default__AIAspect_MoveNode
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_MoveNode* UAIAspect_MoveNode::GetDefaultObj()
{
	static class UAIAspect_MoveNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_MoveNode*>(UAIAspect_MoveNode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_UseNode
// (None)

class UClass* UAIAspect_UseNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_UseNode");

	return Clss;
}


// AIAspect_UseNode GbxAI.Default__AIAspect_UseNode
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_UseNode* UAIAspect_UseNode::GetDefaultObj()
{
	static class UAIAspect_UseNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_UseNode*>(UAIAspect_UseNode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_DropshipSpawn
// (None)

class UClass* UAIAspect_DropshipSpawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_DropshipSpawn");

	return Clss;
}


// AIAspect_DropshipSpawn GbxAI.Default__AIAspect_DropshipSpawn
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_DropshipSpawn* UAIAspect_DropshipSpawn::GetDefaultObj()
{
	static class UAIAspect_DropshipSpawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_DropshipSpawn*>(UAIAspect_DropshipSpawn::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_EnvQuery
// (None)

class UClass* UAIAspect_EnvQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_EnvQuery");

	return Clss;
}


// AIAspect_EnvQuery GbxAI.Default__AIAspect_EnvQuery
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_EnvQuery* UAIAspect_EnvQuery::GetDefaultObj()
{
	static class UAIAspect_EnvQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_EnvQuery*>(UAIAspect_EnvQuery::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_EnvQuery  QuerySettings                                                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_EnvQuery::GetQuerySettingsDescription(struct FAIAspectSettings_EnvQuery& QuerySettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_EnvQuery", "GetQuerySettingsDescription");

	Params::UAIAspect_EnvQuery_GetQuerySettingsDescription_Params Parms{};

	Parms.QuerySettings = QuerySettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_FaceNearbyCover
// (None)

class UClass* UAIAspect_FaceNearbyCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_FaceNearbyCover");

	return Clss;
}


// AIAspect_FaceNearbyCover GbxAI.Default__AIAspect_FaceNearbyCover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_FaceNearbyCover* UAIAspect_FaceNearbyCover::GetDefaultObj()
{
	static class UAIAspect_FaceNearbyCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_FaceNearbyCover*>(UAIAspect_FaceNearbyCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_GbxAction
// (None)

class UClass* UAIAspect_GbxAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_GbxAction");

	return Clss;
}


// AIAspect_GbxAction GbxAI.Default__AIAspect_GbxAction
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_GbxAction* UAIAspect_GbxAction::GetDefaultObj()
{
	static class UAIAspect_GbxAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_GbxAction*>(UAIAspect_GbxAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_FallToGround
// (None)

class UClass* UAIAspect_FallToGround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_FallToGround");

	return Clss;
}


// AIAspect_FallToGround GbxAI.Default__AIAspect_FallToGround
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_FallToGround* UAIAspect_FallToGround::GetDefaultObj()
{
	static class UAIAspect_FallToGround* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_FallToGround*>(UAIAspect_FallToGround::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_FindClosestPlayer
// (None)

class UClass* UAIAspect_FindClosestPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_FindClosestPlayer");

	return Clss;
}


// AIAspect_FindClosestPlayer GbxAI.Default__AIAspect_FindClosestPlayer
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_FindClosestPlayer* UAIAspect_FindClosestPlayer::GetDefaultObj()
{
	static class UAIAspect_FindClosestPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_FindClosestPlayer*>(UAIAspect_FindClosestPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_FindCover
// (None)

class UClass* UAIAspect_FindCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_FindCover");

	return Clss;
}


// AIAspect_FindCover GbxAI.Default__AIAspect_FindCover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_FindCover* UAIAspect_FindCover::GetDefaultObj()
{
	static class UAIAspect_FindCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_FindCover*>(UAIAspect_FindCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_FlyToNavMesh
// (None)

class UClass* UAIAspect_FlyToNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_FlyToNavMesh");

	return Clss;
}


// AIAspect_FlyToNavMesh GbxAI.Default__AIAspect_FlyToNavMesh
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_FlyToNavMesh* UAIAspect_FlyToNavMesh::GetDefaultObj()
{
	static class UAIAspect_FlyToNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_FlyToNavMesh*>(UAIAspect_FlyToNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_FollowUpdate
// (None)

class UClass* UAIAspect_FollowUpdate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_FollowUpdate");

	return Clss;
}


// AIAspect_FollowUpdate GbxAI.Default__AIAspect_FollowUpdate
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_FollowUpdate* UAIAspect_FollowUpdate::GetDefaultObj()
{
	static class UAIAspect_FollowUpdate* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_FollowUpdate*>(UAIAspect_FollowUpdate::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_GroupLocation
// (None)

class UClass* UAIAspect_GroupLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_GroupLocation");

	return Clss;
}


// AIAspect_GroupLocation GbxAI.Default__AIAspect_GroupLocation
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_GroupLocation* UAIAspect_GroupLocation::GetDefaultObj()
{
	static class UAIAspect_GroupLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_GroupLocation*>(UAIAspect_GroupLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_IntCompare
// (None)

class UClass* UAIAspect_IntCompare::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_IntCompare");

	return Clss;
}


// AIAspect_IntCompare GbxAI.Default__AIAspect_IntCompare
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_IntCompare* UAIAspect_IntCompare::GetDefaultObj()
{
	static class UAIAspect_IntCompare* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_IntCompare*>(UAIAspect_IntCompare::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_IsInRange
// (None)

class UClass* UAIAspect_IsInRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_IsInRange");

	return Clss;
}


// AIAspect_IsInRange GbxAI.Default__AIAspect_IsInRange
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_IsInRange* UAIAspect_IsInRange::GetDefaultObj()
{
	static class UAIAspect_IsInRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_IsInRange*>(UAIAspect_IsInRange::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_IsInTerritory
// (None)

class UClass* UAIAspect_IsInTerritory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_IsInTerritory");

	return Clss;
}


// AIAspect_IsInTerritory GbxAI.Default__AIAspect_IsInTerritory
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_IsInTerritory* UAIAspect_IsInTerritory::GetDefaultObj()
{
	static class UAIAspect_IsInTerritory* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_IsInTerritory*>(UAIAspect_IsInTerritory::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Land
// (None)

class UClass* UAIAspect_Land::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Land");

	return Clss;
}


// AIAspect_Land GbxAI.Default__AIAspect_Land
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Land* UAIAspect_Land::GetDefaultObj()
{
	static class UAIAspect_Land* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Land*>(UAIAspect_Land::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_LeadUpdate
// (None)

class UClass* UAIAspect_LeadUpdate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_LeadUpdate");

	return Clss;
}


// AIAspect_LeadUpdate GbxAI.Default__AIAspect_LeadUpdate
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_LeadUpdate* UAIAspect_LeadUpdate::GetDefaultObj()
{
	static class UAIAspect_LeadUpdate* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_LeadUpdate*>(UAIAspect_LeadUpdate::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Leap
// (None)

class UClass* UAIAspect_Leap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Leap");

	return Clss;
}


// AIAspect_Leap GbxAI.Default__AIAspect_Leap
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Leap* UAIAspect_Leap::GetDefaultObj()
{
	static class UAIAspect_Leap* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Leap*>(UAIAspect_Leap::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_Leap      LeapSettings                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Leap::GetQuerySettingsDescription(struct FAIAspectSettings_Leap& LeapSettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Leap", "GetQuerySettingsDescription");

	Params::UAIAspect_Leap_GetQuerySettingsDescription_Params Parms{};

	Parms.LeapSettings = LeapSettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_Location
// (None)

class UClass* UAIAspect_Location::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Location");

	return Clss;
}


// AIAspect_Location GbxAI.Default__AIAspect_Location
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Location* UAIAspect_Location::GetDefaultObj()
{
	static class UAIAspect_Location* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Location*>(UAIAspect_Location::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_LockTarget
// (None)

class UClass* UAIAspect_LockTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_LockTarget");

	return Clss;
}


// AIAspect_LockTarget GbxAI.Default__AIAspect_LockTarget
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_LockTarget* UAIAspect_LockTarget::GetDefaultObj()
{
	static class UAIAspect_LockTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_LockTarget*>(UAIAspect_LockTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_LookAroundRandomly
// (None)

class UClass* UAIAspect_LookAroundRandomly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_LookAroundRandomly");

	return Clss;
}


// AIAspect_LookAroundRandomly GbxAI.Default__AIAspect_LookAroundRandomly
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_LookAroundRandomly* UAIAspect_LookAroundRandomly::GetDefaultObj()
{
	static class UAIAspect_LookAroundRandomly* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_LookAroundRandomly*>(UAIAspect_LookAroundRandomly::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Loop
// (None)

class UClass* UAIAspect_Loop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Loop");

	return Clss;
}


// AIAspect_Loop GbxAI.Default__AIAspect_Loop
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Loop* UAIAspect_Loop::GetDefaultObj()
{
	static class UAIAspect_Loop* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Loop*>(UAIAspect_Loop::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Loop.GetSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_Loop      LoopSettings                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Loop::GetSettingsDescription(struct FAIAspectSettings_Loop& LoopSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Loop", "GetSettingsDescription");

	Params::UAIAspect_Loop_GetSettingsDescription_Params Parms{};

	Parms.LoopSettings = LoopSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_MoveSpline
// (None)

class UClass* UAIAspect_MoveSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_MoveSpline");

	return Clss;
}


// AIAspect_MoveSpline GbxAI.Default__AIAspect_MoveSpline
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_MoveSpline* UAIAspect_MoveSpline::GetDefaultObj()
{
	static class UAIAspect_MoveSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_MoveSpline*>(UAIAspect_MoveSpline::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_NavBlackboard
// (None)

class UClass* UAIAspect_NavBlackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_NavBlackboard");

	return Clss;
}


// AIAspect_NavBlackboard GbxAI.Default__AIAspect_NavBlackboard
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_NavBlackboard* UAIAspect_NavBlackboard::GetDefaultObj()
{
	static class UAIAspect_NavBlackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_NavBlackboard*>(UAIAspect_NavBlackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_NavCover
// (None)

class UClass* UAIAspect_NavCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_NavCover");

	return Clss;
}


// AIAspect_NavCover GbxAI.Default__AIAspect_NavCover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_NavCover* UAIAspect_NavCover::GetDefaultObj()
{
	static class UAIAspect_NavCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_NavCover*>(UAIAspect_NavCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_NavFlyOffset
// (None)

class UClass* UAIAspect_NavFlyOffset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_NavFlyOffset");

	return Clss;
}


// AIAspect_NavFlyOffset GbxAI.Default__AIAspect_NavFlyOffset
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_NavFlyOffset* UAIAspect_NavFlyOffset::GetDefaultObj()
{
	static class UAIAspect_NavFlyOffset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_NavFlyOffset*>(UAIAspect_NavFlyOffset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Orbit
// (None)

class UClass* UAIAspect_Orbit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Orbit");

	return Clss;
}


// AIAspect_Orbit GbxAI.Default__AIAspect_Orbit
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Orbit* UAIAspect_Orbit::GetDefaultObj()
{
	static class UAIAspect_Orbit* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Orbit*>(UAIAspect_Orbit::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Plan
// (None)

class UClass* UAIAspect_Plan::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Plan");

	return Clss;
}


// AIAspect_Plan GbxAI.Default__AIAspect_Plan
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Plan* UAIAspect_Plan::GetDefaultObj()
{
	static class UAIAspect_Plan* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Plan*>(UAIAspect_Plan::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Rotation
// (None)

class UClass* UAIAspect_Rotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Rotation");

	return Clss;
}


// AIAspect_Rotation GbxAI.Default__AIAspect_Rotation
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Rotation* UAIAspect_Rotation::GetDefaultObj()
{
	static class UAIAspect_Rotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Rotation*>(UAIAspect_Rotation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_Rotation  RotationSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Rotation::GetRotationSettingsDescription(struct FAIAspectSettings_Rotation& RotationSettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Rotation", "GetRotationSettingsDescription");

	Params::UAIAspect_Rotation_GetRotationSettingsDescription_Params Parms{};

	Parms.RotationSettings = RotationSettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_RotationChannelRotationChannelSettings                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Rotation::GetRotationChannelSettingsDescription(struct FAIAspectSettings_RotationChannel& RotationChannelSettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Rotation", "GetRotationChannelSettingsDescription");

	Params::UAIAspect_Rotation_GetRotationChannelSettingsDescription_Params Parms{};

	Parms.RotationChannelSettings = RotationChannelSettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_Route
// (None)

class UClass* UAIAspect_Route::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Route");

	return Clss;
}


// AIAspect_Route GbxAI.Default__AIAspect_Route
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Route* UAIAspect_Route::GetDefaultObj()
{
	static class UAIAspect_Route* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Route*>(UAIAspect_Route::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Stance
// (None)

class UClass* UAIAspect_Stance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Stance");

	return Clss;
}


// AIAspect_Stance GbxAI.Default__AIAspect_Stance
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Stance* UAIAspect_Stance::GetDefaultObj()
{
	static class UAIAspect_Stance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Stance*>(UAIAspect_Stance::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Sweep
// (None)

class UClass* UAIAspect_Sweep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Sweep");

	return Clss;
}


// AIAspect_Sweep GbxAI.Default__AIAspect_Sweep
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Sweep* UAIAspect_Sweep::GetDefaultObj()
{
	static class UAIAspect_Sweep* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Sweep*>(UAIAspect_Sweep::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Swoop
// (None)

class UClass* UAIAspect_Swoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Swoop");

	return Clss;
}


// AIAspect_Swoop GbxAI.Default__AIAspect_Swoop
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Swoop* UAIAspect_Swoop::GetDefaultObj()
{
	static class UAIAspect_Swoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Swoop*>(UAIAspect_Swoop::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_TakeOff
// (None)

class UClass* UAIAspect_TakeOff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_TakeOff");

	return Clss;
}


// AIAspect_TakeOff GbxAI.Default__AIAspect_TakeOff
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_TakeOff* UAIAspect_TakeOff::GetDefaultObj()
{
	static class UAIAspect_TakeOff* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_TakeOff*>(UAIAspect_TakeOff::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Teleport
// (None)

class UClass* UAIAspect_Teleport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Teleport");

	return Clss;
}


// AIAspect_Teleport GbxAI.Default__AIAspect_Teleport
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Teleport* UAIAspect_Teleport::GetDefaultObj()
{
	static class UAIAspect_Teleport* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Teleport*>(UAIAspect_Teleport::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_Teleport  TeleportSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Teleport::GetTeleportSettingsDescription(struct FAIAspectSettings_Teleport& TeleportSettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Teleport", "GetTeleportSettingsDescription");

	Params::UAIAspect_Teleport_GetTeleportSettingsDescription_Params Parms{};

	Parms.TeleportSettings = TeleportSettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_Territory
// (None)

class UClass* UAIAspect_Territory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Territory");

	return Clss;
}


// AIAspect_Territory GbxAI.Default__AIAspect_Territory
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Territory* UAIAspect_Territory::GetDefaultObj()
{
	static class UAIAspect_Territory* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Territory*>(UAIAspect_Territory::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Ticket
// (None)

class UClass* UAIAspect_Ticket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Ticket");

	return Clss;
}


// AIAspect_Ticket GbxAI.Default__AIAspect_Ticket
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Ticket* UAIAspect_Ticket::GetDefaultObj()
{
	static class UAIAspect_Ticket* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Ticket*>(UAIAspect_Ticket::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_TimedCondition
// (None)

class UClass* UAIAspect_TimedCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_TimedCondition");

	return Clss;
}


// AIAspect_TimedCondition GbxAI.Default__AIAspect_TimedCondition
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_TimedCondition* UAIAspect_TimedCondition::GetDefaultObj()
{
	static class UAIAspect_TimedCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_TimedCondition*>(UAIAspect_TimedCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_TimeLimit
// (None)

class UClass* UAIAspect_TimeLimit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_TimeLimit");

	return Clss;
}


// AIAspect_TimeLimit GbxAI.Default__AIAspect_TimeLimit
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_TimeLimit* UAIAspect_TimeLimit::GetDefaultObj()
{
	static class UAIAspect_TimeLimit* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_TimeLimit*>(UAIAspect_TimeLimit::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Timer
// (None)

class UClass* UAIAspect_Timer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Timer");

	return Clss;
}


// AIAspect_Timer GbxAI.Default__AIAspect_Timer
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Timer* UAIAspect_Timer::GetDefaultObj()
{
	static class UAIAspect_Timer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Timer*>(UAIAspect_Timer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_UseCover
// (None)

class UClass* UAIAspect_UseCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_UseCover");

	return Clss;
}


// AIAspect_UseCover GbxAI.Default__AIAspect_UseCover
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_UseCover* UAIAspect_UseCover::GetDefaultObj()
{
	static class UAIAspect_UseCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_UseCover*>(UAIAspect_UseCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_UseSmartObject
// (None)

class UClass* UAIAspect_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_UseSmartObject");

	return Clss;
}


// AIAspect_UseSmartObject GbxAI.Default__AIAspect_UseSmartObject
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_UseSmartObject* UAIAspect_UseSmartObject::GetDefaultObj()
{
	static class UAIAspect_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_UseSmartObject*>(UAIAspect_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspect_Weapon
// (None)

class UClass* UAIAspect_Weapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_Weapon");

	return Clss;
}


// AIAspect_Weapon GbxAI.Default__AIAspect_Weapon
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_Weapon* UAIAspect_Weapon::GetDefaultObj()
{
	static class UAIAspect_Weapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_Weapon*>(UAIAspect_Weapon::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FAIAspectSettings_Weapon    WeaponSettings                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UProperty*                   Property                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIAspect_Weapon::GetWeaponSettingsDescription(struct FAIAspectSettings_Weapon& WeaponSettings, class UProperty* Property)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAspect_Weapon", "GetWeaponSettingsDescription");

	Params::UAIAspect_Weapon_GetWeaponSettingsDescription_Params Parms{};

	Parms.WeaponSettings = WeaponSettings;
	Parms.Property = Property;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAspect_ZeroRotation
// (None)

class UClass* UAIAspect_ZeroRotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspect_ZeroRotation");

	return Clss;
}


// AIAspect_ZeroRotation GbxAI.Default__AIAspect_ZeroRotation
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAspect_ZeroRotation* UAIAspect_ZeroRotation::GetDefaultObj()
{
	static class UAIAspect_ZeroRotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspect_ZeroRotation*>(UAIAspect_ZeroRotation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIAspectBlueprint
// (Blueprint)

class UClass* UAIAspectBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAspectBlueprint");

	return Clss;
}


// AIAspectBlueprint GbxAI.Default__AIAspectBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIAspectBlueprint* UAIAspectBlueprint::GetDefaultObj()
{
	static class UAIAspectBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAspectBlueprint*>(UAIAspectBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AICloakData
// (None)

class UClass* UAICloakData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AICloakData");

	return Clss;
}


// AICloakData GbxAI.Default__AICloakData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAICloakData* UAICloakData::GetDefaultObj()
{
	static class UAICloakData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAICloakData*>(UAICloakData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AICloakComponent
// (None)

class UClass* UAICloakComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AICloakComponent");

	return Clss;
}


// AICloakComponent GbxAI.Default__AICloakComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAICloakComponent* UAICloakComponent::GetDefaultObj()
{
	static class UAICloakComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAICloakComponent*>(UAICloakComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AICloakComponent.SetCloakData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAICloakData*                NewCloakData                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAICloakComponent::SetCloakData(class UAICloakData* NewCloakData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "SetCloakData");

	Params::UAICloakComponent_SetCloakData_Params Parms{};

	Parms.NewCloakData = NewCloakData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AICloakComponent.OnRep_Cloaked
// (Final, Native, Private)
// Parameters:

void UAICloakComponent::OnRep_Cloaked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "OnRep_Cloaked");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AICloakComponent.IsPlayingAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAICloakComponent::IsPlayingAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "IsPlayingAction");

	Params::UAICloakComponent_IsPlayingAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AICloakComponent.IsCloakStateForced
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAICloakComponent::IsCloakStateForced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "IsCloakStateForced");

	Params::UAICloakComponent_IsCloakStateForced_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AICloakComponent.IsCloaked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAICloakComponent::IsCloaked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "IsCloaked");

	Params::UAICloakComponent_IsCloaked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AICloakComponent.InterruptCloakAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAICloakComponent::InterruptCloakAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "InterruptCloakAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AICloakComponent.GetCloakData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAICloakData*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAICloakData* UAICloakComponent::GetCloakData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "GetCloakData");

	Params::UAICloakComponent_GetCloakData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AICloakComponent.ForceUncloak
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanPlayActions                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAICloakComponent::ForceUncloak(bool bInCanPlayActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "ForceUncloak");

	Params::UAICloakComponent_ForceUncloak_Params Parms{};

	Parms.bInCanPlayActions = bInCanPlayActions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AICloakComponent.ForceCloak
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanPlayActions                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAICloakComponent::ForceCloak(bool bInCanPlayActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "ForceCloak");

	Params::UAICloakComponent_ForceCloak_Params Parms{};

	Parms.bInCanPlayActions = bInCanPlayActions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AICloakComponent.ClearForcedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAICloakComponent::ClearForcedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "ClearForcedState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AICloakComponent.ClearCloakData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAICloakComponent::ClearCloakData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICloakComponent", "ClearCloakData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.AIConstraint
// (None)

class UClass* UAIConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIConstraint");

	return Clss;
}


// AIConstraint GbxAI.Default__AIConstraint
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIConstraint* UAIConstraint::GetDefaultObj()
{
	static class UAIConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIConstraint*>(UAIConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIGroupBlueprintLibrary
// (None)

class UClass* UAIGroupBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIGroupBlueprintLibrary");

	return Clss;
}


// AIGroupBlueprintLibrary GbxAI.Default__AIGroupBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIGroupBlueprintLibrary* UAIGroupBlueprintLibrary::GetDefaultObj()
{
	static class UAIGroupBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIGroupBlueprintLibrary*>(UAIGroupBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*               AIUser                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITicketDataAsset*          Ticket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterruptible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIGroupBlueprintLibrary::IsUsingAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, bool bInterruptible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupBlueprintLibrary", "IsUsingAITicket");

	Params::UAIGroupBlueprintLibrary_IsUsingAITicket_Params Parms{};

	Parms.AIUser = AIUser;
	Parms.Ticket = Ticket;
	Parms.bInterruptible = bInterruptible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAITicketHandle             TicketHandle                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIGroupBlueprintLibrary::IsTicketValid(struct FAITicketHandle& TicketHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupBlueprintLibrary", "IsTicketValid");

	Params::UAIGroupBlueprintLibrary_IsTicketValid_Params Parms{};

	Parms.TicketHandle = TicketHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIGroupBlueprintLibrary.ClearTicket
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAITicketHandle             TicketHandle                                                     (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              HoldDuration                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIGroupBlueprintLibrary::ClearTicket(struct FAITicketHandle& TicketHandle, float HoldDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupBlueprintLibrary", "ClearTicket");

	Params::UAIGroupBlueprintLibrary_ClearTicket_Params Parms{};

	Parms.TicketHandle = TicketHandle;
	Parms.HoldDuration = HoldDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               AIUser                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITicketDataAsset*          Ticket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HoldDuration                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIGroupBlueprintLibrary::ClearAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float HoldDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupBlueprintLibrary", "ClearAITicket");

	Params::UAIGroupBlueprintLibrary_ClearAITicket_Params Parms{};

	Parms.AIUser = AIUser;
	Parms.Ticket = Ticket;
	Parms.HoldDuration = HoldDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*               AIUser                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITicketDataAsset*          Ticket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterruptible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIGroupBlueprintLibrary::CanUseAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, bool bInterruptible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupBlueprintLibrary", "CanUseAITicket");

	Params::UAIGroupBlueprintLibrary_CanUseAITicket_Params Parms{};

	Parms.AIUser = AIUser;
	Parms.Ticket = Ticket;
	Parms.Value = Value;
	Parms.bInterruptible = bInterruptible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIGroupBlueprintLibrary.AddAITicket
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAITicketHandle             OutTicketHandle                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class AAIController*               AIUser                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITicketDataAsset*          Ticket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDuration                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPriority                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterruptible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIGroupBlueprintLibrary::AddAITicket(struct FAITicketHandle* OutTicketHandle, class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupBlueprintLibrary", "AddAITicket");

	Params::UAIGroupBlueprintLibrary_AddAITicket_Params Parms{};

	Parms.AIUser = AIUser;
	Parms.Ticket = Ticket;
	Parms.Value = Value;
	Parms.MaxDuration = MaxDuration;
	Parms.bPriority = bPriority;
	Parms.bInterruptible = bInterruptible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTicketHandle != nullptr)
		*OutTicketHandle = std::move(Parms.OutTicketHandle);

	return Parms.ReturnValue;

}


// Class GbxAI.AIGroupState
// (None)

class UClass* UAIGroupState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIGroupState");

	return Clss;
}


// AIGroupState GbxAI.Default__AIGroupState
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIGroupState* UAIGroupState::GetDefaultObj()
{
	static class UAIGroupState* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIGroupState*>(UAIGroupState::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIGroupState.OnThreatActorDied
// (Final, Native, Private)
// Parameters:
// class AActor*                      DamageReceiver                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamageCauser                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIGroupState::OnThreatActorDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIGroupState", "OnThreatActorDied");

	Params::UAIGroupState_OnThreatActorDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.AINode
// (Actor)

class UClass* AAINode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AINode");

	return Clss;
}


// AINode GbxAI.Default__AINode
// (Public, ClassDefaultObject, ArchetypeObject)

class AAINode* AAINode::GetDefaultObj()
{
	static class AAINode* Default = nullptr;

	if (!Default)
		Default = static_cast<AAINode*>(AAINode::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AINode.OnPawnDepartedNodeCB
// (Final, Native, Private)
// Parameters:
// class AActor*                      NodeActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       DepartedPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAINode::OnPawnDepartedNodeCB(class AActor* NodeActor, class APawn* DepartedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINode", "OnPawnDepartedNodeCB");

	Params::AAINode_OnPawnDepartedNodeCB_Params Parms{};

	Parms.NodeActor = NodeActor;
	Parms.DepartedPawn = DepartedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AINode.OnPawnArrivedNodeCB
// (Final, Native, Private)
// Parameters:
// class AActor*                      NodeActor                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ArrivedPawn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAINode::OnPawnArrivedNodeCB(class AActor* NodeActor, class APawn* ArrivedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINode", "OnPawnArrivedNodeCB");

	Params::AAINode_OnPawnArrivedNodeCB_Params Parms{};

	Parms.NodeActor = NodeActor;
	Parms.ArrivedPawn = ArrivedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.AINodeBlueprintLibrary
// (None)

class UClass* UAINodeBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AINodeBlueprintLibrary");

	return Clss;
}


// AINodeBlueprintLibrary GbxAI.Default__AINodeBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAINodeBlueprintLibrary* UAINodeBlueprintLibrary::GetDefaultObj()
{
	static class UAINodeBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAINodeBlueprintLibrary*>(UAINodeBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AINodeBlueprintLibrary.FindNearestNode
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAINodeBlueprintLibrary::FindNearestNode(class UObject* WorldContextObject, struct FVector& Location, bool bIncludeDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeBlueprintLibrary", "FindNearestNode");

	Params::UAINodeBlueprintLibrary_FindNearestNode_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.bIncludeDisabled = bIncludeDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeBlueprintLibrary.FindAllNodes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>              OutputNodes                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAINodeBlueprintLibrary::FindAllNodes(TArray<class AActor*>* OutputNodes, class UObject* WorldContextObject, bool bIncludeDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeBlueprintLibrary", "FindAllNodes");

	Params::UAINodeBlueprintLibrary_FindAllNodes_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bIncludeDisabled = bIncludeDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutputNodes != nullptr)
		*OutputNodes = std::move(Parms.OutputNodes);

}


// Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAINodeBlueprintLibrary::ChooseRandomNode(class UObject* WorldContextObject, bool bIncludeDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeBlueprintLibrary", "ChooseRandomNode");

	Params::UAINodeBlueprintLibrary_ChooseRandomNode_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bIncludeDisabled = bIncludeDisabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AINodeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAINodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AINodeComponent");

	return Clss;
}


// AINodeComponent GbxAI.Default__AINodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAINodeComponent* UAINodeComponent::GetDefaultObj()
{
	static class UAINodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAINodeComponent*>(UAINodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AINodeComponent.SelectNextNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAINodeComponent::SelectNextNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "SelectNextNode");

	Params::UAINodeComponent_SelectNextNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeComponent.HasLinkTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAINodeComponent::HasLinkTo(class AActor* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "HasLinkTo");

	Params::UAINodeComponent_HasLinkTo_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeComponent.HasLinkFrom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAINodeComponent::HasLinkFrom(class AActor* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "HasLinkFrom");

	Params::UAINodeComponent_HasLinkFrom_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeComponent.HasArrived
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Error                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAINodeComponent::HasArrived(const struct FVector& Point, float Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "HasArrived");

	Params::UAINodeComponent_HasArrived_Params Parms{};

	Parms.Point = Point;
	Parms.Error = Error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeComponent.GetLinkedNodeNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAINodeComponent::GetLinkedNodeNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "GetLinkedNodeNum");

	Params::UAINodeComponent_GetLinkedNodeNum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeComponent.GetLinkedNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              I                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAINodeComponent::GetLinkedNode(int32 I)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "GetLinkedNode");

	Params::UAINodeComponent_GetLinkedNode_Params Parms{};

	Parms.I = I;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AINodeComponent.CreateLinkTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Weight                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAINodeComponent::CreateLinkTo(class AActor* Node, float Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "CreateLinkTo");

	Params::UAINodeComponent_CreateLinkTo_Params Parms{};

	Parms.Node = Node;
	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AINodeComponent.BreakLinkTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Node                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAINodeComponent::BreakLinkTo(class AActor* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AINodeComponent", "BreakLinkTo");

	Params::UAINodeComponent_BreakLinkTo_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIPlanData
// (None)

class UClass* UAIPlanData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIPlanData");

	return Clss;
}


// AIPlanData GbxAI.Default__AIPlanData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIPlanData* UAIPlanData::GetDefaultObj()
{
	static class UAIPlanData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIPlanData*>(UAIPlanData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AISense_Proximity
// (None)

class UClass* UAISense_Proximity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Proximity");

	return Clss;
}


// AISense_Proximity GbxAI.Default__AISense_Proximity
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Proximity* UAISense_Proximity::GetDefaultObj()
{
	static class UAISense_Proximity* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Proximity*>(UAISense_Proximity::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AISense_Threat
// (None)

class UClass* UAISense_Threat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISense_Threat");

	return Clss;
}


// AISense_Threat GbxAI.Default__AISense_Threat
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISense_Threat* UAISense_Threat::GetDefaultObj()
{
	static class UAISense_Threat* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISense_Threat*>(UAISense_Threat::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AISenseConfig_Proximity
// (None)

class UClass* UAISenseConfig_Proximity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Proximity");

	return Clss;
}


// AISenseConfig_Proximity GbxAI.Default__AISenseConfig_Proximity
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Proximity* UAISenseConfig_Proximity::GetDefaultObj()
{
	static class UAISenseConfig_Proximity* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Proximity*>(UAISenseConfig_Proximity::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AISenseConfig_Threat
// (None)

class UClass* UAISenseConfig_Threat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseConfig_Threat");

	return Clss;
}


// AISenseConfig_Threat GbxAI.Default__AISenseConfig_Threat
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseConfig_Threat* UAISenseConfig_Threat::GetDefaultObj()
{
	static class UAISenseConfig_Threat* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseConfig_Threat*>(UAISenseConfig_Threat::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIStanceData
// (None)

class UClass* UAIStanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIStanceData");

	return Clss;
}


// AIStanceData GbxAI.Default__AIStanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIStanceData* UAIStanceData::GetDefaultObj()
{
	static class UAIStanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIStanceData*>(UAIStanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AITargetingBlueprintLibrary
// (None)

class UClass* UAITargetingBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITargetingBlueprintLibrary");

	return Clss;
}


// AITargetingBlueprintLibrary GbxAI.Default__AITargetingBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAITargetingBlueprintLibrary* UAITargetingBlueprintLibrary::GetDefaultObj()
{
	static class UAITargetingBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITargetingBlueprintLibrary*>(UAITargetingBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetActorInfo            TargetInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAITargetingBlueprintLibrary::IsThreatenedByInfo(class AActor* AIActor, struct FTargetActorInfo& TargetInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "IsThreatenedByInfo");

	Params::UAITargetingBlueprintLibrary_IsThreatenedByInfo_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.TargetInfo = TargetInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAITargetingBlueprintLibrary::IsThreatenedBy(class AActor* AIActor, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "IsThreatenedBy");

	Params::UAITargetingBlueprintLibrary_IsThreatenedBy_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo            TargetInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>        Sense                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAITargetingBlueprintLibrary::GetTargetSenseAge(struct FTargetActorInfo& TargetInfo, TSubclassOf<class UAISense> Sense)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "GetTargetSenseAge");

	Params::UAITargetingBlueprintLibrary_GetTargetSenseAge_Params Parms{};

	Parms.TargetInfo = TargetInfo;
	Parms.Sense = Sense;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAITargetingBlueprintLibrary::GetNumTargetsInRange(class AActor* AIActor, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "GetNumTargetsInRange");

	Params::UAITargetingBlueprintLibrary_GetNumTargetsInRange_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Socket                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAITargetingBlueprintLibrary::GetBestKnownLocation(class AActor* AIActor, class AActor* TargetActor, class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "GetBestKnownLocation");

	Params::UAITargetingBlueprintLibrary_GetBestKnownLocation_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.TargetActor = TargetActor;
	Parms.Socket = Socket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GroupDistance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Result                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAITargetingBlueprintLibrary::CalcTargetGroupLocation(class AActor* AIActor, float GroupDistance, struct FVector* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "CalcTargetGroupLocation");

	Params::UAITargetingBlueprintLibrary_CalcTargetGroupLocation_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.GroupDistance = GroupDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoostName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAITargetScoringBoost   ScoringBoost                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationInSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::ApplyTargetScoringBoost(class AActor* TargetActor, class FName BoostName, enum class EAITargetScoringBoost ScoringBoost, float DurationInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "ApplyTargetScoringBoost");

	Params::UAITargetingBlueprintLibrary_ApplyTargetScoringBoost_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.BoostName = BoostName;
	Parms.ScoringBoost = ScoringBoost;
	Parms.DurationInSeconds = DurationInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGbxBlackboardKeySelector   Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              TargetIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::AISetTargetInBlackboard(class AActor* AIActor, struct FGbxBlackboardKeySelector& Key, int32 TargetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AISetTargetInBlackboard");

	Params::UAITargetingBlueprintLibrary_AISetTargetInBlackboard_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.Key = Key;
	Parms.TargetIndex = TargetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::AISetScriptedTarget(class AActor* AIActor, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AISetScriptedTarget");

	Params::UAITargetingBlueprintLibrary_AISetScriptedTarget_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::AISendCommunication(class AActor* AIActor, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AISendCommunication");

	Params::UAITargetingBlueprintLibrary_AISendCommunication_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      AITarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>        SenseType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StimulusLocation                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::AIProvokeSpecificSense(class AActor* AITarget, class AActor* Source, TSubclassOf<class UAISense> SenseType, const struct FVector& StimulusLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AIProvokeSpecificSense");

	Params::UAITargetingBlueprintLibrary_AIProvokeSpecificSense_Params Parms{};

	Parms.AITarget = AITarget;
	Parms.Source = Source;
	Parms.SenseType = SenseType;
	Parms.StimulusLocation = StimulusLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AIProvoke
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AITarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::AIProvoke(class AActor* AITarget, class AActor* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AIProvoke");

	Params::UAITargetingBlueprintLibrary_AIProvoke_Params Parms{};

	Parms.AITarget = AITarget;
	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AITarget                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAITargetingBlueprintLibrary::AIPlayerProvoke(class AActor* AITarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AIPlayerProvoke");

	Params::UAITargetingBlueprintLibrary_AIPlayerProvoke_Params Parms{};

	Parms.AITarget = AITarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAITargetingBlueprintLibrary::AIGetScriptedTarget(class AActor* AIActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AIGetScriptedTarget");

	Params::UAITargetingBlueprintLibrary_AIGetScriptedTarget_Params Parms{};

	Parms.AIActor = AIActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinSenseAgeDelta                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAITargetingBlueprintLibrary::AICanCommunicate(class AActor* AIActor, float Radius, float MinSenseAgeDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITargetingBlueprintLibrary", "AICanCommunicate");

	Params::UAITargetingBlueprintLibrary_AICanCommunicate_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.Radius = Radius;
	Parms.MinSenseAgeDelta = MinSenseAgeDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AITask_UseLookAtPoint
// (None)

class UClass* UAITask_UseLookAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UseLookAtPoint");

	return Clss;
}


// AITask_UseLookAtPoint GbxAI.Default__AITask_UseLookAtPoint
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UseLookAtPoint* UAITask_UseLookAtPoint::GetDefaultObj()
{
	static class UAITask_UseLookAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UseLookAtPoint*>(UAITask_UseLookAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AITask_UsePerch
// (None)

class UClass* UAITask_UsePerch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UsePerch");

	return Clss;
}


// AITask_UsePerch GbxAI.Default__AITask_UsePerch
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UsePerch* UAITask_UsePerch::GetDefaultObj()
{
	static class UAITask_UsePerch* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UsePerch*>(UAITask_UsePerch::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AITask_UseSmartObject
// (None)

class UClass* UAITask_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UseSmartObject");

	return Clss;
}


// AITask_UseSmartObject GbxAI.Default__AITask_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UseSmartObject* UAITask_UseSmartObject::GetDefaultObj()
{
	static class UAITask_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UseSmartObject*>(UAITask_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AITicketDataAsset
// (None)

class UClass* UAITicketDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITicketDataAsset");

	return Clss;
}


// AITicketDataAsset GbxAI.Default__AITicketDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAITicketDataAsset* UAITicketDataAsset::GetDefaultObj()
{
	static class UAITicketDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITicketDataAsset*>(UAITicketDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIUsableComponent
// (None)

class UClass* UAIUsableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIUsableComponent");

	return Clss;
}


// AIUsableComponent GbxAI.Default__AIUsableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIUsableComponent* UAIUsableComponent::GetDefaultObj()
{
	static class UAIUsableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIUsableComponent*>(UAIUsableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIUseComponent
// (None)

class UClass* UAIUseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIUseComponent");

	return Clss;
}


// AIUseComponent GbxAI.Default__AIUseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIUseComponent* UAIUseComponent::GetDefaultObj()
{
	static class UAIUseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIUseComponent*>(UAIUseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIUseComponent.StopUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSucceeded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIUseComponent::StopUse(bool bSucceeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIUseComponent", "StopUse");

	Params::UAIUseComponent_StopUse_Params Parms{};

	Parms.bSucceeded = bSucceeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIUseComponent.RequestUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionName                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAbortExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUntilInterrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIUseComponent::RequestUse(class AActor* SmartObject, const struct FGameplayTag& ActionName, bool bAbortExisting, bool bUntilInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIUseComponent", "RequestUse");

	Params::UAIUseComponent_RequestUse_Params Parms{};

	Parms.SmartObject = SmartObject;
	Parms.ActionName = ActionName;
	Parms.bAbortExisting = bAbortExisting;
	Parms.bUntilInterrupted = bUntilInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIUseComponent.OnUseCompleted
// (Final, Native, Private)
// Parameters:
// class UAITask*                     Task                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESmartObjectTaskResult  Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIUseComponent::OnUseCompleted(class UAITask* Task, enum class ESmartObjectTaskResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIUseComponent", "OnUseCompleted");

	Params::UAIUseComponent_OnUseCompleted_Params Parms{};

	Parms.Task = Task;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.AIUseComponent.GetCurrentObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAIUseComponent::GetCurrentObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIUseComponent", "GetCurrentObject");

	Params::UAIUseComponent_GetCurrentObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIUseSlotComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAIUseSlotComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIUseSlotComponent");

	return Clss;
}


// AIUseSlotComponent GbxAI.Default__AIUseSlotComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIUseSlotComponent* UAIUseSlotComponent::GetDefaultObj()
{
	static class UAIUseSlotComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIUseSlotComponent*>(UAIUseSlotComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// TArray<class FName>                Array                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIUseSlotComponent::GetAvailableSocketNames(TArray<class FName>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIUseSlotComponent", "GetAvailableSocketNames");

	Params::UAIUseSlotComponent_GetAvailableSocketNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Class GbxAI.AIWeaponUserComponent
// (None)

class UClass* UAIWeaponUserComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIWeaponUserComponent");

	return Clss;
}


// AIWeaponUserComponent GbxAI.Default__AIWeaponUserComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIWeaponUserComponent* UAIWeaponUserComponent::GetDefaultObj()
{
	static class UAIWeaponUserComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIWeaponUserComponent*>(UAIWeaponUserComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.AIWeaponUserComponent.WantsToFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIWeaponUserComponent::WantsToFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIWeaponUserComponent", "WantsToFire");

	Params::UAIWeaponUserComponent_WantsToFire_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.AIWeaponUserComponent.OnWeaponUsed
// (Final, Native, Private)
// Parameters:

void UAIWeaponUserComponent::OnWeaponUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIWeaponUserComponent", "OnWeaponUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.AnimNotify_SmartObject
// (None)

class UClass* UAnimNotify_SmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_SmartObject");

	return Clss;
}


// AnimNotify_SmartObject GbxAI.Default__AnimNotify_SmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_SmartObject* UAnimNotify_SmartObject::GetDefaultObj()
{
	static class UAnimNotify_SmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_SmartObject*>(UAnimNotify_SmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AnimNotify_UseSmartAction
// (None)

class UClass* UAnimNotify_UseSmartAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_UseSmartAction");

	return Clss;
}


// AnimNotify_UseSmartAction GbxAI.Default__AnimNotify_UseSmartAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_UseSmartAction* UAnimNotify_UseSmartAction::GetDefaultObj()
{
	static class UAnimNotify_UseSmartAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_UseSmartAction*>(UAnimNotify_UseSmartAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BlackboardKeyType_SmartAction
// (None)

class UClass* UBlackboardKeyType_SmartAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyType_SmartAction");

	return Clss;
}


// BlackboardKeyType_SmartAction GbxAI.Default__BlackboardKeyType_SmartAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyType_SmartAction* UBlackboardKeyType_SmartAction::GetDefaultObj()
{
	static class UBlackboardKeyType_SmartAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyType_SmartAction*>(UBlackboardKeyType_SmartAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTComposite_Random
// (None)

class UClass* UBTComposite_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTComposite_Random");

	return Clss;
}


// BTComposite_Random GbxAI.Default__BTComposite_Random
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTComposite_Random* UBTComposite_Random::GetDefaultObj()
{
	static class UBTComposite_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTComposite_Random*>(UBTComposite_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTDecorator_AIAction
// (None)

class UClass* UBTDecorator_AIAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_AIAction");

	return Clss;
}


// BTDecorator_AIAction GbxAI.Default__BTDecorator_AIAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_AIAction* UBTDecorator_AIAction::GetDefaultObj()
{
	static class UBTDecorator_AIAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_AIAction*>(UBTDecorator_AIAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.UBTDecorator_AITicket
// (None)

class UClass* UUBTDecorator_AITicket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UBTDecorator_AITicket");

	return Clss;
}


// UBTDecorator_AITicket GbxAI.Default__UBTDecorator_AITicket
// (Public, ClassDefaultObject, ArchetypeObject)

class UUBTDecorator_AITicket* UUBTDecorator_AITicket::GetDefaultObj()
{
	static class UUBTDecorator_AITicket* Default = nullptr;

	if (!Default)
		Default = static_cast<UUBTDecorator_AITicket*>(UUBTDecorator_AITicket::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTDecorator_GbxLoop
// (None)

class UClass* UBTDecorator_GbxLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_GbxLoop");

	return Clss;
}


// BTDecorator_GbxLoop GbxAI.Default__BTDecorator_GbxLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_GbxLoop* UBTDecorator_GbxLoop::GetDefaultObj()
{
	static class UBTDecorator_GbxLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_GbxLoop*>(UBTDecorator_GbxLoop::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTDecorator_IsInRange
// (None)

class UClass* UBTDecorator_IsInRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_IsInRange");

	return Clss;
}


// BTDecorator_IsInRange GbxAI.Default__BTDecorator_IsInRange
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTDecorator_IsInRange* UBTDecorator_IsInRange::GetDefaultObj()
{
	static class UBTDecorator_IsInRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_IsInRange*>(UBTDecorator_IsInRange::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTService_GameFocus
// (None)

class UClass* UBTService_GameFocus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_GameFocus");

	return Clss;
}


// BTService_GameFocus GbxAI.Default__BTService_GameFocus
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService_GameFocus* UBTService_GameFocus::GetDefaultObj()
{
	static class UBTService_GameFocus* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_GameFocus*>(UBTService_GameFocus::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTService_GbxRunEQS
// (None)

class UClass* UBTService_GbxRunEQS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTService_GbxRunEQS");

	return Clss;
}


// BTService_GbxRunEQS GbxAI.Default__BTService_GbxRunEQS
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTService_GbxRunEQS* UBTService_GbxRunEQS::GetDefaultObj()
{
	static class UBTService_GbxRunEQS* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTService_GbxRunEQS*>(UBTService_GbxRunEQS::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_AIAction_Custom
// (None)

class UClass* UBTTask_AIAction_Custom::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AIAction_Custom");

	return Clss;
}


// BTTask_AIAction_Custom GbxAI.Default__BTTask_AIAction_Custom
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_AIAction_Custom* UBTTask_AIAction_Custom::GetDefaultObj()
{
	static class UBTTask_AIAction_Custom* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AIAction_Custom*>(UBTTask_AIAction_Custom::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_LookAt
// (None)

class UClass* UBTTask_LookAt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_LookAt");

	return Clss;
}


// BTTask_LookAt GbxAI.Default__BTTask_LookAt
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_LookAt* UBTTask_LookAt::GetDefaultObj()
{
	static class UBTTask_LookAt* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_LookAt*>(UBTTask_LookAt::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_MoveToComponent
// (None)

class UClass* UBTTask_MoveToComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_MoveToComponent");

	return Clss;
}


// BTTask_MoveToComponent GbxAI.Default__BTTask_MoveToComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_MoveToComponent* UBTTask_MoveToComponent::GetDefaultObj()
{
	static class UBTTask_MoveToComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_MoveToComponent*>(UBTTask_MoveToComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_MoveToNode
// (None)

class UClass* UBTTask_MoveToNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_MoveToNode");

	return Clss;
}


// BTTask_MoveToNode GbxAI.Default__BTTask_MoveToNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_MoveToNode* UBTTask_MoveToNode::GetDefaultObj()
{
	static class UBTTask_MoveToNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_MoveToNode*>(UBTTask_MoveToNode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_UseCover
// (None)

class UClass* UBTTask_UseCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_UseCover");

	return Clss;
}


// BTTask_UseCover GbxAI.Default__BTTask_UseCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_UseCover* UBTTask_UseCover::GetDefaultObj()
{
	static class UBTTask_UseCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_UseCover*>(UBTTask_UseCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.BTTask_UseSmartObject
// (None)

class UClass* UBTTask_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_UseSmartObject");

	return Clss;
}


// BTTask_UseSmartObject GbxAI.Default__BTTask_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_UseSmartObject* UBTTask_UseSmartObject::GetDefaultObj()
{
	static class UBTTask_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_UseSmartObject*>(UBTTask_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.Cover
// (Actor)

class UClass* ACover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cover");

	return Clss;
}


// Cover GbxAI.Default__Cover
// (Public, ClassDefaultObject, ArchetypeObject)

class ACover* ACover::GetDefaultObj()
{
	static class ACover* Default = nullptr;

	if (!Default)
		Default = static_cast<ACover*>(ACover::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.Cover.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACover::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cover", "SetEnabled");

	Params::ACover_SetEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.Cover.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACover::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cover", "IsEnabled");

	Params::ACover_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.CoverSlotComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UCoverSlotComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverSlotComponent");

	return Clss;
}


// CoverSlotComponent GbxAI.Default__CoverSlotComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoverSlotComponent* UCoverSlotComponent::GetDefaultObj()
{
	static class UCoverSlotComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverSlotComponent*>(UCoverSlotComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.CoverSlotComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCoverSlotComponent::SetEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverSlotComponent", "SetEnabled");

	Params::UCoverSlotComponent_SetEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.CoverSlotComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCoverSlotComponent::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverSlotComponent", "IsEnabled");

	Params::UCoverSlotComponent_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.CoverSlotData
// (None)

class UClass* UCoverSlotData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverSlotData");

	return Clss;
}


// CoverSlotData GbxAI.Default__CoverSlotData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoverSlotData* UCoverSlotData::GetDefaultObj()
{
	static class UCoverSlotData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverSlotData*>(UCoverSlotData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.CoverStyleData
// (None)

class UClass* UCoverStyleData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverStyleData");

	return Clss;
}


// CoverStyleData GbxAI.Default__CoverStyleData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoverStyleData* UCoverStyleData::GetDefaultObj()
{
	static class UCoverStyleData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverStyleData*>(UCoverStyleData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCoverTransitionTable
// (None)

class UClass* UGbxCoverTransitionTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCoverTransitionTable");

	return Clss;
}


// GbxCoverTransitionTable GbxAI.Default__GbxCoverTransitionTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCoverTransitionTable* UGbxCoverTransitionTable::GetDefaultObj()
{
	static class UGbxCoverTransitionTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCoverTransitionTable*>(UGbxCoverTransitionTable::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.CoverUserComponent
// (None)

class UClass* UCoverUserComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverUserComponent");

	return Clss;
}


// CoverUserComponent GbxAI.Default__CoverUserComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoverUserComponent* UCoverUserComponent::GetDefaultObj()
{
	static class UCoverUserComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverUserComponent*>(UCoverUserComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.CoverUserComponent.SetEnterTransitionTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCoverTransitionTable*    NewTable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCoverUserComponent::SetEnterTransitionTable(class UGbxCoverTransitionTable* NewTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverUserComponent", "SetEnterTransitionTable");

	Params::UCoverUserComponent_SetEnterTransitionTable_Params Parms{};

	Parms.NewTable = NewTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.CoverUserComponent.OnRep_ClientData
// (Final, Native, Private)
// Parameters:

void UCoverUserComponent::OnRep_ClientData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverUserComponent", "OnRep_ClientData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.CoverUserComponent.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCoverUserComponent::OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverUserComponent", "OnMovementModeChanged");

	Params::UCoverUserComponent_OnMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.CoverUserComponent.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCoverStyleData*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCoverStyleData* UCoverUserComponent::GetStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CoverUserComponent", "GetStyle");

	Params::UCoverUserComponent_GetStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.CoverViewData
// (None)

class UClass* UCoverViewData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoverViewData");

	return Clss;
}


// CoverViewData GbxAI.Default__CoverViewData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCoverViewData* UCoverViewData::GetDefaultObj()
{
	static class UCoverViewData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoverViewData*>(UCoverViewData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryContext_AllTargets
// (None)

class UClass* UEnvQueryContext_AllTargets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_AllTargets");

	return Clss;
}


// EnvQueryContext_AllTargets GbxAI.Default__EnvQueryContext_AllTargets
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_AllTargets* UEnvQueryContext_AllTargets::GetDefaultObj()
{
	static class UEnvQueryContext_AllTargets* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_AllTargets*>(UEnvQueryContext_AllTargets::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryContext_Friendlies
// (None)

class UClass* UEnvQueryContext_Friendlies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_Friendlies");

	return Clss;
}


// EnvQueryContext_Friendlies GbxAI.Default__EnvQueryContext_Friendlies
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_Friendlies* UEnvQueryContext_Friendlies::GetDefaultObj()
{
	static class UEnvQueryContext_Friendlies* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_Friendlies*>(UEnvQueryContext_Friendlies::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryContext_Target
// (None)

class UClass* UEnvQueryContext_Target::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_Target");

	return Clss;
}


// EnvQueryContext_Target GbxAI.Default__EnvQueryContext_Target
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_Target* UEnvQueryContext_Target::GetDefaultObj()
{
	static class UEnvQueryContext_Target* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_Target*>(UEnvQueryContext_Target::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryContext_TargetActualLocation
// (None)

class UClass* UEnvQueryContext_TargetActualLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_TargetActualLocation");

	return Clss;
}


// EnvQueryContext_TargetActualLocation GbxAI.Default__EnvQueryContext_TargetActualLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryContext_TargetActualLocation* UEnvQueryContext_TargetActualLocation::GetDefaultObj()
{
	static class UEnvQueryContext_TargetActualLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_TargetActualLocation*>(UEnvQueryContext_TargetActualLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_AINodes
// (None)

class UClass* UEnvQueryGenerator_AINodes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_AINodes");

	return Clss;
}


// EnvQueryGenerator_AINodes GbxAI.Default__EnvQueryGenerator_AINodes
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_AINodes* UEnvQueryGenerator_AINodes::GetDefaultObj()
{
	static class UEnvQueryGenerator_AINodes* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_AINodes*>(UEnvQueryGenerator_AINodes::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_Cover
// (None)

class UClass* UEnvQueryGenerator_Cover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Cover");

	return Clss;
}


// EnvQueryGenerator_Cover GbxAI.Default__EnvQueryGenerator_Cover
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Cover* UEnvQueryGenerator_Cover::GetDefaultObj()
{
	static class UEnvQueryGenerator_Cover* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Cover*>(UEnvQueryGenerator_Cover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_DynamicPoints
// (None)

class UClass* UEnvQueryGenerator_DynamicPoints::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_DynamicPoints");

	return Clss;
}


// EnvQueryGenerator_DynamicPoints GbxAI.Default__EnvQueryGenerator_DynamicPoints
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_DynamicPoints* UEnvQueryGenerator_DynamicPoints::GetDefaultObj()
{
	static class UEnvQueryGenerator_DynamicPoints* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_DynamicPoints*>(UEnvQueryGenerator_DynamicPoints::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_FindLookAtPoint
// (None)

class UClass* UEnvQueryGenerator_FindLookAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_FindLookAtPoint");

	return Clss;
}


// EnvQueryGenerator_FindLookAtPoint GbxAI.Default__EnvQueryGenerator_FindLookAtPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_FindLookAtPoint* UEnvQueryGenerator_FindLookAtPoint::GetDefaultObj()
{
	static class UEnvQueryGenerator_FindLookAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_FindLookAtPoint*>(UEnvQueryGenerator_FindLookAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_FindPerch
// (None)

class UClass* UEnvQueryGenerator_FindPerch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_FindPerch");

	return Clss;
}


// EnvQueryGenerator_FindPerch GbxAI.Default__EnvQueryGenerator_FindPerch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_FindPerch* UEnvQueryGenerator_FindPerch::GetDefaultObj()
{
	static class UEnvQueryGenerator_FindPerch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_FindPerch*>(UEnvQueryGenerator_FindPerch::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_SmartAction
// (None)

class UClass* UEnvQueryGenerator_SmartAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_SmartAction");

	return Clss;
}


// EnvQueryGenerator_SmartAction GbxAI.Default__EnvQueryGenerator_SmartAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_SmartAction* UEnvQueryGenerator_SmartAction::GetDefaultObj()
{
	static class UEnvQueryGenerator_SmartAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_SmartAction*>(UEnvQueryGenerator_SmartAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_SmartGrid
// (None)

class UClass* UEnvQueryGenerator_SmartGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_SmartGrid");

	return Clss;
}


// EnvQueryGenerator_SmartGrid GbxAI.Default__EnvQueryGenerator_SmartGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_SmartGrid* UEnvQueryGenerator_SmartGrid::GetDefaultObj()
{
	static class UEnvQueryGenerator_SmartGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_SmartGrid*>(UEnvQueryGenerator_SmartGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryGenerator_Territory
// (None)

class UClass* UEnvQueryGenerator_Territory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryGenerator_Territory");

	return Clss;
}


// EnvQueryGenerator_Territory GbxAI.Default__EnvQueryGenerator_Territory
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryGenerator_Territory* UEnvQueryGenerator_Territory::GetDefaultObj()
{
	static class UEnvQueryGenerator_Territory* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryGenerator_Territory*>(UEnvQueryGenerator_Territory::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryItemType_SmartAction
// (None)

class UClass* UEnvQueryItemType_SmartAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryItemType_SmartAction");

	return Clss;
}


// EnvQueryItemType_SmartAction GbxAI.Default__EnvQueryItemType_SmartAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryItemType_SmartAction* UEnvQueryItemType_SmartAction::GetDefaultObj()
{
	static class UEnvQueryItemType_SmartAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryItemType_SmartAction*>(UEnvQueryItemType_SmartAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_ActorHealth
// (None)

class UClass* UEnvQueryTest_ActorHealth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_ActorHealth");

	return Clss;
}


// EnvQueryTest_ActorHealth GbxAI.Default__EnvQueryTest_ActorHealth
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_ActorHealth* UEnvQueryTest_ActorHealth::GetDefaultObj()
{
	static class UEnvQueryTest_ActorHealth* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_ActorHealth*>(UEnvQueryTest_ActorHealth::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_AITicket
// (None)

class UClass* UEnvQueryTest_AITicket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_AITicket");

	return Clss;
}


// EnvQueryTest_AITicket GbxAI.Default__EnvQueryTest_AITicket
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_AITicket* UEnvQueryTest_AITicket::GetDefaultObj()
{
	static class UEnvQueryTest_AITicket* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_AITicket*>(UEnvQueryTest_AITicket::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_Angle
// (None)

class UClass* UEnvQueryTest_Angle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Angle");

	return Clss;
}


// EnvQueryTest_Angle GbxAI.Default__EnvQueryTest_Angle
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Angle* UEnvQueryTest_Angle::GetDefaultObj()
{
	static class UEnvQueryTest_Angle* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Angle*>(UEnvQueryTest_Angle::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_ArcTrace
// (None)

class UClass* UEnvQueryTest_ArcTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_ArcTrace");

	return Clss;
}


// EnvQueryTest_ArcTrace GbxAI.Default__EnvQueryTest_ArcTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_ArcTrace* UEnvQueryTest_ArcTrace::GetDefaultObj()
{
	static class UEnvQueryTest_ArcTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_ArcTrace*>(UEnvQueryTest_ArcTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_AttackerCountAgainstTarget
// (None)

class UClass* UEnvQueryTest_AttackerCountAgainstTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_AttackerCountAgainstTarget");

	return Clss;
}


// EnvQueryTest_AttackerCountAgainstTarget GbxAI.Default__EnvQueryTest_AttackerCountAgainstTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_AttackerCountAgainstTarget* UEnvQueryTest_AttackerCountAgainstTarget::GetDefaultObj()
{
	static class UEnvQueryTest_AttackerCountAgainstTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_AttackerCountAgainstTarget*>(UEnvQueryTest_AttackerCountAgainstTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_BlackboardKey
// (None)

class UClass* UEnvQueryTest_BlackboardKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_BlackboardKey");

	return Clss;
}


// EnvQueryTest_BlackboardKey GbxAI.Default__EnvQueryTest_BlackboardKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_BlackboardKey* UEnvQueryTest_BlackboardKey::GetDefaultObj()
{
	static class UEnvQueryTest_BlackboardKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_BlackboardKey*>(UEnvQueryTest_BlackboardKey::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_Boundary
// (None)

class UClass* UEnvQueryTest_Boundary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_Boundary");

	return Clss;
}


// EnvQueryTest_Boundary GbxAI.Default__EnvQueryTest_Boundary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_Boundary* UEnvQueryTest_Boundary::GetDefaultObj()
{
	static class UEnvQueryTest_Boundary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_Boundary*>(UEnvQueryTest_Boundary::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_CoverCurrent
// (None)

class UClass* UEnvQueryTest_CoverCurrent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_CoverCurrent");

	return Clss;
}


// EnvQueryTest_CoverCurrent GbxAI.Default__EnvQueryTest_CoverCurrent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_CoverCurrent* UEnvQueryTest_CoverCurrent::GetDefaultObj()
{
	static class UEnvQueryTest_CoverCurrent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_CoverCurrent*>(UEnvQueryTest_CoverCurrent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_CoverExposure
// (None)

class UClass* UEnvQueryTest_CoverExposure::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_CoverExposure");

	return Clss;
}


// EnvQueryTest_CoverExposure GbxAI.Default__EnvQueryTest_CoverExposure
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_CoverExposure* UEnvQueryTest_CoverExposure::GetDefaultObj()
{
	static class UEnvQueryTest_CoverExposure* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_CoverExposure*>(UEnvQueryTest_CoverExposure::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_CoverView
// (None)

class UClass* UEnvQueryTest_CoverView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_CoverView");

	return Clss;
}


// EnvQueryTest_CoverView GbxAI.Default__EnvQueryTest_CoverView
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_CoverView* UEnvQueryTest_CoverView::GetDefaultObj()
{
	static class UEnvQueryTest_CoverView* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_CoverView*>(UEnvQueryTest_CoverView::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_CurrentTarget
// (None)

class UClass* UEnvQueryTest_CurrentTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_CurrentTarget");

	return Clss;
}


// EnvQueryTest_CurrentTarget GbxAI.Default__EnvQueryTest_CurrentTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_CurrentTarget* UEnvQueryTest_CurrentTarget::GetDefaultObj()
{
	static class UEnvQueryTest_CurrentTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_CurrentTarget*>(UEnvQueryTest_CurrentTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_CustomScoringBoost
// (None)

class UClass* UEnvQueryTest_CustomScoringBoost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_CustomScoringBoost");

	return Clss;
}


// EnvQueryTest_CustomScoringBoost GbxAI.Default__EnvQueryTest_CustomScoringBoost
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_CustomScoringBoost* UEnvQueryTest_CustomScoringBoost::GetDefaultObj()
{
	static class UEnvQueryTest_CustomScoringBoost* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_CustomScoringBoost*>(UEnvQueryTest_CustomScoringBoost::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_DirectPath
// (None)

class UClass* UEnvQueryTest_DirectPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_DirectPath");

	return Clss;
}


// EnvQueryTest_DirectPath GbxAI.Default__EnvQueryTest_DirectPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_DirectPath* UEnvQueryTest_DirectPath::GetDefaultObj()
{
	static class UEnvQueryTest_DirectPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_DirectPath*>(UEnvQueryTest_DirectPath::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_GbxPath
// (None)

class UClass* UEnvQueryTest_GbxPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_GbxPath");

	return Clss;
}


// EnvQueryTest_GbxPath GbxAI.Default__EnvQueryTest_GbxPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_GbxPath* UEnvQueryTest_GbxPath::GetDefaultObj()
{
	static class UEnvQueryTest_GbxPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_GbxPath*>(UEnvQueryTest_GbxPath::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_IsInGodMode
// (None)

class UClass* UEnvQueryTest_IsInGodMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_IsInGodMode");

	return Clss;
}


// EnvQueryTest_IsInGodMode GbxAI.Default__EnvQueryTest_IsInGodMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_IsInGodMode* UEnvQueryTest_IsInGodMode::GetDefaultObj()
{
	static class UEnvQueryTest_IsInGodMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_IsInGodMode*>(UEnvQueryTest_IsInGodMode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_MyMasterIsAttackingTarget
// (None)

class UClass* UEnvQueryTest_MyMasterIsAttackingTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_MyMasterIsAttackingTarget");

	return Clss;
}


// EnvQueryTest_MyMasterIsAttackingTarget GbxAI.Default__EnvQueryTest_MyMasterIsAttackingTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_MyMasterIsAttackingTarget* UEnvQueryTest_MyMasterIsAttackingTarget::GetDefaultObj()
{
	static class UEnvQueryTest_MyMasterIsAttackingTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_MyMasterIsAttackingTarget*>(UEnvQueryTest_MyMasterIsAttackingTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_PetModifier
// (None)

class UClass* UEnvQueryTest_PetModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_PetModifier");

	return Clss;
}


// EnvQueryTest_PetModifier GbxAI.Default__EnvQueryTest_PetModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_PetModifier* UEnvQueryTest_PetModifier::GetDefaultObj()
{
	static class UEnvQueryTest_PetModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_PetModifier*>(UEnvQueryTest_PetModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_PetOwnerDistance
// (None)

class UClass* UEnvQueryTest_PetOwnerDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_PetOwnerDistance");

	return Clss;
}


// EnvQueryTest_PetOwnerDistance GbxAI.Default__EnvQueryTest_PetOwnerDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_PetOwnerDistance* UEnvQueryTest_PetOwnerDistance::GetDefaultObj()
{
	static class UEnvQueryTest_PetOwnerDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_PetOwnerDistance*>(UEnvQueryTest_PetOwnerDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_StandardCover
// (None)

class UClass* UEnvQueryTest_StandardCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_StandardCover");

	return Clss;
}


// EnvQueryTest_StandardCover GbxAI.Default__EnvQueryTest_StandardCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_StandardCover* UEnvQueryTest_StandardCover::GetDefaultObj()
{
	static class UEnvQueryTest_StandardCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_StandardCover*>(UEnvQueryTest_StandardCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TacticalCover
// (None)

class UClass* UEnvQueryTest_TacticalCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TacticalCover");

	return Clss;
}


// EnvQueryTest_TacticalCover GbxAI.Default__EnvQueryTest_TacticalCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TacticalCover* UEnvQueryTest_TacticalCover::GetDefaultObj()
{
	static class UEnvQueryTest_TacticalCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TacticalCover*>(UEnvQueryTest_TacticalCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetIsAttackingMyMaster
// (None)

class UClass* UEnvQueryTest_TargetIsAttackingMyMaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetIsAttackingMyMaster");

	return Clss;
}


// EnvQueryTest_TargetIsAttackingMyMaster GbxAI.Default__EnvQueryTest_TargetIsAttackingMyMaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetIsAttackingMyMaster* UEnvQueryTest_TargetIsAttackingMyMaster::GetDefaultObj()
{
	static class UEnvQueryTest_TargetIsAttackingMyMaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetIsAttackingMyMaster*>(UEnvQueryTest_TargetIsAttackingMyMaster::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetIsCloseToMyMaster
// (None)

class UClass* UEnvQueryTest_TargetIsCloseToMyMaster::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetIsCloseToMyMaster");

	return Clss;
}


// EnvQueryTest_TargetIsCloseToMyMaster GbxAI.Default__EnvQueryTest_TargetIsCloseToMyMaster
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetIsCloseToMyMaster* UEnvQueryTest_TargetIsCloseToMyMaster::GetDefaultObj()
{
	static class UEnvQueryTest_TargetIsCloseToMyMaster* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetIsCloseToMyMaster*>(UEnvQueryTest_TargetIsCloseToMyMaster::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetIsExposed
// (None)

class UClass* UEnvQueryTest_TargetIsExposed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetIsExposed");

	return Clss;
}


// EnvQueryTest_TargetIsExposed GbxAI.Default__EnvQueryTest_TargetIsExposed
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetIsExposed* UEnvQueryTest_TargetIsExposed::GetDefaultObj()
{
	static class UEnvQueryTest_TargetIsExposed* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetIsExposed*>(UEnvQueryTest_TargetIsExposed::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetIsHurtingMe
// (None)

class UClass* UEnvQueryTest_TargetIsHurtingMe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetIsHurtingMe");

	return Clss;
}


// EnvQueryTest_TargetIsHurtingMe GbxAI.Default__EnvQueryTest_TargetIsHurtingMe
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetIsHurtingMe* UEnvQueryTest_TargetIsHurtingMe::GetDefaultObj()
{
	static class UEnvQueryTest_TargetIsHurtingMe* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetIsHurtingMe*>(UEnvQueryTest_TargetIsHurtingMe::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetIsThreat
// (None)

class UClass* UEnvQueryTest_TargetIsThreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetIsThreat");

	return Clss;
}


// EnvQueryTest_TargetIsThreat GbxAI.Default__EnvQueryTest_TargetIsThreat
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetIsThreat* UEnvQueryTest_TargetIsThreat::GetDefaultObj()
{
	static class UEnvQueryTest_TargetIsThreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetIsThreat*>(UEnvQueryTest_TargetIsThreat::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetIsCompanionThreat
// (None)

class UClass* UEnvQueryTest_TargetIsCompanionThreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetIsCompanionThreat");

	return Clss;
}


// EnvQueryTest_TargetIsCompanionThreat GbxAI.Default__EnvQueryTest_TargetIsCompanionThreat
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetIsCompanionThreat* UEnvQueryTest_TargetIsCompanionThreat::GetDefaultObj()
{
	static class UEnvQueryTest_TargetIsCompanionThreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetIsCompanionThreat*>(UEnvQueryTest_TargetIsCompanionThreat::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_TargetSensed
// (None)

class UClass* UEnvQueryTest_TargetSensed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_TargetSensed");

	return Clss;
}


// EnvQueryTest_TargetSensed GbxAI.Default__EnvQueryTest_TargetSensed
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_TargetSensed* UEnvQueryTest_TargetSensed::GetDefaultObj()
{
	static class UEnvQueryTest_TargetSensed* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_TargetSensed*>(UEnvQueryTest_TargetSensed::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_UberTrace
// (None)

class UClass* UEnvQueryTest_UberTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_UberTrace");

	return Clss;
}


// EnvQueryTest_UberTrace GbxAI.Default__EnvQueryTest_UberTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_UberTrace* UEnvQueryTest_UberTrace::GetDefaultObj()
{
	static class UEnvQueryTest_UberTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_UberTrace*>(UEnvQueryTest_UberTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.EnvQueryTest_WithinTerritory
// (None)

class UClass* UEnvQueryTest_WithinTerritory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_WithinTerritory");

	return Clss;
}


// EnvQueryTest_WithinTerritory GbxAI.Default__EnvQueryTest_WithinTerritory
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_WithinTerritory* UEnvQueryTest_WithinTerritory::GetDefaultObj()
{
	static class UEnvQueryTest_WithinTerritory* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_WithinTerritory*>(UEnvQueryTest_WithinTerritory::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIResource_ScriptedAction
// (None)

class UClass* UAIResource_ScriptedAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIResource_ScriptedAction");

	return Clss;
}


// AIResource_ScriptedAction GbxAI.Default__AIResource_ScriptedAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIResource_ScriptedAction* UAIResource_ScriptedAction::GetDefaultObj()
{
	static class UAIResource_ScriptedAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIResource_ScriptedAction*>(UAIResource_ScriptedAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GameplayTask_ScriptedAction
// (None)

class UClass* UGameplayTask_ScriptedAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedAction");

	return Clss;
}


// GameplayTask_ScriptedAction GbxAI.Default__GameplayTask_ScriptedAction
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedAction* UGameplayTask_ScriptedAction::GetDefaultObj()
{
	static class UGameplayTask_ScriptedAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedAction*>(UGameplayTask_ScriptedAction::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class ASpawner*                    Spawner                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_ScriptedAction::OnActorSpawned(class ASpawner* Spawner, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedAction", "OnActorSpawned");

	Params::UGameplayTask_ScriptedAction_OnActorSpawned_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.GameplayTask_ScriptedCover
// (None)

class UClass* UGameplayTask_ScriptedCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedCover");

	return Clss;
}


// GameplayTask_ScriptedCover GbxAI.Default__GameplayTask_ScriptedCover
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedCover* UGameplayTask_ScriptedCover::GetDefaultObj()
{
	static class UGameplayTask_ScriptedCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedCover*>(UGameplayTask_ScriptedCover::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedCover::TaskScriptedCoverDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedCover", "TaskScriptedCoverDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_ScriptedCover::EndScriptedCover(class AActor* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedCover", "EndScriptedCover");

	Params::UGameplayTask_ScriptedCover_EndScriptedCover_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACover*                      Cover                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedCover* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedCover* UGameplayTask_ScriptedCover::BeginScriptedCover(class AActor* User, class ACover* Cover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedCover", "BeginScriptedCover");

	Params::UGameplayTask_ScriptedCover_BeginScriptedCover_Params Parms{};

	Parms.User = User;
	Parms.Cover = Cover;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_ScriptedFollow
// (None)

class UClass* UGameplayTask_ScriptedFollow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedFollow");

	return Clss;
}


// GameplayTask_ScriptedFollow GbxAI.Default__GameplayTask_ScriptedFollow
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedFollow* UGameplayTask_ScriptedFollow::GetDefaultObj()
{
	static class UGameplayTask_ScriptedFollow* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedFollow*>(UGameplayTask_ScriptedFollow::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedFollow::TaskScriptedMoveDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedFollow", "TaskScriptedMoveDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Follower                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorToFollow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedFollow*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedFollow* UGameplayTask_ScriptedFollow::BeginScriptedFollow(class AActor* Follower, class AActor* ActorToFollow, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedFollow", "BeginScriptedFollow");

	Params::UGameplayTask_ScriptedFollow_BeginScriptedFollow_Params Parms{};

	Parms.Follower = Follower;
	Parms.ActorToFollow = ActorToFollow;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_ScriptedLand
// (None)

class UClass* UGameplayTask_ScriptedLand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedLand");

	return Clss;
}


// GameplayTask_ScriptedLand GbxAI.Default__GameplayTask_ScriptedLand
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedLand* UGameplayTask_ScriptedLand::GetDefaultObj()
{
	static class UGameplayTask_ScriptedLand* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedLand*>(UGameplayTask_ScriptedLand::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedLand::TaskScriptedLandDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedLand", "TaskScriptedLandDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Lander                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedLand*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedLand* UGameplayTask_ScriptedLand::BeginScriptedLand(class AActor* Lander)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedLand", "BeginScriptedLand");

	Params::UGameplayTask_ScriptedLand_BeginScriptedLand_Params Parms{};

	Parms.Lander = Lander;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_ScriptedLead
// (None)

class UClass* UGameplayTask_ScriptedLead::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedLead");

	return Clss;
}


// GameplayTask_ScriptedLead GbxAI.Default__GameplayTask_ScriptedLead
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedLead* UGameplayTask_ScriptedLead::GetDefaultObj()
{
	static class UGameplayTask_ScriptedLead* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedLead*>(UGameplayTask_ScriptedLead::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedLead::TaskScriptedLeadDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedLead", "TaskScriptedLeadDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Leader                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DestAINode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorToLead                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedLead*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedLead* UGameplayTask_ScriptedLead::BeginScriptedLead(class AActor* Leader, class AActor* DestAINode, class AActor* ActorToLead, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedLead", "BeginScriptedLead");

	Params::UGameplayTask_ScriptedLead_BeginScriptedLead_Params Parms{};

	Parms.Leader = Leader;
	Parms.DestAINode = DestAINode;
	Parms.ActorToLead = ActorToLead;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_ScriptedMove
// (None)

class UClass* UGameplayTask_ScriptedMove::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedMove");

	return Clss;
}


// GameplayTask_ScriptedMove GbxAI.Default__GameplayTask_ScriptedMove
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::GetDefaultObj()
{
	static class UGameplayTask_ScriptedMove* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedMove*>(UGameplayTask_ScriptedMove::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedMove::TaskScriptedMoveDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMove", "TaskScriptedMoveDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      StartNode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalLookAtActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedMove*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::BeginScriptedMoveActor(class AAIController* Target, class AActor* StartNode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMove", "BeginScriptedMoveActor");

	Params::UGameplayTask_ScriptedMove_BeginScriptedMoveActor_Params Parms{};

	Parms.Target = Target;
	Parms.StartNode = StartNode;
	Parms.OptionalStance = OptionalStance;
	Parms.OptionalLookAtActor = OptionalLookAtActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      StartAINode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalLookAtActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedMove*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::BeginScriptedMove2(class AActor* User, class AActor* StartAINode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMove", "BeginScriptedMove2");

	Params::UGameplayTask_ScriptedMove_BeginScriptedMove2_Params Parms{};

	Parms.User = User;
	Parms.StartAINode = StartAINode;
	Parms.OptionalStance = OptionalStance;
	Parms.OptionalLookAtActor = OptionalLookAtActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      StartNode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScriptedActionRule     SuccessRule                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScriptedActionRule     FailRule                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddSpawned                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalLookAtActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleportOnFail                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedMove*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::BeginScriptedMove(class AActor* Target, class AActor* StartNode, enum class EScriptedActionRule SuccessRule, enum class EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, bool bTeleportOnFail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMove", "BeginScriptedMove");

	Params::UGameplayTask_ScriptedMove_BeginScriptedMove_Params Parms{};

	Parms.Target = Target;
	Parms.StartNode = StartNode;
	Parms.SuccessRule = SuccessRule;
	Parms.FailRule = FailRule;
	Parms.bAddSpawned = bAddSpawned;
	Parms.OptionalStance = OptionalStance;
	Parms.OptionalLookAtActor = OptionalLookAtActor;
	Parms.bTeleportOnFail = bTeleportOnFail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_ScriptedMoveSpline
// (None)

class UClass* UGameplayTask_ScriptedMoveSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedMoveSpline");

	return Clss;
}


// GameplayTask_ScriptedMoveSpline GbxAI.Default__GameplayTask_ScriptedMoveSpline
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedMoveSpline* UGameplayTask_ScriptedMoveSpline::GetDefaultObj()
{
	static class UGameplayTask_ScriptedMoveSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedMoveSpline*>(UGameplayTask_ScriptedMoveSpline::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      Targeted                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_ScriptedMoveSpline::TaskScriptedMoveDelegate__DelegateSignature(class AActor* Targeted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveSpline", "TaskScriptedMoveDelegate__DelegateSignature");

	Params::UGameplayTask_ScriptedMoveSpline_TaskScriptedMoveDelegate__DelegateSignature_Params Parms{};

	Parms.Targeted = Targeted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      StartSpline                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScriptedActionRule     SuccessRule                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScriptedActionRule     FailRule                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReverse                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddSpawned                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalLookAtActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIAction>       OptionalAIAction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedMoveSpline*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedMoveSpline* UGameplayTask_ScriptedMoveSpline::BeginScriptedMoveOnSpline(class AActor* Target, class AActor* StartSpline, enum class EScriptedActionRule SuccessRule, enum class EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, TSubclassOf<class UAIAction> OptionalAIAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveSpline", "BeginScriptedMoveOnSpline");

	Params::UGameplayTask_ScriptedMoveSpline_BeginScriptedMoveOnSpline_Params Parms{};

	Parms.Target = Target;
	Parms.StartSpline = StartSpline;
	Parms.SuccessRule = SuccessRule;
	Parms.FailRule = FailRule;
	Parms.Offset = Offset;
	Parms.bReverse = bReverse;
	Parms.bAddSpawned = bAddSpawned;
	Parms.OptionalStance = OptionalStance;
	Parms.OptionalLookAtActor = OptionalLookAtActor;
	Parms.OptionalAIAction = OptionalAIAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.AIAction_MoveToLevelSequence
// (None)

class UClass* UAIAction_MoveToLevelSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_MoveToLevelSequence");

	return Clss;
}


// AIAction_MoveToLevelSequence GbxAI.Default__AIAction_MoveToLevelSequence
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UAIAction_MoveToLevelSequence* UAIAction_MoveToLevelSequence::GetDefaultObj()
{
	static class UAIAction_MoveToLevelSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_MoveToLevelSequence*>(UAIAction_MoveToLevelSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GameplayTask_ScriptedMoveToLevelSequence
// (None)

class UClass* UGameplayTask_ScriptedMoveToLevelSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedMoveToLevelSequence");

	return Clss;
}


// GameplayTask_ScriptedMoveToLevelSequence GbxAI.Default__GameplayTask_ScriptedMoveToLevelSequence
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::GetDefaultObj()
{
	static class UGameplayTask_ScriptedMoveToLevelSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedMoveToLevelSequence*>(UGameplayTask_ScriptedMoveToLevelSequence::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "TaskScriptedMoveDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveActorsDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "TaskScriptedMoveActorsDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveActorDelegate__DelegateSignature(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "TaskScriptedMoveActorDelegate__DelegateSignature");

	Params::UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorDelegate__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped
// (Final, Native, Private)
// Parameters:

void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "OnLevelSequenceStopped");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished
// (Final, Native, Private)
// Parameters:

void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "OnLevelSequenceFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              Targets                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class AGbxLevelSequenceActor*      LevelSequenceActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStartSequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedMoveToLevelSequence*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::BeginScriptedMoveToLevelSequenceMulti(TArray<class AActor*>& Targets, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "BeginScriptedMoveToLevelSequenceMulti");

	Params::UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequenceMulti_Params Parms{};

	Parms.Targets = Targets;
	Parms.LevelSequenceActor = LevelSequenceActor;
	Parms.bStartSequence = bStartSequence;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGbxLevelSequenceActor*      LevelSequenceActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStartSequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedMoveToLevelSequence*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::BeginScriptedMoveToLevelSequence(class AActor* Target, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedMoveToLevelSequence", "BeginScriptedMoveToLevelSequence");

	Params::UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequence_Params Parms{};

	Parms.Target = Target;
	Parms.LevelSequenceActor = LevelSequenceActor;
	Parms.bStartSequence = bStartSequence;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_ScriptedRoute
// (None)

class UClass* UGameplayTask_ScriptedRoute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ScriptedRoute");

	return Clss;
}


// GameplayTask_ScriptedRoute GbxAI.Default__GameplayTask_ScriptedRoute
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::GetDefaultObj()
{
	static class UGameplayTask_ScriptedRoute* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ScriptedRoute*>(UGameplayTask_ScriptedRoute::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_ScriptedRoute::TaskScriptedMoveDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedRoute", "TaskScriptedMoveDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      FirstAINode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScriptedActionRule     SuccessRule                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScriptedActionRule     FailRule                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddSpawned                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedRoute* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::BeginScriptedRoute2(class AActor* Target, class AActor* FirstAINode, enum class EScriptedActionRule SuccessRule, enum class EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedRoute", "BeginScriptedRoute2");

	Params::UGameplayTask_ScriptedRoute_BeginScriptedRoute2_Params Parms{};

	Parms.Target = Target;
	Parms.FirstAINode = FirstAINode;
	Parms.SuccessRule = SuccessRule;
	Parms.FailRule = FailRule;
	Parms.bAddSpawned = bAddSpawned;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      FirstAINode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_ScriptedRoute* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::BeginScriptedRoute(class AActor* User, class AActor* FirstAINode, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ScriptedRoute", "BeginScriptedRoute");

	Params::UGameplayTask_ScriptedRoute_BeginScriptedRoute_Params Parms{};

	Parms.User = User;
	Parms.FirstAINode = FirstAINode;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GameplayTask_SmartAction
// (None)

class UClass* UGameplayTask_SmartAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_SmartAction");

	return Clss;
}


// GameplayTask_SmartAction GbxAI.Default__GameplayTask_SmartAction
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_SmartAction* UGameplayTask_SmartAction::GetDefaultObj()
{
	static class UGameplayTask_SmartAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_SmartAction*>(UGameplayTask_SmartAction::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GameplayTask_SmartAction.UnreserveCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SmartAction::UnreserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "UnreserveCallback");

	Params::UGameplayTask_SmartAction_UnreserveCallback_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_SmartAction.SuccessCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SmartAction::SuccessCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "SuccessCallback");

	Params::UGameplayTask_SmartAction_SuccessCallback_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_SmartAction.ReserveCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SmartAction::ReserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "ReserveCallback");

	Params::UGameplayTask_SmartAction_ReserveCallback_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_SmartAction.InterruptCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SmartAction::InterruptCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "InterruptCallback");

	Params::UGameplayTask_SmartAction_InterruptCallback_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_SmartAction.EndSmartAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SmartAction::EndSmartAction(class AActor* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "EndSmartAction");

	Params::UGameplayTask_SmartAction_EndSmartAction_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GameplayTask_SmartAction.BeginSmartAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayTask_SmartAction*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTask_SmartAction* UGameplayTask_SmartAction::BeginSmartAction(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "BeginSmartAction");

	Params::UGameplayTask_SmartAction_BeginSmartAction_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GameplayTask_SmartAction.BeginCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTask_SmartAction::BeginCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "BeginCallback");

	Params::UGameplayTask_SmartAction_BeginCallback_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_SmartAction::AITaskEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SmartAction", "AITaskEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxAI.GbxAction_CoverHitReaction
// (None)

class UClass* UGbxAction_CoverHitReaction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_CoverHitReaction");

	return Clss;
}


// GbxAction_CoverHitReaction GbxAI.Default__GbxAction_CoverHitReaction
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_CoverHitReaction* UGbxAction_CoverHitReaction::GetDefaultObj()
{
	static class UGbxAction_CoverHitReaction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_CoverHitReaction*>(UGbxAction_CoverHitReaction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxAction_CoverTransition
// (None)

class UClass* UGbxAction_CoverTransition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_CoverTransition");

	return Clss;
}


// GbxAction_CoverTransition GbxAI.Default__GbxAction_CoverTransition
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_CoverTransition* UGbxAction_CoverTransition::GetDefaultObj()
{
	static class UGbxAction_CoverTransition* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_CoverTransition*>(UGbxAction_CoverTransition::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxAction_Navigation
// (None)

class UClass* UGbxAction_Navigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_Navigation");

	return Clss;
}


// GbxAction_Navigation GbxAI.Default__GbxAction_Navigation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_Navigation* UGbxAction_Navigation::GetDefaultObj()
{
	static class UGbxAction_Navigation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_Navigation*>(UGbxAction_Navigation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAction_Navigation.K2_GetExitLocation
// (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGbxAction_Navigation::K2_GetExitLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAction_Navigation", "K2_GetExitLocation");

	Params::UGbxAction_Navigation_K2_GetExitLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation
// (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UGbxAction_Navigation::K2_GetEntryLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAction_Navigation", "K2_GetEntryLocation");

	Params::UGbxAction_Navigation_K2_GetEntryLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GbxAction_NavAnim
// (None)

class UClass* UGbxAction_NavAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_NavAnim");

	return Clss;
}


// GbxAction_NavAnim GbxAI.Default__GbxAction_NavAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_NavAnim* UGbxAction_NavAnim::GetDefaultObj()
{
	static class UGbxAction_NavAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_NavAnim*>(UGbxAction_NavAnim::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxAction_NavJump
// (None)

class UClass* UGbxAction_NavJump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_NavJump");

	return Clss;
}


// GbxAction_NavJump GbxAI.Default__GbxAction_NavJump
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_NavJump* UGbxAction_NavJump::GetDefaultObj()
{
	static class UGbxAction_NavJump* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_NavJump*>(UGbxAction_NavJump::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAction_NavJump.OnIdle
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAction_NavJump::OnIdle(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAction_NavJump", "OnIdle");

	Params::UGbxAction_NavJump_OnIdle_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GbxAI.GbxAction_NavJump.OnExit
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAction_NavJump::OnExit(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAction_NavJump", "OnExit");

	Params::UGbxAction_NavJump_OnExit_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxAI.GbxAction_NavHomingJump
// (None)

class UClass* UGbxAction_NavHomingJump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_NavHomingJump");

	return Clss;
}


// GbxAction_NavHomingJump GbxAI.Default__GbxAction_NavHomingJump
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_NavHomingJump* UGbxAction_NavHomingJump::GetDefaultObj()
{
	static class UGbxAction_NavHomingJump* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_NavHomingJump*>(UGbxAction_NavHomingJump::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxAction_NavLerp
// (None)

class UClass* UGbxAction_NavLerp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAction_NavLerp");

	return Clss;
}


// GbxAction_NavLerp GbxAI.Default__GbxAction_NavLerp
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAction_NavLerp* UGbxAction_NavLerp::GetDefaultObj()
{
	static class UGbxAction_NavLerp* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAction_NavLerp*>(UGbxAction_NavLerp::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAction_NavLerp.OnAlmostDone
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAction_NavLerp::OnAlmostDone(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAction_NavLerp", "OnAlmostDone");

	Params::UGbxAction_NavLerp_OnAlmostDone_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxAI.GbxAIBlueprintLibrary
// (None)

class UClass* UGbxAIBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAIBlueprintLibrary");

	return Clss;
}


// GbxAIBlueprintLibrary GbxAI.Default__GbxAIBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAIBlueprintLibrary* UGbxAIBlueprintLibrary::GetDefaultObj()
{
	static class UGbxAIBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAIBlueprintLibrary*>(UGbxAIBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPerceivable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAIBlueprintLibrary::SetPerceivableToAllAI(class AActor* Actor, bool bPerceivable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "SetPerceivableToAllAI");

	Params::UGbxAIBlueprintLibrary_SetPerceivableToAllAI_Params Parms{};

	Parms.Actor = Actor;
	Parms.bPerceivable = bPerceivable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHavokPathFindingData*       PathFindingData                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAIBlueprintLibrary::SetAIPathFindingData(class AActor* InActor, class UHavokPathFindingData* PathFindingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "SetAIPathFindingData");

	Params::UGbxAIBlueprintLibrary_SetAIPathFindingData_Params Parms{};

	Parms.InActor = InActor;
	Parms.PathFindingData = PathFindingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxNavAreaData*             NavAreaData                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAIBlueprintLibrary::SetAINavAreaData(class AActor* InActor, class UGbxNavAreaData* NavAreaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "SetAINavAreaData");

	Params::UGbxAIBlueprintLibrary_SetAINavAreaData_Params Parms{};

	Parms.InActor = InActor;
	Parms.NavAreaData = NavAreaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAIBlueprintLibrary::ResetTeamForAllAIChildren(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "ResetTeamForAllAIChildren");

	Params::UGbxAIBlueprintLibrary_ResetTeamForAllAIChildren_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAIBlueprintLibrary::IsActorThreatened(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "IsActorThreatened");

	Params::UGbxAIBlueprintLibrary_IsActorThreatened_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*        Blackboard                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAIBlueprintLibrary::GetValueAsActorAndLocation(class UBlackboardComponent* Blackboard, struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "GetValueAsActorAndLocation");

	Params::UGbxAIBlueprintLibrary_GetValueAsActorAndLocation_Params Parms{};

	Parms.Blackboard = Blackboard;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     BTNode                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAIBlueprintLibrary::GetBlackboardValueAsActorAndLocation(class UBTNode* BTNode, struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "GetBlackboardValueAsActorAndLocation");

	Params::UGbxAIBlueprintLibrary_GetBlackboardValueAsActorAndLocation_Params Parms{};

	Parms.BTNode = BTNode;
	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actor != nullptr)
		*Actor = Parms.Actor;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseWeapon                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAIBlueprintLibrary::AIScriptedUseWeapon(class AActor* Actor, bool bUseWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "AIScriptedUseWeapon");

	Params::UGbxAIBlueprintLibrary_AIScriptedUseWeapon_Params Parms{};

	Parms.Actor = Actor;
	Parms.bUseWeapon = bUseWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIAction>       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAIBlueprintLibrary::AIScriptedAction(class AActor* Actor, TSubclassOf<class UAIAction> Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "AIScriptedAction");

	Params::UGbxAIBlueprintLibrary_AIScriptedAction_Params Parms{};

	Parms.Actor = Actor;
	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      AIActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETerritoryType          Zone                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAIBlueprintLibrary::AIIsWithinTerritory(class AActor* AIActor, enum class ETerritoryType Zone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIBlueprintLibrary", "AIIsWithinTerritory");

	Params::UGbxAIBlueprintLibrary_AIIsWithinTerritory_Params Parms{};

	Parms.AIActor = AIActor;
	Parms.Zone = Zone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GbxAIController
// (Actor)

class UClass* AGbxAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAIController");

	return Clss;
}


// GbxAIController GbxAI.Default__GbxAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxAIController* AGbxAIController::GetDefaultObj()
{
	static class AGbxAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxAIController*>(AGbxAIController::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAIController.SetTerritory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTerritoryComponent*         Territory                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::SetTerritory(class UTerritoryComponent* Territory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "SetTerritory");

	Params::AGbxAIController_SetTerritory_Params Parms{};

	Parms.Territory = Territory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.SetTeam
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTeam*                       Team                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::SetTeam(class UTeam* Team)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "SetTeam");

	Params::AGbxAIController_SetTeam_Params Parms{};

	Parms.Team = Team;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.SetObstacleAvoidanceLock
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bDisable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Reason                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::SetObstacleAvoidanceLock(bool bDisable, class FName& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "SetObstacleAvoidanceLock");

	Params::AGbxAIController_SetObstacleAvoidanceLock_Params Parms{};

	Parms.bDisable = bDisable;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.ResetTerritoryToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AGbxAIController::ResetTerritoryToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "ResetTerritoryToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.OnMyWeaponHitSomething
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                      HitActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::OnMyWeaponHitSomething(class AActor* HitActor, const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "OnMyWeaponHitSomething");

	Params::AGbxAIController_OnMyWeaponHitSomething_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.HitLocation = HitLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.GetWeaponUserComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIWeaponUserComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIWeaponUserComponent* AGbxAIController::GetWeaponUserComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetWeaponUserComponent");

	Params::AGbxAIController_GetWeaponUserComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetUseComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIUseComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIUseComponent* AGbxAIController::GetUseComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetUseComponent");

	Params::AGbxAIController_GetUseComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetTerritory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTerritoryComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTerritoryComponent* AGbxAIController::GetTerritory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetTerritory");

	Params::AGbxAIController_GetTerritory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTeamComponent* AGbxAIController::GetTeamComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetTeamComponent");

	Params::AGbxAIController_GetTeamComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTeam* AGbxAIController::GetTeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetTeam");

	Params::AGbxAIController_GetTeam_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetTargetingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetingComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTargetingComponent* AGbxAIController::GetTargetingComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetTargetingComponent");

	Params::AGbxAIController_GetTargetingComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetableComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTargetableComponent* AGbxAIController::GetTargetableComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetTargetableComponent");

	Params::AGbxAIController_GetTargetableComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetSpawnerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USpawnerComponent* AGbxAIController::GetSpawnerComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetSpawnerComponent");

	Params::AGbxAIController_GetSpawnerComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetSpawner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASpawner*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpawner* AGbxAIController::GetSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetSpawner");

	Params::AGbxAIController_GetSpawner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIPerceptionComponent*      ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIPerceptionComponent* AGbxAIController::GetPerceptionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetPerceptionComponent");

	Params::AGbxAIController_GetPerceptionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetNumChildActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AGbxAIController::GetNumChildActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetNumChildActors");

	Params::AGbxAIController_GetNumChildActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetNavComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxNavComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxNavComponent* AGbxAIController::GetNavComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetNavComponent");

	Params::AGbxAIController_GetNavComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetMovementComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxCharacterMovementComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxCharacterMovementComponent* AGbxAIController::GetMovementComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetMovementComponent");

	Params::AGbxAIController_GetMovementComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetGroupState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIGroupState*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIGroupState* AGbxAIController::GetGroupState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetGroupState");

	Params::AGbxAIController_GetGroupState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetGbxCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGbxCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AGbxCharacter* AGbxAIController::GetGbxCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetGbxCharacter");

	Params::AGbxAIController_GetGbxCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetGbxActionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxActionComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxActionComponent* AGbxAIController::GetGbxActionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetGbxActionComponent");

	Params::AGbxAIController_GetGbxActionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetChildActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class AActor*> AGbxAIController::GetChildActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetChildActors");

	Params::AGbxAIController_GetChildActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetBlackboardComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardComponent* AGbxAIController::GetBlackboardComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetBlackboardComponent");

	Params::AGbxAIController_GetBlackboardComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetBlackboardAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardData* AGbxAIController::GetBlackboardAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetBlackboardAsset");

	Params::AGbxAIController_GetBlackboardAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetAIGroupSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AGbxAIController::GetAIGroupSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetAIGroupSize");

	Params::AGbxAIController_GetAIGroupSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.GetAIGroupList
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              AIGroupList                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIncludeSelf                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::GetAIGroupList(TArray<class AActor*>* AIGroupList, bool bIncludeSelf, float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetAIGroupList");

	Params::AGbxAIController_GetAIGroupList_Params Parms{};

	Parms.bIncludeSelf = bIncludeSelf;
	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AIGroupList != nullptr)
		*AIGroupList = std::move(Parms.AIGroupList);

}


// Function GbxAI.GbxAIController.GetAIActionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIActionComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIActionComponent* AGbxAIController::GetAIActionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "GetAIActionComponent");

	Params::AGbxAIController_GetAIActionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxAIController.ChildDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::ChildDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "ChildDestroyed");

	Params::AGbxAIController_ChildDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.CheckPauseWhileFalling
// (Final, Native, Private)
// Parameters:
// class ACharacter*                  TheCharacter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::CheckPauseWhileFalling(class ACharacter* TheCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "CheckPauseWhileFalling");

	Params::AGbxAIController_CheckPauseWhileFalling_Params Parms{};

	Parms.TheCharacter = TheCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.AddChildActors
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              NewChildren                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AGbxAIController::AddChildActors(TArray<class AActor*>& NewChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "AddChildActors");

	Params::AGbxAIController_AddChildActors_Params Parms{};

	Parms.NewChildren = NewChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.GbxAIController.AddChildActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      NewChild                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxAIController::AddChildActor(class AActor* NewChild)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAIController", "AddChildActor");

	Params::AGbxAIController_AddChildActor_Params Parms{};

	Parms.NewChild = NewChild;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.GbxAINavSystem
// (None)

class UClass* UGbxAINavSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAINavSystem");

	return Clss;
}


// GbxAINavSystem GbxAI.Default__GbxAINavSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAINavSystem* UGbxAINavSystem::GetDefaultObj()
{
	static class UGbxAINavSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAINavSystem*>(UGbxAINavSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAINavSystem.OnPostApplyLevelOffset
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class ULevel*                      InLevel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InOffset                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldShift                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAINavSystem::OnPostApplyLevelOffset(class ULevel* InLevel, class UWorld* InWorld, struct FVector& InOffset, bool bWorldShift)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAINavSystem", "OnPostApplyLevelOffset");

	Params::UGbxAINavSystem_OnPostApplyLevelOffset_Params Parms{};

	Parms.InLevel = InLevel;
	Parms.InWorld = InWorld;
	Parms.InOffset = InOffset;
	Parms.bWorldShift = bWorldShift;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.GbxAISystem
// (None)

class UClass* UGbxAISystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAISystem");

	return Clss;
}


// GbxAISystem GbxAI.Default__GbxAISystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAISystem* UGbxAISystem::GetDefaultObj()
{
	static class UGbxAISystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAISystem*>(UGbxAISystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxAnimStateManager_Cover
// (None)

class UClass* UGbxAnimStateManager_Cover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAnimStateManager_Cover");

	return Clss;
}


// GbxAnimStateManager_Cover GbxAI.Default__GbxAnimStateManager_Cover
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAnimStateManager_Cover* UGbxAnimStateManager_Cover::GetDefaultObj()
{
	static class UGbxAnimStateManager_Cover* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAnimStateManager_Cover*>(UGbxAnimStateManager_Cover::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay
// (Final, Native, Public)
// Parameters:

void UGbxAnimStateManager_Cover::Owner_PostBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAnimStateManager_Cover", "Owner_PostBeginPlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.GbxBehaviorTreeComponent
// (None)

class UClass* UGbxBehaviorTreeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxBehaviorTreeComponent");

	return Clss;
}


// GbxBehaviorTreeComponent GbxAI.Default__GbxBehaviorTreeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxBehaviorTreeComponent* UGbxBehaviorTreeComponent::GetDefaultObj()
{
	static class UGbxBehaviorTreeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxBehaviorTreeComponent*>(UGbxBehaviorTreeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_AI_IsInRange
// (None)

class UClass* UGbxCondition_AI_IsInRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_AI_IsInRange");

	return Clss;
}


// GbxCondition_AI_IsInRange GbxAI.Default__GbxCondition_AI_IsInRange
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_AI_IsInRange* UGbxCondition_AI_IsInRange::GetDefaultObj()
{
	static class UGbxCondition_AI_IsInRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_AI_IsInRange*>(UGbxCondition_AI_IsInRange::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_AI_IsMoving
// (None)

class UClass* UGbxCondition_AI_IsMoving::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_AI_IsMoving");

	return Clss;
}


// GbxCondition_AI_IsMoving GbxAI.Default__GbxCondition_AI_IsMoving
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_AI_IsMoving* UGbxCondition_AI_IsMoving::GetDefaultObj()
{
	static class UGbxCondition_AI_IsMoving* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_AI_IsMoving*>(UGbxCondition_AI_IsMoving::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_AIHasNearbyAllies
// (None)

class UClass* UGbxCondition_AIHasNearbyAllies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_AIHasNearbyAllies");

	return Clss;
}


// GbxCondition_AIHasNearbyAllies GbxAI.Default__GbxCondition_AIHasNearbyAllies
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_AIHasNearbyAllies* UGbxCondition_AIHasNearbyAllies::GetDefaultObj()
{
	static class UGbxCondition_AIHasNearbyAllies* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_AIHasNearbyAllies*>(UGbxCondition_AIHasNearbyAllies::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_BlackboardKey
// (None)

class UClass* UGbxCondition_BlackboardKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_BlackboardKey");

	return Clss;
}


// GbxCondition_BlackboardKey GbxAI.Default__GbxCondition_BlackboardKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_BlackboardKey* UGbxCondition_BlackboardKey::GetDefaultObj()
{
	static class UGbxCondition_BlackboardKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_BlackboardKey*>(UGbxCondition_BlackboardKey::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_CanFidgetNow
// (None)

class UClass* UGbxCondition_CanFidgetNow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_CanFidgetNow");

	return Clss;
}


// GbxCondition_CanFidgetNow GbxAI.Default__GbxCondition_CanFidgetNow
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_CanFidgetNow* UGbxCondition_CanFidgetNow::GetDefaultObj()
{
	static class UGbxCondition_CanFidgetNow* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_CanFidgetNow*>(UGbxCondition_CanFidgetNow::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_HasEnemyTarget
// (None)

class UClass* UGbxCondition_HasEnemyTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_HasEnemyTarget");

	return Clss;
}


// GbxCondition_HasEnemyTarget GbxAI.Default__GbxCondition_HasEnemyTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_HasEnemyTarget* UGbxCondition_HasEnemyTarget::GetDefaultObj()
{
	static class UGbxCondition_HasEnemyTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_HasEnemyTarget*>(UGbxCondition_HasEnemyTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_HasFriendlyTarget
// (None)

class UClass* UGbxCondition_HasFriendlyTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_HasFriendlyTarget");

	return Clss;
}


// GbxCondition_HasFriendlyTarget GbxAI.Default__GbxCondition_HasFriendlyTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_HasFriendlyTarget* UGbxCondition_HasFriendlyTarget::GetDefaultObj()
{
	static class UGbxCondition_HasFriendlyTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_HasFriendlyTarget*>(UGbxCondition_HasFriendlyTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_HasPlayerTarget
// (None)

class UClass* UGbxCondition_HasPlayerTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_HasPlayerTarget");

	return Clss;
}


// GbxCondition_HasPlayerTarget GbxAI.Default__GbxCondition_HasPlayerTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_HasPlayerTarget* UGbxCondition_HasPlayerTarget::GetDefaultObj()
{
	static class UGbxCondition_HasPlayerTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_HasPlayerTarget*>(UGbxCondition_HasPlayerTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_HasTargetsInRange
// (None)

class UClass* UGbxCondition_HasTargetsInRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_HasTargetsInRange");

	return Clss;
}


// GbxCondition_HasTargetsInRange GbxAI.Default__GbxCondition_HasTargetsInRange
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_HasTargetsInRange* UGbxCondition_HasTargetsInRange::GetDefaultObj()
{
	static class UGbxCondition_HasTargetsInRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_HasTargetsInRange*>(UGbxCondition_HasTargetsInRange::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_IsActorThreatened
// (None)

class UClass* UGbxCondition_IsActorThreatened::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_IsActorThreatened");

	return Clss;
}


// GbxCondition_IsActorThreatened GbxAI.Default__GbxCondition_IsActorThreatened
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_IsActorThreatened* UGbxCondition_IsActorThreatened::GetDefaultObj()
{
	static class UGbxCondition_IsActorThreatened* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_IsActorThreatened*>(UGbxCondition_IsActorThreatened::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_IsAttachedToOtherActor
// (None)

class UClass* UGbxCondition_IsAttachedToOtherActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_IsAttachedToOtherActor");

	return Clss;
}


// GbxCondition_IsAttachedToOtherActor GbxAI.Default__GbxCondition_IsAttachedToOtherActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_IsAttachedToOtherActor* UGbxCondition_IsAttachedToOtherActor::GetDefaultObj()
{
	static class UGbxCondition_IsAttachedToOtherActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_IsAttachedToOtherActor*>(UGbxCondition_IsAttachedToOtherActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_IsCloaked
// (None)

class UClass* UGbxCondition_IsCloaked::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_IsCloaked");

	return Clss;
}


// GbxCondition_IsCloaked GbxAI.Default__GbxCondition_IsCloaked
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_IsCloaked* UGbxCondition_IsCloaked::GetDefaultObj()
{
	static class UGbxCondition_IsCloaked* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_IsCloaked*>(UGbxCondition_IsCloaked::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_IsInCover
// (None)

class UClass* UGbxCondition_IsInCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_IsInCover");

	return Clss;
}


// GbxCondition_IsInCover GbxAI.Default__GbxCondition_IsInCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_IsInCover* UGbxCondition_IsInCover::GetDefaultObj()
{
	static class UGbxCondition_IsInCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_IsInCover*>(UGbxCondition_IsInCover::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxCondition_IsInStance
// (None)

class UClass* UGbxCondition_IsInStance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxCondition_IsInStance");

	return Clss;
}


// GbxCondition_IsInStance GbxAI.Default__GbxCondition_IsInStance
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxCondition_IsInStance* UGbxCondition_IsInStance::GetDefaultObj()
{
	static class UGbxCondition_IsInStance* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxCondition_IsInStance*>(UGbxCondition_IsInStance::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxEqsTestingPawn
// (Actor, Pawn)

class UClass* AGbxEqsTestingPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxEqsTestingPawn");

	return Clss;
}


// GbxEqsTestingPawn GbxAI.Default__GbxEqsTestingPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxEqsTestingPawn* AGbxEqsTestingPawn::GetDefaultObj()
{
	static class AGbxEqsTestingPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxEqsTestingPawn*>(AGbxEqsTestingPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.SmartObject
// (Actor)

class UClass* ASmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObject");

	return Clss;
}


// SmartObject GbxAI.Default__SmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ASmartObject* ASmartObject::GetDefaultObj()
{
	static class ASmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ASmartObject*>(ASmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.SmartObject.GetSmartObjectComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USmartObjectComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartObjectComponent* ASmartObject::GetSmartObjectComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObject", "GetSmartObjectComponent");

	Params::ASmartObject_GetSmartObjectComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.SmartObject.GetGbxActionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxActionComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxActionComponent* ASmartObject::GetGbxActionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObject", "GetGbxActionComponent");

	Params::ASmartObject_GetGbxActionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GbxSmartObject
// (Actor)

class UClass* AGbxSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxSmartObject");

	return Clss;
}


// GbxSmartObject GbxAI.Default__GbxSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxSmartObject* AGbxSmartObject::GetDefaultObj()
{
	static class AGbxSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxSmartObject*>(AGbxSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxSpawner
// (Actor)

class UClass* AGbxSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxSpawner");

	return Clss;
}


// GbxSpawner GbxAI.Default__GbxSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxSpawner* AGbxSpawner::GetDefaultObj()
{
	static class AGbxSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxSpawner*>(AGbxSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxSpawner.GetGameplayTasksComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayTasksComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayTasksComponent* AGbxSpawner::GetGameplayTasksComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpawner", "GetGameplayTasksComponent");

	Params::AGbxSpawner_GetGameplayTasksComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxSpawner.GetAINodeComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAINodeComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAINodeComponent* AGbxSpawner::GetAINodeComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpawner", "GetAINodeComponent");

	Params::AGbxSpawner_GetAINodeComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxSpawner.GetAIGroupState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIGroupState*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIGroupState* AGbxSpawner::GetAIGroupState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpawner", "GetAIGroupState");

	Params::AGbxSpawner_GetAIGroupState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxSpawner::DEPRECATED_IsThreatened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpawner", "DEPRECATED_IsThreatened");

	Params::AGbxSpawner_DEPRECATED_IsThreatened_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.GbxSpawnerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGbxSpawnerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxSpawnerComponent");

	return Clss;
}


// GbxSpawnerComponent GbxAI.Default__GbxSpawnerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxSpawnerComponent* UGbxSpawnerComponent::GetDefaultObj()
{
	static class UGbxSpawnerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxSpawnerComponent*>(UGbxSpawnerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.GbxSpawnPoint
// (Actor)

class UClass* AGbxSpawnPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxSpawnPoint");

	return Clss;
}


// GbxSpawnPoint GbxAI.Default__GbxSpawnPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxSpawnPoint* AGbxSpawnPoint::GetDefaultObj()
{
	static class AGbxSpawnPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxSpawnPoint*>(AGbxSpawnPoint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USpawnPointComponent*        SpawnPointComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnOptionData*            SpawnOptions                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxSpawnPoint::HasNavNearSpawnPointFor(class USpawnPointComponent* SpawnPointComp, class USpawnOptionData* SpawnOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxSpawnPoint", "HasNavNearSpawnPointFor");

	Params::AGbxSpawnPoint_HasNavNearSpawnPointFor_Params Parms{};

	Parms.SpawnPointComp = SpawnPointComp;
	Parms.SpawnOptions = SpawnOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.LookAtPoint
// (Actor)

class UClass* ALookAtPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LookAtPoint");

	return Clss;
}


// LookAtPoint GbxAI.Default__LookAtPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ALookAtPoint* ALookAtPoint::GetDefaultObj()
{
	static class ALookAtPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ALookAtPoint*>(ALookAtPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.LookAtPointComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULookAtPointComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LookAtPointComponent");

	return Clss;
}


// LookAtPointComponent GbxAI.Default__LookAtPointComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULookAtPointComponent* ULookAtPointComponent::GetDefaultObj()
{
	static class ULookAtPointComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULookAtPointComponent*>(ULookAtPointComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.LookAtPointTag
// (None)

class UClass* ULookAtPointTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LookAtPointTag");

	return Clss;
}


// LookAtPointTag GbxAI.Default__LookAtPointTag
// (Public, ClassDefaultObject, ArchetypeObject)

class ULookAtPointTag* ULookAtPointTag::GetDefaultObj()
{
	static class ULookAtPointTag* Default = nullptr;

	if (!Default)
		Default = static_cast<ULookAtPointTag*>(ULookAtPointTag::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.Perch
// (Actor)

class UClass* APerch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perch");

	return Clss;
}


// Perch GbxAI.Default__Perch
// (Public, ClassDefaultObject, ArchetypeObject)

class APerch* APerch::GetDefaultObj()
{
	static class APerch* Default = nullptr;

	if (!Default)
		Default = static_cast<APerch*>(APerch::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.PerchComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPerchComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerchComponent");

	return Clss;
}


// PerchComponent GbxAI.Default__PerchComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerchComponent* UPerchComponent::GetDefaultObj()
{
	static class UPerchComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerchComponent*>(UPerchComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.PerchTag
// (None)

class UClass* UPerchTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerchTag");

	return Clss;
}


// PerchTag GbxAI.Default__PerchTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerchTag* UPerchTag::GetDefaultObj()
{
	static class UPerchTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerchTag*>(UPerchTag::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.PerchType
// (None)

class UClass* UPerchType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerchType");

	return Clss;
}


// PerchType GbxAI.Default__PerchType
// (Public, ClassDefaultObject, ArchetypeObject)

class UPerchType* UPerchType::GetDefaultObj()
{
	static class UPerchType* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerchType*>(UPerchType::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.ScriptedBehaviorTreeLibrary
// (None)

class UClass* UScriptedBehaviorTreeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedBehaviorTreeLibrary");

	return Clss;
}


// ScriptedBehaviorTreeLibrary GbxAI.Default__ScriptedBehaviorTreeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UScriptedBehaviorTreeLibrary* UScriptedBehaviorTreeLibrary::GetDefaultObj()
{
	static class UScriptedBehaviorTreeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UScriptedBehaviorTreeLibrary*>(UScriptedBehaviorTreeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopImmediately                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScriptedBehaviorTreeLibrary::PerformScriptedAbort(class AActor* Target, bool bStopImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedBehaviorTreeLibrary", "PerformScriptedAbort");

	Params::UScriptedBehaviorTreeLibrary_PerformScriptedAbort_Params Parms{};

	Parms.Target = Target;
	Parms.bStopImmediately = bStopImmediately;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScriptedBehaviorTreeLibrary::BeginScriptedWait(class AActor* Target, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedBehaviorTreeLibrary", "BeginScriptedWait");

	Params::UScriptedBehaviorTreeLibrary_BeginScriptedWait_Params Parms{};

	Parms.Target = Target;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      LookAtActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAimAtActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFireWeaponAtActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStanceDataProvider*         OptionalStance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScriptedBehaviorTreeLibrary::BeginScriptedLook(class AActor* Target, class AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, class UStanceDataProvider* OptionalStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedBehaviorTreeLibrary", "BeginScriptedLook");

	Params::UScriptedBehaviorTreeLibrary_BeginScriptedLook_Params Parms{};

	Parms.Target = Target;
	Parms.LookAtActor = LookAtActor;
	Parms.bAimAtActor = bAimAtActor;
	Parms.bFireWeaponAtActor = bFireWeaponAtActor;
	Parms.OptionalStance = OptionalStance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.SmartObjectAction
// (None)

class UClass* USmartObjectAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectAction");

	return Clss;
}


// SmartObjectAction GbxAI.Default__SmartObjectAction
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectAction* USmartObjectAction::GetDefaultObj()
{
	static class USmartObjectAction* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectAction*>(USmartObjectAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.AIResource_SmartObject
// (None)

class UClass* UAIResource_SmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIResource_SmartObject");

	return Clss;
}


// AIResource_SmartObject GbxAI.Default__AIResource_SmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIResource_SmartObject* UAIResource_SmartObject::GetDefaultObj()
{
	static class UAIResource_SmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIResource_SmartObject*>(UAIResource_SmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.SmartObjectInterface
// (None)

class UClass* ISmartObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectInterface");

	return Clss;
}


// SmartObjectInterface GbxAI.Default__SmartObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISmartObjectInterface* ISmartObjectInterface::GetDefaultObj()
{
	static class ISmartObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISmartObjectInterface*>(ISmartObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.SmartObjectBlueprintLibrary
// (None)

class UClass* USmartObjectBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectBlueprintLibrary");

	return Clss;
}


// SmartObjectBlueprintLibrary GbxAI.Default__SmartObjectBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectBlueprintLibrary* USmartObjectBlueprintLibrary::GetDefaultObj()
{
	static class USmartObjectBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectBlueprintLibrary*>(USmartObjectBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAbortExisting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUntilInterrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintLibrary::UseSmartObject(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag, bool bAbortExisting, bool bUntilInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintLibrary", "UseSmartObject");

	Params::USmartObjectBlueprintLibrary_UseSmartObject_Params Parms{};

	Parms.User = User;
	Parms.SmartObject = SmartObject;
	Parms.ActionTag = ActionTag;
	Parms.bAbortExisting = bAbortExisting;
	Parms.bUntilInterrupted = bUntilInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectBlueprintLibrary::AbortSmartObjectUse(class AActor* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintLibrary", "AbortSmartObjectUse");

	Params::USmartObjectBlueprintLibrary_AbortSmartObjectUse_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.SmartObjectComponent
// (None)

class UClass* USmartObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectComponent");

	return Clss;
}


// SmartObjectComponent GbxAI.Default__SmartObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectComponent* USmartObjectComponent::GetDefaultObj()
{
	static class USmartObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectComponent*>(USmartObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.SmartObjectComponent.UnreserveEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                       User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::UnreserveEventSignature(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "UnreserveEventSignature");

	Params::USmartObjectComponent_UnreserveEventSignature_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.ToggleActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectActionSet       ActionSet                                                        (Parm, NativeAccessSpecifierPublic)

void USmartObjectComponent::ToggleActionSet(const struct FSmartObjectActionSet& ActionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "ToggleActionSet");

	Params::USmartObjectComponent_ToggleActionSet_Params Parms{};

	Parms.ActionSet = ActionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.SuccessEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                       User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::SuccessEventSignature(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "SuccessEventSignature");

	Params::USmartObjectComponent_SuccessEventSignature_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.ReserveEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                       User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::ReserveEventSignature(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "ReserveEventSignature");

	Params::USmartObjectComponent_ReserveEventSignature_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.OnActionEnded
// (Final, Native, Private)
// Parameters:
// enum class EGbxActionEndState      EndState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActionName                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::OnActionEnded(enum class EGbxActionEndState EndState, const struct FGameplayTag& ActionName, class AController* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "OnActionEnded");

	Params::USmartObjectComponent_OnActionEnded_Params Parms{};

	Parms.EndState = EndState;
	Parms.ActionName = ActionName;
	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.InterruptEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                       User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::InterruptEventSignature(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "InterruptEventSignature");

	Params::USmartObjectComponent_InterruptEventSignature_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.GetAvailableSocketNames
// (Final, Native, Private, HasOutParams, Const)
// Parameters:
// TArray<class FName>                Array                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USmartObjectComponent::GetAvailableSocketNames(TArray<class FName>* Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "GetAvailableSocketNames");

	Params::USmartObjectComponent_GetAvailableSocketNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function GbxAI.SmartObjectComponent.GetActionUsers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APawn*>               OutUsers                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USmartObjectComponent::GetActionUsers(const struct FGameplayTag& ActionTag, TArray<class APawn*>* OutUsers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "GetActionUsers");

	Params::USmartObjectComponent_GetActionUsers_Params Parms{};

	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutUsers != nullptr)
		*OutUsers = std::move(Parms.OutUsers);

}


// Function GbxAI.SmartObjectComponent.EnableAllActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USmartObjectComponent::EnableAllActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "EnableAllActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.EnableAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::EnableAction(const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "EnableAction");

	Params::USmartObjectComponent_EnableAction_Params Parms{};

	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.DisableAllActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USmartObjectComponent::DisableAllActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "DisableAllActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.DisableAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::DisableAction(const struct FGameplayTag& ActionTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "DisableAction");

	Params::USmartObjectComponent_DisableAction_Params Parms{};

	Parms.ActionTag = ActionTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectComponent.BeginEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                       User                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectComponent::BeginEventSignature(class APawn* User)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectComponent", "BeginEventSignature");

	Params::USmartObjectComponent_BeginEventSignature_Params Parms{};

	Parms.User = User;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.SmartObjectPreviewComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectPreviewComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectPreviewComponent");

	return Clss;
}


// SmartObjectPreviewComponent GbxAI.Default__SmartObjectPreviewComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectPreviewComponent* USmartObjectPreviewComponent::GetDefaultObj()
{
	static class USmartObjectPreviewComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectPreviewComponent*>(USmartObjectPreviewComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.SmartObjectPreviewComponent.OnReplayAction
// (Final, Native, Private)
// Parameters:

void USmartObjectPreviewComponent::OnReplayAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectPreviewComponent", "OnReplayAction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SmartObjectPreviewComponent.OnCycleActor
// (Final, Native, Private)
// Parameters:
// enum class ECycleDirection         Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USmartObjectPreviewComponent::OnCycleActor(enum class ECycleDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectPreviewComponent", "OnCycleActor");

	Params::USmartObjectPreviewComponent_OnCycleActor_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAI.SmartObjectUser
// (None)

class UClass* ISmartObjectUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectUser");

	return Clss;
}


// SmartObjectUser GbxAI.Default__SmartObjectUser
// (Public, ClassDefaultObject, ArchetypeObject)

class ISmartObjectUser* ISmartObjectUser::GetDefaultObj()
{
	static class ISmartObjectUser* Default = nullptr;

	if (!Default)
		Default = static_cast<ISmartObjectUser*>(ISmartObjectUser::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.SpawnBlueprintLibrary
// (None)

class UClass* USpawnBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnBlueprintLibrary");

	return Clss;
}


// SpawnBlueprintLibrary GbxAI.Default__SpawnBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnBlueprintLibrary* USpawnBlueprintLibrary::GetDefaultObj()
{
	static class USpawnBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnBlueprintLibrary*>(USpawnBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SpawnerActor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnOptionData*            SpawnOptions                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpawnBlueprintLibrary::SetSpawnOptions(class AActor* SpawnerActor, class USpawnOptionData* SpawnOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnBlueprintLibrary", "SetSpawnOptions");

	Params::USpawnBlueprintLibrary_SetSpawnOptions_Params Parms{};

	Parms.SpawnerActor = SpawnerActor;
	Parms.SpawnOptions = SpawnOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnerStyle*               Style                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETeamAttitude           MinRequiredAttitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASpawner*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpawner* USpawnBlueprintLibrary::GenerateSpawnerByRadius(class AActor* Instigator, class USpawnerStyle* Style, float Radius, enum class ETeamAttitude MinRequiredAttitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnBlueprintLibrary", "GenerateSpawnerByRadius");

	Params::USpawnBlueprintLibrary_GenerateSpawnerByRadius_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Style = Style;
	Parms.Radius = Radius;
	Parms.MinRequiredAttitude = MinRequiredAttitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USpawnerStyle*               Style                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASpawner*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ASpawner* USpawnBlueprintLibrary::GenerateSpawnerByOwningSpawner(class AActor* Instigator, class USpawnerStyle* Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnBlueprintLibrary", "GenerateSpawnerByOwningSpawner");

	Params::USpawnBlueprintLibrary_GenerateSpawnerByOwningSpawner_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Style = Style;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAI.SpawnNodeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USpawnNodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnNodeComponent");

	return Clss;
}


// SpawnNodeComponent GbxAI.Default__SpawnNodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USpawnNodeComponent* USpawnNodeComponent::GetDefaultObj()
{
	static class USpawnNodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnNodeComponent*>(USpawnNodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAI.Territory
// (Actor)

class UClass* ATerritory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Territory");

	return Clss;
}


// Territory GbxAI.Default__Territory
// (Public, ClassDefaultObject, ArchetypeObject)

class ATerritory* ATerritory::GetDefaultObj()
{
	static class ATerritory* Default = nullptr;

	if (!Default)
		Default = static_cast<ATerritory*>(ATerritory::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAI.Territory.GetTerritoryComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTerritoryComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTerritoryComponent* ATerritory::GetTerritoryComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Territory", "GetTerritoryComponent");

	Params::ATerritory_GetTerritoryComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


