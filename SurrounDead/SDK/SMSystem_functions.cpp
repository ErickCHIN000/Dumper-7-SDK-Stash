#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SMSystem.SMEditorGraphNodeInterface
// (None)

class UClass* ISMEditorGraphNodeInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMEditorGraphNodeInterface");

	return Clss;
}


// SMEditorGraphNodeInterface SMSystem.Default__SMEditorGraphNodeInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISMEditorGraphNodeInterface* ISMEditorGraphNodeInterface::GetDefaultObj()
{
	static class ISMEditorGraphNodeInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISMEditorGraphNodeInterface*>(ISMEditorGraphNodeInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMEditorGraphNodeInterface.SetNodeName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      NewName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutErrorMessage                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ISMEditorGraphNodeInterface::SetNodeName(const class FString& NewName, class FText* OutErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "SetNodeName");

	Params::ISMEditorGraphNodeInterface_SetNodeName_Params Parms{};

	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutErrorMessage != nullptr)
		*OutErrorMessage = Parms.OutErrorMessage;

	return Parms.ReturnValue;

}


// Function SMSystem.SMEditorGraphNodeInterface.ResetNodeName
// (Native, Public, BlueprintCallable)
// Parameters:

void ISMEditorGraphNodeInterface::ResetNodeName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "ResetNodeName");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMEditorGraphNodeInterface.GetNodeName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ISMEditorGraphNodeInterface::GetNodeName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "GetNodeName");

	Params::ISMEditorGraphNodeInterface_GetNodeName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphPropertyAsArray
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMNodeInstance*             NodeInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ArrayIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>> ISMEditorGraphNodeInterface::GetEditorGraphPropertyAsArray(class FName PropertyName, class USMNodeInstance* NodeInstance, int32 ArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "GetEditorGraphPropertyAsArray");

	Params::ISMEditorGraphNodeInterface_GetEditorGraphPropertyAsArray_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.NodeInstance = NodeInstance;
	Parms.ArrayIndex = ArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMEditorGraphNodeInterface.GetEditorGraphProperty
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMNodeInstance*             NodeInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ArrayIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class ISMEditorGraphPropertyNodeInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class ISMEditorGraphPropertyNodeInterface> ISMEditorGraphNodeInterface::GetEditorGraphProperty(class FName PropertyName, class USMNodeInstance* NodeInstance, int32 ArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "GetEditorGraphProperty");

	Params::ISMEditorGraphNodeInterface_GetEditorGraphProperty_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.NodeInstance = NodeInstance;
	Parms.ArrayIndex = ArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMEditorGraphNodeInterface.GetAllEditorGraphProperties
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class USMNodeInstance*             NodeInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TScriptInterface<class ISMEditorGraphPropertyNodeInterface>> ISMEditorGraphNodeInterface::GetAllEditorGraphProperties(class USMNodeInstance* NodeInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "GetAllEditorGraphProperties");

	Params::ISMEditorGraphNodeInterface_GetAllEditorGraphProperties_Params Parms{};

	Parms.NodeInstance = NodeInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMEditorGraphNodeInterface.AsStateBaseInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISMEditorGraphNode_StateBaseInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class ISMEditorGraphNode_StateBaseInterface> ISMEditorGraphNodeInterface::AsStateBaseInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNodeInterface", "AsStateBaseInterface");

	Params::ISMEditorGraphNodeInterface_AsStateBaseInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMEditorGraphNode_StateBaseInterface
// (None)

class UClass* ISMEditorGraphNode_StateBaseInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMEditorGraphNode_StateBaseInterface");

	return Clss;
}


// SMEditorGraphNode_StateBaseInterface SMSystem.Default__SMEditorGraphNode_StateBaseInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISMEditorGraphNode_StateBaseInterface* ISMEditorGraphNode_StateBaseInterface::GetDefaultObj()
{
	static class ISMEditorGraphNode_StateBaseInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISMEditorGraphNode_StateBaseInterface*>(ISMEditorGraphNode_StateBaseInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMEditorGraphNode_StateBaseInterface.SetAnyStateTags
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InAnyStateTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ISMEditorGraphNode_StateBaseInterface::SetAnyStateTags(struct FGameplayTagContainer& InAnyStateTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNode_StateBaseInterface", "SetAnyStateTags");

	Params::ISMEditorGraphNode_StateBaseInterface_SetAnyStateTags_Params Parms{};

	Parms.InAnyStateTags = InAnyStateTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMEditorGraphNode_StateBaseInterface.GetAnyStateTags
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer ISMEditorGraphNode_StateBaseInterface::GetAnyStateTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphNode_StateBaseInterface", "GetAnyStateTags");

	Params::ISMEditorGraphNode_StateBaseInterface_GetAnyStateTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMEditorGraphPropertyNodeInterface
// (None)

class UClass* ISMEditorGraphPropertyNodeInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMEditorGraphPropertyNodeInterface");

	return Clss;
}


// SMEditorGraphPropertyNodeInterface SMSystem.Default__SMEditorGraphPropertyNodeInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISMEditorGraphPropertyNodeInterface* ISMEditorGraphPropertyNodeInterface::GetDefaultObj()
{
	static class ISMEditorGraphPropertyNodeInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISMEditorGraphPropertyNodeInterface*>(ISMEditorGraphPropertyNodeInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotificationAndHighlight
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESMLogType              Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearOnCompile                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISMEditorGraphPropertyNodeInterface::SetNotificationAndHighlight(bool bEnable, enum class ESMLogType Severity, const class FString& Message, bool bClearOnCompile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphPropertyNodeInterface", "SetNotificationAndHighlight");

	Params::ISMEditorGraphPropertyNodeInterface_SetNotificationAndHighlight_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.Severity = Severity;
	Parms.Message = Message;
	Parms.bClearOnCompile = bClearOnCompile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetNotification
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESMLogType              Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearOnCompile                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISMEditorGraphPropertyNodeInterface::SetNotification(bool bEnable, enum class ESMLogType Severity, const class FString& Message, bool bClearOnCompile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphPropertyNodeInterface", "SetNotification");

	Params::ISMEditorGraphPropertyNodeInterface_SetNotification_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.Severity = Severity;
	Parms.Message = Message;
	Parms.bClearOnCompile = bClearOnCompile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.SetHighlight
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearOnCompile                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISMEditorGraphPropertyNodeInterface::SetHighlight(bool bEnable, const struct FLinearColor& Color, bool bClearOnCompile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphPropertyNodeInterface", "SetHighlight");

	Params::ISMEditorGraphPropertyNodeInterface_SetHighlight_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.Color = Color;
	Parms.bClearOnCompile = bClearOnCompile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMEditorGraphPropertyNodeInterface.ResetProperty
// (Native, Public, BlueprintCallable)
// Parameters:

void ISMEditorGraphPropertyNodeInterface::ResetProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMEditorGraphPropertyNodeInterface", "ResetProperty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SMSystem.SMInstanceInterface
// (None)

class UClass* ISMInstanceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMInstanceInterface");

	return Clss;
}


// SMInstanceInterface SMSystem.Default__SMInstanceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISMInstanceInterface* ISMInstanceInterface::GetDefaultObj()
{
	static class ISMInstanceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISMInstanceInterface*>(ISMInstanceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMStateMachineInterface
// (None)

class UClass* ISMStateMachineInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMStateMachineInterface");

	return Clss;
}


// SMStateMachineInterface SMSystem.Default__SMStateMachineInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISMStateMachineInterface* ISMStateMachineInterface::GetDefaultObj()
{
	static class ISMStateMachineInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISMStateMachineInterface*>(ISMStateMachineInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMStateMachineNetworkedInterface
// (None)

class UClass* ISMStateMachineNetworkedInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMStateMachineNetworkedInterface");

	return Clss;
}


// SMStateMachineNetworkedInterface SMSystem.Default__SMStateMachineNetworkedInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISMStateMachineNetworkedInterface* ISMStateMachineNetworkedInterface::GetDefaultObj()
{
	static class ISMStateMachineNetworkedInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISMStateMachineNetworkedInterface*>(ISMStateMachineNetworkedInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMStateMachineNetworkedInterface.IsSimulatedProxy
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ISMStateMachineNetworkedInterface::IsSimulatedProxy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineNetworkedInterface", "IsSimulatedProxy");

	Params::ISMStateMachineNetworkedInterface_IsSimulatedProxy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineNetworkedInterface.IsConfiguredForNetworking
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ISMStateMachineNetworkedInterface::IsConfiguredForNetworking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineNetworkedInterface", "IsConfiguredForNetworking");

	Params::ISMStateMachineNetworkedInterface_IsConfiguredForNetworking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineNetworkedInterface.HasAuthority
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ISMStateMachineNetworkedInterface::HasAuthority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineNetworkedInterface", "HasAuthority");

	Params::ISMStateMachineNetworkedInterface_HasAuthority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMBlueprint
// (Blueprint)

class UClass* USMBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMBlueprint");

	return Clss;
}


// SMBlueprint SMSystem.Default__SMBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class USMBlueprint* USMBlueprint::GetDefaultObj()
{
	static class USMBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<USMBlueprint*>(USMBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMNodeBlueprint
// (Blueprint)

class UClass* USMNodeBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMNodeBlueprint");

	return Clss;
}


// SMNodeBlueprint SMSystem.Default__SMNodeBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class USMNodeBlueprint* USMNodeBlueprint::GetDefaultObj()
{
	static class USMNodeBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<USMNodeBlueprint*>(USMNodeBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* USMBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMBlueprintGeneratedClass");

	return Clss;
}


// SMBlueprintGeneratedClass SMSystem.Default__SMBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class USMBlueprintGeneratedClass* USMBlueprintGeneratedClass::GetDefaultObj()
{
	static class USMBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<USMBlueprintGeneratedClass*>(USMBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMNodeBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* USMNodeBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMNodeBlueprintGeneratedClass");

	return Clss;
}


// SMNodeBlueprintGeneratedClass SMSystem.Default__SMNodeBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class USMNodeBlueprintGeneratedClass* USMNodeBlueprintGeneratedClass::GetDefaultObj()
{
	static class USMNodeBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<USMNodeBlueprintGeneratedClass*>(USMNodeBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMNodeInstance
// (None)

class UClass* USMNodeInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMNodeInstance");

	return Clss;
}


// SMNodeInstance SMSystem.Default__SMNodeInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMNodeInstance* USMNodeInstance::GetDefaultObj()
{
	static class USMNodeInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMNodeInstance*>(USMNodeInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMNodeInstance.WithExecutionEnvironment
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ESMExecutionEnvironment ExecutionEnvironment                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::WithExecutionEnvironment(enum class ESMExecutionEnvironment* ExecutionEnvironment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "WithExecutionEnvironment");

	Params::USMNodeInstance_WithExecutionEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExecutionEnvironment != nullptr)
		*ExecutionEnvironment = Parms.ExecutionEnvironment;

}


// Function SMSystem.SMNodeInstance.SetVariableReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetIsReadOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::SetVariableReadOnly(class FName VariableName, bool bSetIsReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetVariableReadOnly");

	Params::USMNodeInstance_SetVariableReadOnly_Params Parms{};

	Parms.VariableName = VariableName;
	Parms.bSetIsReadOnly = bSetIsReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.SetVariableHidden
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetHidden                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::SetVariableHidden(class FName VariableName, bool bSetHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetVariableHidden");

	Params::USMNodeInstance_SetVariableHidden_Params Parms{};

	Parms.VariableName = VariableName;
	Parms.bSetHidden = bSetHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.SetUseCustomIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::SetUseCustomIcon(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetUseCustomIcon");

	Params::USMNodeInstance_SetUseCustomIcon_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.SetUseCustomColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::SetUseCustomColor(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetUseCustomColor");

	Params::USMNodeInstance_SetUseCustomColor_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.SetNodeDescriptionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        NewDescription                                                   (Parm, NativeAccessSpecifierPublic)

void USMNodeInstance::SetNodeDescriptionText(class FText NewDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetNodeDescriptionText");

	Params::USMNodeInstance_SetNodeDescriptionText_Params Parms{};

	Parms.NewDescription = NewDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.SetNodeColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewColor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::SetNodeColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetNodeColor");

	Params::USMNodeInstance_SetNodeColor_Params Parms{};

	Parms.NewColor = NewColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.SetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewDisplayName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::SetDisplayName(class FName NewDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "SetDisplayName");

	Params::USMNodeInstance_SetDisplayName_Params Parms{};

	Parms.NewDisplayName = NewDisplayName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.ResetVariables
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMNodeInstance::ResetVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "ResetVariables");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.OnRootStateMachineStop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMNodeInstance::OnRootStateMachineStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "OnRootStateMachineStop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.OnRootStateMachineStart
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMNodeInstance::OnRootStateMachineStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "OnRootStateMachineStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.OnPreCompileValidate
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class USMCompilerLog*              CompilerLog                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::OnPreCompileValidate(class USMCompilerLog* CompilerLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "OnPreCompileValidate");

	Params::USMNodeInstance_OnPreCompileValidate_Params Parms{};

	Parms.CompilerLog = CompilerLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.OnContextPawnControllerChanged
// (Final, Native, Protected)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 NewController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "OnContextPawnControllerChanged");

	Params::USMNodeInstance_OnContextPawnControllerChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.NewController = NewController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.K2_TryGetOwningEditorGraphNode
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TScriptInterface<class ISMEditorGraphNodeInterface>EditorNode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESMValidEditorNode      IsValidNode                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::K2_TryGetOwningEditorGraphNode(TScriptInterface<class ISMEditorGraphNodeInterface>* EditorNode, enum class ESMValidEditorNode* IsValidNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "K2_TryGetOwningEditorGraphNode");

	Params::USMNodeInstance_K2_TryGetOwningEditorGraphNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EditorNode != nullptr)
		*EditorNode = Parms.EditorNode;

	if (IsValidNode != nullptr)
		*IsValidNode = Parms.IsValidNode;

}


// Function SMSystem.SMNodeInstance.IsInitializedAndReadyForInputEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMNodeInstance::IsInitializedAndReadyForInputEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "IsInitializedAndReadyForInputEvents");

	Params::USMNodeInstance_IsInitializedAndReadyForInputEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMNodeInstance::IsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "IsInitialized");

	Params::USMNodeInstance_IsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.IsInEndState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMNodeInstance::IsInEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "IsInEndState");

	Params::USMNodeInstance_IsInEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.IsEditorExecution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMNodeInstance::IsEditorExecution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "IsEditorExecution");

	Params::USMNodeInstance_IsEditorExecution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMNodeInstance::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "IsActive");

	Params::USMNodeInstance_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.HasUpdated
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMNodeInstance::HasUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "HasUpdated");

	Params::USMNodeInstance_HasUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetTimeInState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USMNodeInstance::GetTimeInState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetTimeInState");

	Params::USMNodeInstance_GetTimeInState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetStateMachineInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTopMostInstance                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMNodeInstance::GetStateMachineInstance(bool bTopMostInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetStateMachineInstance");

	Params::USMNodeInstance_GetStateMachineInstance_Params Parms{};

	Parms.bTopMostInstance = bTopMostInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetOwningStateMachineNodeInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineInstance*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateMachineInstance* USMNodeInstance::GetOwningStateMachineNodeInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetOwningStateMachineNodeInstance");

	Params::USMNodeInstance_GetOwningStateMachineNodeInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetOwningEditorGraphNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class ISMEditorGraphNodeInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class ISMEditorGraphNodeInterface> USMNodeInstance::GetOwningEditorGraphNode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetOwningEditorGraphNode");

	Params::USMNodeInstance_GetOwningEditorGraphNode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNodePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USMNodeInstance::GetNodePosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNodePosition");

	Params::USMNodeInstance_GetNodePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNodeName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USMNodeInstance::GetNodeName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNodeName");

	Params::USMNodeInstance_GetNodeName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNodeIconTintColor
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USMNodeInstance::GetNodeIconTintColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNodeIconTintColor");

	Params::USMNodeInstance_GetNodeIconTintColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNodeIconSize
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USMNodeInstance::GetNodeIconSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNodeIconSize");

	Params::USMNodeInstance_GetNodeIconSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNodeIcon
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* USMNodeInstance::GetNodeIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNodeIcon");

	Params::USMNodeInstance_GetNodeIcon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNodeDescriptionText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USMNodeInstance::GetNodeDescriptionText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNodeDescriptionText");

	Params::USMNodeInstance_GetNodeDescriptionText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetNetworkInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class ISMStateMachineNetworkedInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class ISMStateMachineNetworkedInterface> USMNodeInstance::GetNetworkInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetNetworkInterface");

	Params::USMNodeInstance_GetNetworkInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetInputComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInputComponent* USMNodeInstance::GetInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetInputComponent");

	Params::USMNodeInstance_GetInputComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid USMNodeInstance::GetGuid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetGuid");

	Params::USMNodeInstance_GetGuid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.GetContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* USMNodeInstance::GetContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "GetContext");

	Params::USMNodeInstance_GetContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMNodeInstance.EvaluateGraphProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bTargetOnly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMNodeInstance::EvaluateGraphProperties(bool bTargetOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "EvaluateGraphProperties");

	Params::USMNodeInstance_EvaluateGraphProperties_Params Parms{};

	Parms.bTargetOnly = bTargetOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMNodeInstance.ConstructionScript
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void USMNodeInstance::ConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMNodeInstance", "ConstructionScript");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class SMSystem.SMStateInstance_Base
// (None)

class UClass* USMStateInstance_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMStateInstance_Base");

	return Clss;
}


// SMStateInstance_Base SMSystem.Default__SMStateInstance_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class USMStateInstance_Base* USMStateInstance_Base::GetDefaultObj()
{
	static class USMStateInstance_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<USMStateInstance_Base*>(USMStateInstance_Base::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransitionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      TransitionName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequireTransitionToPass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivateNow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::SwitchToLinkedStateByTransitionName(const class FString& TransitionName, bool bRequireTransitionToPass, bool bActivateNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SwitchToLinkedStateByTransitionName");

	Params::USMStateInstance_Base_SwitchToLinkedStateByTransitionName_Params Parms{};

	Parms.TransitionName = TransitionName;
	Parms.bRequireTransitionToPass = bRequireTransitionToPass;
	Parms.bActivateNow = bActivateNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByTransition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMTransitionInstance*       TransitionInstance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequireTransitionToPass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivateNow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::SwitchToLinkedStateByTransition(class USMTransitionInstance* TransitionInstance, bool bRequireTransitionToPass, bool bActivateNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SwitchToLinkedStateByTransition");

	Params::USMStateInstance_Base_SwitchToLinkedStateByTransition_Params Parms{};

	Parms.TransitionInstance = TransitionInstance;
	Parms.bRequireTransitionToPass = bRequireTransitionToPass;
	Parms.bActivateNow = bActivateNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedStateByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NextStateName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequireTransitionToPass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivateNow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::SwitchToLinkedStateByName(const class FString& NextStateName, bool bRequireTransitionToPass, bool bActivateNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SwitchToLinkedStateByName");

	Params::USMStateInstance_Base_SwitchToLinkedStateByName_Params Parms{};

	Parms.NextStateName = NextStateName;
	Parms.bRequireTransitionToPass = bRequireTransitionToPass;
	Parms.bActivateNow = bActivateNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.SwitchToLinkedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMStateInstance_Base*       NextStateInstance                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequireTransitionToPass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivateNow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::SwitchToLinkedState(class USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass, bool bActivateNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SwitchToLinkedState");

	Params::USMStateInstance_Base_SwitchToLinkedState_Params Parms{};

	Parms.NextStateInstance = NextStateInstance;
	Parms.bRequireTransitionToPass = bRequireTransitionToPass;
	Parms.bActivateNow = bActivateNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.SetStayActiveOnStateChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetStayActiveOnStateChange(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetStayActiveOnStateChange");

	Params::USMStateInstance_Base_SetStayActiveOnStateChange_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetExcludeFromAnyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetExcludeFromAnyState(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetExcludeFromAnyState");

	Params::USMStateInstance_Base_SetExcludeFromAnyState_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetEvalTransitionsOnStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetEvalTransitionsOnStart(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetEvalTransitionsOnStart");

	Params::USMStateInstance_Base_SetEvalTransitionsOnStart_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetDisableTickTransitionEvaluation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetDisableTickTransitionEvaluation(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetDisableTickTransitionEvaluation");

	Params::USMStateInstance_Base_SetDisableTickTransitionEvaluation_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetDefaultToParallel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetDefaultToParallel(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetDefaultToParallel");

	Params::USMStateInstance_Base_SetDefaultToParallel_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetCanBeEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetCanBeEndState(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetCanBeEndState");

	Params::USMStateInstance_Base_SetCanBeEndState_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetAlwaysUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetAlwaysUpdate(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetAlwaysUpdate");

	Params::USMStateInstance_Base_SetAlwaysUpdate_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetAllowParallelReentry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetAllowParallelReentry(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetAllowParallelReentry");

	Params::USMStateInstance_Base_SetAllowParallelReentry_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetAllParents                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivateNow                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::SetActive(bool bValue, bool bSetAllParents, bool bActivateNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "SetActive");

	Params::USMStateInstance_Base_SetActive_Params Parms{};

	Parms.bValue = bValue;
	Parms.bSetAllParents = bSetAllParents;
	Parms.bActivateNow = bActivateNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.OnStateUpdate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance_Base::OnStateUpdate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "OnStateUpdate");

	Params::USMStateInstance_Base_OnStateUpdate_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.OnStateEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateInstance_Base::OnStateEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "OnStateEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.OnStateBegin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateInstance_Base::OnStateBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "OnStateBegin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.IsStateMachine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::IsStateMachine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "IsStateMachine");

	Params::USMStateInstance_Base_IsStateMachine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.IsEntryState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::IsEntryState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "IsEntryState");

	Params::USMStateInstance_Base_IsEntryState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.IsEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::IsEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "IsEndState");

	Params::USMStateInstance_Base_IsEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetTransitionToTake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMStateInstance_Base::GetTransitionToTake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetTransitionToTake");

	Params::USMStateInstance_Base_GetTransitionToTake_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetTransitionByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMStateInstance_Base::GetTransitionByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetTransitionByIndex");

	Params::USMStateInstance_Base_GetTransitionByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetStayActiveOnStateChange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetStayActiveOnStateChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetStayActiveOnStateChange");

	Params::USMStateInstance_Base_GetStayActiveOnStateChange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetStateInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSMStateInfo                State                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void USMStateInstance_Base::GetStateInfo(struct FSMStateInfo* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetStateInfo");

	Params::USMStateInstance_Base_GetStateInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = std::move(Parms.State);

}


// Function SMSystem.SMStateInstance_Base.GetStartTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime USMStateInstance_Base::GetStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetStartTime");

	Params::USMStateInstance_Base_GetStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetServerTimeInState
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOutUsedLocalTime                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USMStateInstance_Base::GetServerTimeInState(bool* bOutUsedLocalTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetServerTimeInState");

	Params::USMStateInstance_Base_GetServerTimeInState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutUsedLocalTime != nullptr)
		*bOutUsedLocalTime = Parms.bOutUsedLocalTime;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetPreviousStateByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance_Base::GetPreviousStateByName(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetPreviousStateByName");

	Params::USMStateInstance_Base_GetPreviousStateByName_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetPreviousActiveTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMStateInstance_Base::GetPreviousActiveTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetPreviousActiveTransition");

	Params::USMStateInstance_Base_GetPreviousActiveTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetPreviousActiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance_Base::GetPreviousActiveState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetPreviousActiveState");

	Params::USMStateInstance_Base_GetPreviousActiveState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetOutgoingTransitions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*>Transitions                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bExcludeAlwaysFalse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetOutgoingTransitions(TArray<class USMTransitionInstance*>* Transitions, bool bExcludeAlwaysFalse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetOutgoingTransitions");

	Params::USMStateInstance_Base_GetOutgoingTransitions_Params Parms{};

	Parms.bExcludeAlwaysFalse = bExcludeAlwaysFalse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transitions != nullptr)
		*Transitions = std::move(Parms.Transitions);

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetOutgoingTransitionByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMStateInstance_Base::GetOutgoingTransitionByName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetOutgoingTransitionByName");

	Params::USMStateInstance_Base_GetOutgoingTransitionByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetNextStateByTransitionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance_Base::GetNextStateByTransitionIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetNextStateByTransitionIndex");

	Params::USMStateInstance_Base_GetNextStateByTransitionIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetNextStateByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance_Base::GetNextStateByName(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetNextStateByName");

	Params::USMStateInstance_Base_GetNextStateByName_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetIncomingTransitions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*>Transitions                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bExcludeAlwaysFalse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetIncomingTransitions(TArray<class USMTransitionInstance*>* Transitions, bool bExcludeAlwaysFalse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetIncomingTransitions");

	Params::USMStateInstance_Base_GetIncomingTransitions_Params Parms{};

	Parms.bExcludeAlwaysFalse = bExcludeAlwaysFalse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transitions != nullptr)
		*Transitions = std::move(Parms.Transitions);

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetIncomingTransitionByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMStateInstance_Base::GetIncomingTransitionByName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetIncomingTransitionByName");

	Params::USMStateInstance_Base_GetIncomingTransitionByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetExcludeFromAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetExcludeFromAnyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetExcludeFromAnyState");

	Params::USMStateInstance_Base_GetExcludeFromAnyState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetEvalTransitionsOnStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetEvalTransitionsOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetEvalTransitionsOnStart");

	Params::USMStateInstance_Base_GetEvalTransitionsOnStart_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetDisableTickTransitionEvaluation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetDisableTickTransitionEvaluation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetDisableTickTransitionEvaluation");

	Params::USMStateInstance_Base_GetDisableTickTransitionEvaluation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetDefaultToParallel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetDefaultToParallel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetDefaultToParallel");

	Params::USMStateInstance_Base_GetDefaultToParallel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetCanBeEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetCanBeEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetCanBeEndState");

	Params::USMStateInstance_Base_GetCanBeEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetAlwaysUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetAlwaysUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetAlwaysUpdate");

	Params::USMStateInstance_Base_GetAlwaysUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.GetAllowParallelReentry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::GetAllowParallelReentry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "GetAllowParallelReentry");

	Params::USMStateInstance_Base_GetAllowParallelReentry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.EvaluateTransitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMStateInstance_Base::EvaluateTransitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "EvaluateTransitions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance_Base.AreAllOutgoingTransitionsFromAnAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::AreAllOutgoingTransitionsFromAnAnyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "AreAllOutgoingTransitionsFromAnAnyState");

	Params::USMStateInstance_Base_AreAllOutgoingTransitionsFromAnAnyState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance_Base.AreAllIncomingTransitionsFromAnAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateInstance_Base::AreAllIncomingTransitionsFromAnAnyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance_Base", "AreAllIncomingTransitionsFromAnAnyState");

	Params::USMStateInstance_Base_AreAllIncomingTransitionsFromAnAnyState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMConduitInstance
// (None)

class UClass* USMConduitInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMConduitInstance");

	return Clss;
}


// SMConduitInstance SMSystem.Default__SMConduitInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMConduitInstance* USMConduitInstance::GetDefaultObj()
{
	static class USMConduitInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMConduitInstance*>(USMConduitInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMConduitInstance.SetEvalWithTransitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMConduitInstance::SetEvalWithTransitions(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "SetEvalWithTransitions");

	Params::USMConduitInstance_SetEvalWithTransitions_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMConduitInstance.SetCanEvaluate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMConduitInstance::SetCanEvaluate(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "SetCanEvaluate");

	Params::USMConduitInstance_SetCanEvaluate_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMConduitInstance.OnConduitShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMConduitInstance::OnConduitShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "OnConduitShutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMConduitInstance.OnConduitInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMConduitInstance::OnConduitInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "OnConduitInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMConduitInstance.OnConduitEntered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMConduitInstance::OnConduitEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "OnConduitEntered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMConduitInstance.GetEvalWithTransitions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMConduitInstance::GetEvalWithTransitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "GetEvalWithTransitions");

	Params::USMConduitInstance_GetEvalWithTransitions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMConduitInstance.GetCanEvaluate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMConduitInstance::GetCanEvaluate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "GetCanEvaluate");

	Params::USMConduitInstance_GetCanEvaluate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMConduitInstance.CanEnterTransition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMConduitInstance::CanEnterTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMConduitInstance", "CanEnterTransition");

	Params::USMConduitInstance_CanEnterTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMInstance
// (None)

class UClass* USMInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMInstance");

	return Clss;
}


// SMInstance SMSystem.Default__SMInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMInstance* USMInstance::GetDefaultObj()
{
	static class USMInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMInstance*>(USMInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMInstance.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Update");

	Params::USMInstance_Update_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.TryGetTransitionInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Guid                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSMTransitionInfo           TransitionInfo                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::TryGetTransitionInfo(struct FGuid& Guid, struct FSMTransitionInfo* TransitionInfo, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "TryGetTransitionInfo");

	Params::USMInstance_TryGetTransitionInfo_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TransitionInfo != nullptr)
		*TransitionInfo = std::move(Parms.TransitionInfo);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function SMSystem.SMInstance.TryGetStateInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Guid                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSMStateInfo                StateInfo                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::TryGetStateInfo(struct FGuid& Guid, struct FSMStateInfo* StateInfo, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "TryGetStateInfo");

	Params::USMInstance_TryGetStateInfo_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StateInfo != nullptr)
		*StateInfo = std::move(Parms.StateInfo);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function SMSystem.SMInstance.TryGetNestedActiveState
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSMStateInfo                FoundState                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::TryGetNestedActiveState(struct FSMStateInfo* FoundState, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "TryGetNestedActiveState");

	Params::USMInstance_TryGetNestedActiveState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FoundState != nullptr)
		*FoundState = std::move(Parms.FoundState);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function SMSystem.SMInstance.Tick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::Tick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Tick");

	Params::USMInstance_Tick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.TakeTransitionChain
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USMTransitionInstance*>InTransitionChain                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::TakeTransitionChain(TArray<class USMTransitionInstance*>& InTransitionChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "TakeTransitionChain");

	Params::USMInstance_TakeTransitionChain_Params Parms{};

	Parms.InTransitionChain = InTransitionChain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.SwitchActiveStateByQualifiedName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InFullPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeactivateOtherStates                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SwitchActiveStateByQualifiedName(const class FString& InFullPath, bool bDeactivateOtherStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SwitchActiveStateByQualifiedName");

	Params::USMInstance_SwitchActiveStateByQualifiedName_Params Parms{};

	Parms.InFullPath = InFullPath;
	Parms.bDeactivateOtherStates = bDeactivateOtherStates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SwitchActiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMStateInstance_Base*       NewStateInstance                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeactivateOtherStates                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SwitchActiveState(class USMStateInstance_Base* NewStateInstance, bool bDeactivateOtherStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SwitchActiveState");

	Params::USMInstance_SwitchActiveState_Params Parms{};

	Parms.NewStateInstance = NewStateInstance;
	Parms.bDeactivateOtherStates = bDeactivateOtherStates;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Stop
// (Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.StartWithNewContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::StartWithNewContext(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "StartWithNewContext");

	Params::USMInstance_StartWithNewContext_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Start
// (Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Start");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Shutdown
// (Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Shutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetTickOnManualUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetTickOnManualUpdate(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetTickOnManualUpdate");

	Params::USMInstance_SetTickOnManualUpdate_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetTickInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetTickInterval(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetTickInterval");

	Params::USMInstance_SetTickInterval_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetTickBeforeBeginPlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetTickBeforeBeginPlay(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetTickBeforeBeginPlay");

	Params::USMInstance_SetTickBeforeBeginPlay_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetStopOnEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetStopOnEndState(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetStopOnEndState");

	Params::USMInstance_SetStopOnEndState_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetStateMachineClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class USMStateMachineInstance>NewStateMachineClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetStateMachineClass(TSubclassOf<class USMStateMachineInstance> NewStateMachineClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetStateMachineClass");

	Params::USMInstance_SetStateMachineClass_Params Parms{};

	Parms.NewStateMachineClass = NewStateMachineClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetStateHistoryMaxCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewSize                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetStateHistoryMaxCount(int32 NewSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetStateHistoryMaxCount");

	Params::USMInstance_SetStateHistoryMaxCount_Params Parms{};

	Parms.NewSize = NewSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetRootStateMachineNodeClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class USMStateMachineInstance>NewStateMachineNodeClass                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetRootStateMachineNodeClass(TSubclassOf<class USMStateMachineInstance> NewStateMachineNodeClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetRootStateMachineNodeClass");

	Params::USMInstance_SetRootStateMachineNodeClass_Params Parms{};

	Parms.NewStateMachineNodeClass = NewStateMachineNodeClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetGuidRedirectMap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<struct FGuid, struct FGuid>   InGuidMap                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USMInstance::SetGuidRedirectMap(TMap<struct FGuid, struct FGuid>& InGuidMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetGuidRedirectMap");

	Params::USMInstance_SetGuidRedirectMap_Params Parms{};

	Parms.InGuidMap = InGuidMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetContext(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetContext");

	Params::USMInstance_SetContext_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetCanTickWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetCanTickWhenPaused(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetCanTickWhenPaused");

	Params::USMInstance_SetCanTickWhenPaused_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetCanEverTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetCanEverTick(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetCanEverTick");

	Params::USMInstance_SetCanEverTick_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.SetAutoManageTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::SetAutoManageTime(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "SetAutoManageTime");

	Params::USMInstance_SetAutoManageTime_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.RunUpdateAsReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::RunUpdateAsReference(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "RunUpdateAsReference");

	Params::USMInstance_RunUpdateAsReference_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Restart
// (Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Restart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.ReplicatedStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::ReplicatedStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "ReplicatedStop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.ReplicatedStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::ReplicatedStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "ReplicatedStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.ReplicatedRestart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::ReplicatedRestart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "ReplicatedRestart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.REP_OnReplicatedReferencesLoaded
// (Final, Native, Private)
// Parameters:

void USMInstance::REP_OnReplicatedReferencesLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "REP_OnReplicatedReferencesLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.PreloadAllNodeInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::PreloadAllNodeInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "PreloadAllNodeInstances");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::OnStateMachineUpdate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineUpdate");

	Params::USMInstance_OnStateMachineUpdate_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineTransitionTaken
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSMTransitionInfo           Transition                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USMInstance::OnStateMachineTransitionTaken(struct FSMTransitionInfo& Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineTransitionTaken");

	Params::USMInstance_OnStateMachineTransitionTaken_Params Parms{};

	Parms.Transition = Transition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineStop
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void USMInstance::OnStateMachineStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineStop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineStateStarted
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSMStateInfo                State                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USMInstance::OnStateMachineStateStarted(struct FSMStateInfo& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineStateStarted");

	Params::USMInstance_OnStateMachineStateStarted_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineStateChanged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSMStateInfo                ToState                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSMStateInfo                FromState                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USMInstance::OnStateMachineStateChanged(struct FSMStateInfo& ToState, struct FSMStateInfo& FromState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineStateChanged");

	Params::USMInstance_OnStateMachineStateChanged_Params Parms{};

	Parms.ToState = ToState;
	Parms.FromState = FromState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void USMInstance::OnStateMachineStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineShutdown
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void USMInstance::OnStateMachineShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineShutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineInitialStateLoaded
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FGuid                       StateGuid                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::OnStateMachineInitialStateLoaded(struct FGuid& StateGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineInitialStateLoaded");

	Params::USMInstance_OnStateMachineInitialStateLoaded_Params Parms{};

	Parms.StateGuid = StateGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnStateMachineInitialized
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void USMInstance::OnStateMachineInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnStateMachineInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnPreStateMachineInitialized
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void USMInstance::OnPreStateMachineInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnPreStateMachineInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.OnContextPawnRestarted
// (Final, Native, Private)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::OnContextPawnRestarted(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "OnContextPawnRestarted");

	Params::USMInstance_OnContextPawnRestarted_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.LoadFromState
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       FromGuid                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllParents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::LoadFromState(struct FGuid& FromGuid, bool bAllParents, bool bNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "LoadFromState");

	Params::USMInstance_LoadFromState_Params Parms{};

	Parms.FromGuid = FromGuid;
	Parms.bAllParents = bAllParents;
	Parms.bNotify = bNotify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.LoadFromMultipleStates
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGuid>               FromGuids                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::LoadFromMultipleStates(TArray<struct FGuid>& FromGuids, bool bNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "LoadFromMultipleStates");

	Params::USMInstance_LoadFromMultipleStates_Params Parms{};

	Parms.FromGuids = FromGuids;
	Parms.bNotify = bNotify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.K2_TryGetNetworkInterface
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISMStateMachineNetworkedInterface>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::K2_TryGetNetworkInterface(TScriptInterface<class ISMStateMachineNetworkedInterface>* Interface, bool* bIsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "K2_TryGetNetworkInterface");

	Params::USMInstance_K2_TryGetNetworkInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Interface != nullptr)
		*Interface = Parms.Interface;

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

}


// Function SMSystem.SMInstance.K2_InitializeAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USMInstance::K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "K2_InitializeAsync");

	Params::USMInstance_K2_InitializeAsync_Params Parms{};

	Parms.Context = Context;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.IsTickableWhenPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsTickableWhenPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsTickableWhenPaused");

	Params::USMInstance_IsTickableWhenPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.IsTickable
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsTickable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsTickable");

	Params::USMInstance_IsTickable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.IsStopping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsStopping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsStopping");

	Params::USMInstance_IsStopping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.IsInitializingAsync
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsInitializingAsync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsInitializingAsync");

	Params::USMInstance_IsInitializingAsync_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsInitialized");

	Params::USMInstance_IsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.IsInEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsInEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsInEndState");

	Params::USMInstance_IsInEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::IsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "IsActive");

	Params::USMInstance_IsActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.Internal_Update
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::Internal_Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Internal_Update");

	Params::USMInstance_Internal_Update_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Internal_EventUpdate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void USMInstance::Internal_EventUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Internal_EventUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Internal_EventCleanup
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       PathGuid                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::Internal_EventCleanup(struct FGuid& PathGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Internal_EventCleanup");

	Params::USMInstance_Internal_EventCleanup_Params Parms{};

	Parms.PathGuid = PathGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.Internal_EvaluateAndTakeTransitionChainByGuid
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       PathGuid                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::Internal_EvaluateAndTakeTransitionChainByGuid(struct FGuid& PathGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Internal_EvaluateAndTakeTransitionChainByGuid");

	Params::USMInstance_Internal_EvaluateAndTakeTransitionChainByGuid_Params Parms{};

	Parms.PathGuid = PathGuid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.Initialize
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMInstance::Initialize(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "Initialize");

	Params::USMInstance_Initialize_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.HasStarted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::HasStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "HasStarted");

	Params::USMInstance_HasStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetTransitionInstanceByGuid
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Guid                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMInstance::GetTransitionInstanceByGuid(struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetTransitionInstanceByGuid");

	Params::USMInstance_GetTransitionInstanceByGuid_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetTickInterval
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USMInstance::GetTickInterval()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetTickInterval");

	Params::USMInstance_GetTickInterval_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetStopOnEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::GetStopOnEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetStopOnEndState");

	Params::USMInstance_GetStopOnEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetStateMachineClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USMStateMachineInstance>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class USMStateMachineInstance> USMInstance::GetStateMachineClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetStateMachineClass");

	Params::USMInstance_GetStateMachineClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetStateInstanceByQualifiedName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InFullPath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMInstance::GetStateInstanceByQualifiedName(const class FString& InFullPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetStateInstanceByQualifiedName");

	Params::USMInstance_GetStateInstanceByQualifiedName_Params Parms{};

	Parms.InFullPath = InFullPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetStateInstanceByGuid
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Guid                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMInstance::GetStateInstanceByGuid(struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetStateInstanceByGuid");

	Params::USMInstance_GetStateInstanceByGuid_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetStateHistoryMaxCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USMInstance::GetStateHistoryMaxCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetStateHistoryMaxCount");

	Params::USMInstance_GetStateHistoryMaxCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetStateHistory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSMStateHistory>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FSMStateHistory> USMInstance::GetStateHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetStateHistory");

	Params::USMInstance_GetStateHistory_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetSingleActiveStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bCheckNested                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMInstance::GetSingleActiveStateInstance(bool bCheckNested)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetSingleActiveStateInstance");

	Params::USMInstance_GetSingleActiveStateInstance_Params Parms{};

	Parms.bCheckNested = bCheckNested;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetSingleActiveStateGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bCheckNested                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid USMInstance::GetSingleActiveStateGuid(bool bCheckNested)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetSingleActiveStateGuid");

	Params::USMInstance_GetSingleActiveStateGuid_Params Parms{};

	Parms.bCheckNested = bCheckNested;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetRootStateMachineNodeInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineInstance*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateMachineInstance* USMInstance::GetRootStateMachineNodeInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetRootStateMachineNodeInstance");

	Params::USMInstance_GetRootStateMachineNodeInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetRootStateMachineNodeClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USMStateMachineInstance>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class USMStateMachineInstance> USMInstance::GetRootStateMachineNodeClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetRootStateMachineNodeClass");

	Params::USMInstance_GetRootStateMachineNodeClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetReferenceOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMInstance::GetReferenceOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetReferenceOwner");

	Params::USMInstance_GetReferenceOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetReferencedInstanceByGuid
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Guid                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMInstance::GetReferencedInstanceByGuid(struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetReferencedInstanceByGuid");

	Params::USMInstance_GetReferencedInstanceByGuid_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetPrimaryReferenceOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMInstance::GetPrimaryReferenceOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetPrimaryReferenceOwner");

	Params::USMInstance_GetPrimaryReferenceOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetNodeInstanceByGuid
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       Guid                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMNodeInstance*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMNodeInstance* USMInstance::GetNodeInstanceByGuid(struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetNodeInstanceByGuid");

	Params::USMInstance_GetNodeInstanceByGuid_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetNetworkInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class ISMStateMachineNetworkedInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class ISMStateMachineNetworkedInterface> USMInstance::GetNetworkInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetNetworkInterface");

	Params::USMInstance_GetNetworkInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetInputComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInputComponent* USMInstance::GetInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetInputComponent");

	Params::USMInstance_GetInputComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetGuidRedirectMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<struct FGuid, struct FGuid>   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<struct FGuid, struct FGuid> USMInstance::GetGuidRedirectMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetGuidRedirectMap");

	Params::USMInstance_GetGuidRedirectMap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* USMInstance::GetContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetContext");

	Params::USMInstance_GetContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetComponentOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateMachineComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateMachineComponent* USMInstance::GetComponentOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetComponentOwner");

	Params::USMInstance_GetComponentOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetAllTransitionInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*>TransitionInstances                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMInstance::GetAllTransitionInstances(TArray<class USMTransitionInstance*>* TransitionInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetAllTransitionInstances");

	Params::USMInstance_GetAllTransitionInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TransitionInstances != nullptr)
		*TransitionInstances = std::move(Parms.TransitionInstances);

}


// Function SMSystem.SMInstance.GetAllStateInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*>StateInstances                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMInstance::GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetAllStateInstances");

	Params::USMInstance_GetAllStateInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StateInstances != nullptr)
		*StateInstances = std::move(Parms.StateInstances);

}


// Function SMSystem.SMInstance.GetAllReferencedInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeChildren                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USMInstance*>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class USMInstance*> USMInstance::GetAllReferencedInstances(bool bIncludeChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetAllReferencedInstances");

	Params::USMInstance_GetAllReferencedInstances_Params Parms{};

	Parms.bIncludeChildren = bIncludeChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.GetAllActiveStateInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*>ActiveStateInstances                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMInstance::GetAllActiveStateInstances(TArray<class USMStateInstance_Base*>* ActiveStateInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetAllActiveStateInstances");

	Params::USMInstance_GetAllActiveStateInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActiveStateInstances != nullptr)
		*ActiveStateInstances = std::move(Parms.ActiveStateInstances);

}


// Function SMSystem.SMInstance.GetAllActiveStateGuids
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGuid>               ActiveGuids                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMInstance::GetAllActiveStateGuids(TArray<struct FGuid>* ActiveGuids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "GetAllActiveStateGuids");

	Params::USMInstance_GetAllActiveStateGuids_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActiveGuids != nullptr)
		*ActiveGuids = std::move(Parms.ActiveGuids);

}


// Function SMSystem.SMInstance.EvaluateTransitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::EvaluateTransitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "EvaluateTransitions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.EvaluateAndTakeTransitionChain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMTransitionInstance*       InFirstTransitionInstance                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::EvaluateAndTakeTransitionChain(class USMTransitionInstance* InFirstTransitionInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "EvaluateAndTakeTransitionChain");

	Params::USMInstance_EvaluateAndTakeTransitionChain_Params Parms{};

	Parms.InFirstTransitionInstance = InFirstTransitionInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.EvaluateAndFindTransitionChain
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USMTransitionInstance*       InFirstTransitionInstance                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USMTransitionInstance*>OutTransitionChain                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       OutDestinationState                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRequirePreviousStateActive                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::EvaluateAndFindTransitionChain(class USMTransitionInstance* InFirstTransitionInstance, TArray<class USMTransitionInstance*>* OutTransitionChain, class USMStateInstance_Base** OutDestinationState, bool bRequirePreviousStateActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "EvaluateAndFindTransitionChain");

	Params::USMInstance_EvaluateAndFindTransitionChain_Params Parms{};

	Parms.InFirstTransitionInstance = InFirstTransitionInstance;
	Parms.bRequirePreviousStateActive = bRequirePreviousStateActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransitionChain != nullptr)
		*OutTransitionChain = std::move(Parms.OutTransitionChain);

	if (OutDestinationState != nullptr)
		*OutDestinationState = Parms.OutDestinationState;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.ClearStateHistory
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::ClearStateHistory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "ClearStateHistory");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.ClearLoadedStates
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMInstance::ClearLoadedStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "ClearLoadedStates");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMInstance.CanTickOnManualUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::CanTickOnManualUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "CanTickOnManualUpdate");

	Params::USMInstance_CanTickOnManualUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.CanEverTick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::CanEverTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "CanEverTick");

	Params::USMInstance_CanEverTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.CanAutoManageTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::CanAutoManageTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "CanAutoManageTime");

	Params::USMInstance_CanAutoManageTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMInstance.AreInitialStatesSetFromLoad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMInstance::AreInitialStatesSetFromLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMInstance", "AreInitialStatesSetFromLoad");

	Params::USMInstance_AreInitialStatesSetFromLoad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMCompilerLog
// (None)

class UClass* USMCompilerLog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMCompilerLog");

	return Clss;
}


// SMCompilerLog SMSystem.Default__SMCompilerLog
// (Public, ClassDefaultObject, ArchetypeObject)

class USMCompilerLog* USMCompilerLog::GetDefaultObj()
{
	static class USMCompilerLog* Default = nullptr;

	if (!Default)
		Default = static_cast<USMCompilerLog*>(USMCompilerLog::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMCompilerLog.LogProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMNodeInstance*             NodeInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESMCompilerLogType      Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHighlight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSilent                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ArrayIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMCompilerLog::LogProperty(class FName PropertyName, class USMNodeInstance* NodeInstance, const class FString& Message, enum class ESMCompilerLogType Severity, bool bHighlight, bool bSilent, int32 ArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMCompilerLog", "LogProperty");

	Params::USMCompilerLog_LogProperty_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.NodeInstance = NodeInstance;
	Parms.Message = Message;
	Parms.Severity = Severity;
	Parms.bHighlight = bHighlight;
	Parms.bSilent = bSilent;
	Parms.ArrayIndex = ArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMCompilerLog.Log
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESMCompilerLogType      Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMCompilerLog::Log(enum class ESMCompilerLogType Severity, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMCompilerLog", "Log");

	Params::USMCompilerLog_Log_Params Parms{};

	Parms.Severity = Severity;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SMSystem.SMRuntimeSettings
// (None)

class UClass* USMRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMRuntimeSettings");

	return Clss;
}


// SMRuntimeSettings SMSystem.Default__SMRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USMRuntimeSettings* USMRuntimeSettings::GetDefaultObj()
{
	static class USMRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USMRuntimeSettings*>(USMRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMStateInstance
// (None)

class UClass* USMStateInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMStateInstance");

	return Clss;
}


// SMStateInstance SMSystem.Default__SMStateInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMStateInstance* USMStateInstance::GetDefaultObj()
{
	static class USMStateInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMStateInstance*>(USMStateInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMStateInstance.RemoveStateFromStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StackIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance::RemoveStateFromStack(int32 StackIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "RemoveStateFromStack");

	Params::USMStateInstance_RemoveStateFromStack_Params Parms{};

	Parms.StackIndex = StackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance.OnStateShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateInstance::OnStateShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "OnStateShutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance.OnStateInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateInstance::OnStateInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "OnStateInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance.GetStateStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USMStateInstance::GetStateStackCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetStateStackCount");

	Params::USMStateInstance_GetStateStackCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance.GetStateInStackByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USMStateInstance>StateClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeChildren                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance::GetStateInStackByClass(TSubclassOf<class USMStateInstance> StateClass, bool bIncludeChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetStateInStackByClass");

	Params::USMStateInstance_GetStateInStackByClass_Params Parms{};

	Parms.StateClass = StateClass;
	Parms.bIncludeChildren = bIncludeChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance.GetStateInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance::GetStateInStack(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetStateInStack");

	Params::USMStateInstance_GetStateInStack_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance.GetStateIndexInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       StateInstance                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USMStateInstance::GetStateIndexInStack(class USMStateInstance_Base* StateInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetStateIndexInStack");

	Params::USMStateInstance_GetStateIndexInStack_Params Parms{};

	Parms.StateInstance = StateInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance.GetStackOwnerInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateInstance::GetStackOwnerInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetStackOwnerInstance");

	Params::USMStateInstance_GetStackOwnerInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateInstance.GetAllStateStackInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*>StateStackInstances                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMStateInstance::GetAllStateStackInstances(TArray<class USMStateInstance_Base*>* StateStackInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetAllStateStackInstances");

	Params::USMStateInstance_GetAllStateStackInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StateStackInstances != nullptr)
		*StateStackInstances = std::move(Parms.StateStackInstances);

}


// Function SMSystem.SMStateInstance.GetAllStatesInStackOfClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USMStateInstance>StateClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USMStateInstance_Base*>StateStackInstances                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIncludeChildren                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateInstance::GetAllStatesInStackOfClass(TSubclassOf<class USMStateInstance> StateClass, TArray<class USMStateInstance_Base*>* StateStackInstances, bool bIncludeChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "GetAllStatesInStackOfClass");

	Params::USMStateInstance_GetAllStatesInStackOfClass_Params Parms{};

	Parms.StateClass = StateClass;
	Parms.bIncludeChildren = bIncludeChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StateStackInstances != nullptr)
		*StateStackInstances = std::move(Parms.StateStackInstances);

}


// Function SMSystem.SMStateInstance.ClearStateStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USMStateInstance::ClearStateStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "ClearStateStack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateInstance.AddStateToStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class USMStateInstance>StateClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StackIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance* USMStateInstance::AddStateToStack(TSubclassOf<class USMStateInstance> StateClass, int32 StackIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateInstance", "AddStateToStack");

	Params::USMStateInstance_AddStateToStack_Params Parms{};

	Parms.StateClass = StateClass;
	Parms.StackIndex = StackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMEntryStateInstance
// (None)

class UClass* USMEntryStateInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMEntryStateInstance");

	return Clss;
}


// SMEntryStateInstance SMSystem.Default__SMEntryStateInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMEntryStateInstance* USMEntryStateInstance::GetDefaultObj()
{
	static class USMEntryStateInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMEntryStateInstance*>(USMEntryStateInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMAnyStateInstance
// (None)

class UClass* USMAnyStateInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMAnyStateInstance");

	return Clss;
}


// SMAnyStateInstance SMSystem.Default__SMAnyStateInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMAnyStateInstance* USMAnyStateInstance::GetDefaultObj()
{
	static class USMAnyStateInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMAnyStateInstance*>(USMAnyStateInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class SMSystem.SMStateMachineComponent
// (None)

class UClass* USMStateMachineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMStateMachineComponent");

	return Clss;
}


// SMStateMachineComponent SMSystem.Default__SMStateMachineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USMStateMachineComponent* USMStateMachineComponent::GetDefaultObj()
{
	static class USMStateMachineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USMStateMachineComponent*>(USMStateMachineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMStateMachineComponent.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Update");

	Params::USMStateMachineComponent_Update_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Stop
// (Native, Public, BlueprintCallable)
// Parameters:

void USMStateMachineComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Start
// (Native, Public, BlueprintCallable)
// Parameters:

void USMStateMachineComponent::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Start");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Shutdown
// (Native, Public, BlueprintCallable)
// Parameters:

void USMStateMachineComponent::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Shutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SetCanInstanceNetworkTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanEverTick                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SetCanInstanceNetworkTick(bool bCanEverTick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SetCanInstanceNetworkTick");

	Params::USMStateMachineComponent_SetCanInstanceNetworkTick_Params Parms{};

	Parms.bCanEverTick = bCanEverTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_Update
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_Update");

	Params::USMStateMachineComponent_SERVER_Update_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_TakeTransitions
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// TArray<struct FSMTransitionTransaction>TransitionTransactions                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_TakeTransitions(TArray<struct FSMTransitionTransaction>& TransitionTransactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_TakeTransitions");

	Params::USMStateMachineComponent_SERVER_TakeTransitions_Params Parms{};

	Parms.TransitionTransactions = TransitionTransactions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_Stop
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_Stop(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_Stop");

	Params::USMStateMachineComponent_SERVER_Stop_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_Start
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_Start(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_Start");

	Params::USMStateMachineComponent_SERVER_Start_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_Shutdown
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_Shutdown(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_Shutdown");

	Params::USMStateMachineComponent_SERVER_Shutdown_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_RequestFullSync
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// bool                               bForceFullRefresh                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_RequestFullSync(bool bForceFullRefresh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_RequestFullSync");

	Params::USMStateMachineComponent_SERVER_RequestFullSync_Params Parms{};

	Parms.bForceFullRefresh = bForceFullRefresh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_Initialize
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMInitializeTransaction    Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_Initialize(struct FSMInitializeTransaction& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_Initialize");

	Params::USMStateMachineComponent_SERVER_Initialize_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_FullSync
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// struct FSMFullSyncTransaction      FullSyncTransaction                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_FullSync(struct FSMFullSyncTransaction& FullSyncTransaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_FullSync");

	Params::USMStateMachineComponent_SERVER_FullSync_Params Parms{};

	Parms.FullSyncTransaction = FullSyncTransaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.SERVER_ActivateStates
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// TArray<struct FSMActivateStateTransaction>StateTransactions                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::SERVER_ActivateStates(TArray<struct FSMActivateStateTransaction>& StateTransactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "SERVER_ActivateStates");

	Params::USMStateMachineComponent_SERVER_ActivateStates_Params Parms{};

	Parms.StateTransactions = StateTransactions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Restart
// (Native, Public, BlueprintCallable)
// Parameters:

void USMStateMachineComponent::Restart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Restart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.REP_OnInstanceLoaded
// (Native, Protected)
// Parameters:

void USMStateMachineComponent::REP_OnInstanceLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "REP_OnInstanceLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.OnPostInitialize
// (Event, Protected, BlueprintEvent)
// Parameters:

void USMStateMachineComponent::OnPostInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "OnPostInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SMSystem.SMStateMachineComponent.OnContextPawnControllerChanged
// (Final, Native, Private)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                 NewController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::OnContextPawnControllerChanged(class APawn* Pawn, class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "OnContextPawnControllerChanged");

	Params::USMStateMachineComponent_OnContextPawnControllerChanged_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.NewController = NewController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.MULTICAST_TakeTransitions
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FSMTransitionTransaction>Transactions                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::MULTICAST_TakeTransitions(TArray<struct FSMTransitionTransaction>& Transactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "MULTICAST_TakeTransitions");

	Params::USMStateMachineComponent_MULTICAST_TakeTransitions_Params Parms{};

	Parms.Transactions = Transactions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.MULTICAST_Stop
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::MULTICAST_Stop(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "MULTICAST_Stop");

	Params::USMStateMachineComponent_MULTICAST_Stop_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.MULTICAST_Start
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::MULTICAST_Start(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "MULTICAST_Start");

	Params::USMStateMachineComponent_MULTICAST_Start_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.MULTICAST_Shutdown
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::MULTICAST_Shutdown(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "MULTICAST_Shutdown");

	Params::USMStateMachineComponent_MULTICAST_Shutdown_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.MULTICAST_FullSync
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FSMFullSyncTransaction      FullSyncTransaction                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::MULTICAST_FullSync(struct FSMFullSyncTransaction& FullSyncTransaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "MULTICAST_FullSync");

	Params::USMStateMachineComponent_MULTICAST_FullSync_Params Parms{};

	Parms.FullSyncTransaction = FullSyncTransaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.MULTICAST_ActivateStates
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<struct FSMActivateStateTransaction>StateTransactions                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::MULTICAST_ActivateStates(TArray<struct FSMActivateStateTransaction>& StateTransactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "MULTICAST_ActivateStates");

	Params::USMStateMachineComponent_MULTICAST_ActivateStates_Params Parms{};

	Parms.StateTransactions = StateTransactions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.K2_InitializeAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::K2_InitializeAsync(class UObject* Context, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "K2_InitializeAsync");

	Params::USMStateMachineComponent_K2_InitializeAsync_Params Parms{};

	Parms.Context = Context;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.IsStateMachineActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateMachineComponent::IsStateMachineActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "IsStateMachineActive");

	Params::USMStateMachineComponent_IsStateMachineActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineComponent.IsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateMachineComponent::IsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "IsInitialized");

	Params::USMStateMachineComponent_IsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineUpdated
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineUpdated(class USMInstance* Instance, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineUpdated");

	Params::USMStateMachineComponent_Internal_OnStateMachineUpdated_Params Parms{};

	Parms.Instance = Instance;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineTransitionTaken
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSMTransitionInfo           Transition                                                       (Parm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineTransitionTaken(class USMInstance* Instance, const struct FSMTransitionInfo& Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineTransitionTaken");

	Params::USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Params Parms{};

	Parms.Instance = Instance;
	Parms.Transition = Transition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStopped
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineStopped(class USMInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStopped");

	Params::USMStateMachineComponent_Internal_OnStateMachineStopped_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateStarted
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSMStateInfo                State                                                            (Parm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineStateStarted(class USMInstance* Instance, const struct FSMStateInfo& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStateStarted");

	Params::USMStateMachineComponent_Internal_OnStateMachineStateStarted_Params Parms{};

	Parms.Instance = Instance;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStateChanged
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSMStateInfo                ToState                                                          (Parm, NativeAccessSpecifierPublic)
// struct FSMStateInfo                FromState                                                        (Parm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineStateChanged(class USMInstance* Instance, const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStateChanged");

	Params::USMStateMachineComponent_Internal_OnStateMachineStateChanged_Params Parms{};

	Parms.Instance = Instance;
	Parms.ToState = ToState;
	Parms.FromState = FromState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineStarted
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineStarted(class USMInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStarted");

	Params::USMStateMachineComponent_Internal_OnStateMachineStarted_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnStateMachineShutdown
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnStateMachineShutdown(class USMInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineShutdown");

	Params::USMStateMachineComponent_Internal_OnStateMachineShutdown_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnReplicatedInstanceInitialized
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnReplicatedInstanceInitialized(class USMInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnReplicatedInstanceInitialized");

	Params::USMStateMachineComponent_Internal_OnReplicatedInstanceInitialized_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Internal_OnInstanceInitializedAsync
// (Final, Native, Protected)
// Parameters:
// class USMInstance*                 Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Internal_OnInstanceInitializedAsync(class USMInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Internal_OnInstanceInitializedAsync");

	Params::USMStateMachineComponent_Internal_OnInstanceInitializedAsync_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.Initialize
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::Initialize(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "Initialize");

	Params::USMStateMachineComponent_Initialize_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.GetTopMostParentActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* USMStateMachineComponent::GetTopMostParentActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "GetTopMostParentActor");

	Params::USMStateMachineComponent_GetTopMostParentActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineComponent.GetInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMStateMachineComponent::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "GetInstance");

	Params::USMStateMachineComponent_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineComponent.GetContextForInitialization
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* USMStateMachineComponent::GetContextForInitialization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "GetContextForInitialization");

	Params::USMStateMachineComponent_GetContextForInitialization_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineComponent.CopySettingsFromOtherComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USMStateMachineComponent*    OtherComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CopySettingsFromOtherComponent(class USMStateMachineComponent* OtherComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CopySettingsFromOtherComponent");

	Params::USMStateMachineComponent_CopySettingsFromOtherComponent_Params Parms{};

	Parms.OtherComponent = OtherComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.CLIENT_TakeTransitions
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<struct FSMTransitionTransaction>Transactions                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CLIENT_TakeTransitions(TArray<struct FSMTransitionTransaction>& Transactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CLIENT_TakeTransitions");

	Params::USMStateMachineComponent_CLIENT_TakeTransitions_Params Parms{};

	Parms.Transactions = Transactions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.CLIENT_Stop
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CLIENT_Stop(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CLIENT_Stop");

	Params::USMStateMachineComponent_CLIENT_Stop_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.CLIENT_Start
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CLIENT_Start(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CLIENT_Start");

	Params::USMStateMachineComponent_CLIENT_Start_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.CLIENT_Shutdown
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMTransaction_Base         Transaction                                                      (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CLIENT_Shutdown(struct FSMTransaction_Base& Transaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CLIENT_Shutdown");

	Params::USMStateMachineComponent_CLIENT_Shutdown_Params Parms{};

	Parms.Transaction = Transaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.CLIENT_FullSync
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// struct FSMFullSyncTransaction      FullSyncTransaction                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CLIENT_FullSync(struct FSMFullSyncTransaction& FullSyncTransaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CLIENT_FullSync");

	Params::USMStateMachineComponent_CLIENT_FullSync_Params Parms{};

	Parms.FullSyncTransaction = FullSyncTransaction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineComponent.CLIENT_ActivateStates
// (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
// TArray<struct FSMActivateStateTransaction>StateTransactions                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USMStateMachineComponent::CLIENT_ActivateStates(TArray<struct FSMActivateStateTransaction>& StateTransactions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineComponent", "CLIENT_ActivateStates");

	Params::USMStateMachineComponent_CLIENT_ActivateStates_Params Parms{};

	Parms.StateTransactions = StateTransactions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SMSystem.SMStateMachineInstance
// (None)

class UClass* USMStateMachineInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMStateMachineInstance");

	return Clss;
}


// SMStateMachineInstance SMSystem.Default__SMStateMachineInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMStateMachineInstance* USMStateMachineInstance::GetDefaultObj()
{
	static class USMStateMachineInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMStateMachineInstance*>(USMStateMachineInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMStateMachineInstance.SetWaitForEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineInstance::SetWaitForEndState(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "SetWaitForEndState");

	Params::USMStateMachineInstance_SetWaitForEndState_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.SetReuseIfNotEndState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineInstance::SetReuseIfNotEndState(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "SetReuseIfNotEndState");

	Params::USMStateMachineInstance_SetReuseIfNotEndState_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.SetReuseCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMStateMachineInstance::SetReuseCurrentState(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "SetReuseCurrentState");

	Params::USMStateMachineInstance_SetReuseCurrentState_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.OnStateShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateMachineInstance::OnStateShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "OnStateShutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.OnStateMachineCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateMachineInstance::OnStateMachineCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "OnStateMachineCompleted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.OnStateInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateMachineInstance::OnStateInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "OnStateInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.OnEndStateReached
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMStateMachineInstance::OnEndStateReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "OnEndStateReached");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMStateMachineInstance.IsStateMachineInEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateMachineInstance::IsStateMachineInEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "IsStateMachineInEndState");

	Params::USMStateMachineInstance_IsStateMachineInEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineInstance.GetWaitForEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateMachineInstance::GetWaitForEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetWaitForEndState");

	Params::USMStateMachineInstance_GetWaitForEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineInstance.GetStateMachineReference
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMStateMachineInstance::GetStateMachineReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetStateMachineReference");

	Params::USMStateMachineInstance_GetStateMachineReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineInstance.GetReuseIfNotEndState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateMachineInstance::GetReuseIfNotEndState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetReuseIfNotEndState");

	Params::USMStateMachineInstance_GetReuseIfNotEndState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineInstance.GetReuseCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMStateMachineInstance::GetReuseCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetReuseCurrentState");

	Params::USMStateMachineInstance_GetReuseCurrentState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineInstance.GetEntryStates
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*>EntryStates                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMStateMachineInstance::GetEntryStates(TArray<class USMStateInstance_Base*>* EntryStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetEntryStates");

	Params::USMStateMachineInstance_GetEntryStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EntryStates != nullptr)
		*EntryStates = std::move(Parms.EntryStates);

}


// Function SMSystem.SMStateMachineInstance.GetContainedStateByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      StateName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMStateMachineInstance::GetContainedStateByName(const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetContainedStateByName");

	Params::USMStateMachineInstance_GetContainedStateByName_Params Parms{};

	Parms.StateName = StateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMStateMachineInstance.GetAllStateInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*>StateInstances                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMStateMachineInstance::GetAllStateInstances(TArray<class USMStateInstance_Base*>* StateInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetAllStateInstances");

	Params::USMStateMachineInstance_GetAllStateInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StateInstances != nullptr)
		*StateInstances = std::move(Parms.StateInstances);

}


// Function SMSystem.SMStateMachineInstance.GetActiveStates
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMStateInstance_Base*>ActiveStates                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMStateMachineInstance::GetActiveStates(TArray<class USMStateInstance_Base*>* ActiveStates)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMStateMachineInstance", "GetActiveStates");

	Params::USMStateMachineInstance_GetActiveStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActiveStates != nullptr)
		*ActiveStates = std::move(Parms.ActiveStates);

}


// Class SMSystem.SMTransitionInstance
// (None)

class UClass* USMTransitionInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMTransitionInstance");

	return Clss;
}


// SMTransitionInstance SMSystem.Default__SMTransitionInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USMTransitionInstance* USMTransitionInstance::GetDefaultObj()
{
	static class USMTransitionInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USMTransitionInstance*>(USMTransitionInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMTransitionInstance.SetRunParallel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::SetRunParallel(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "SetRunParallel");

	Params::USMTransitionInstance_SetRunParallel_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.SetPriorityOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::SetPriorityOrder(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "SetPriorityOrder");

	Params::USMTransitionInstance_SetPriorityOrder_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.SetEvalIfNextStateActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::SetEvalIfNextStateActive(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "SetEvalIfNextStateActive");

	Params::USMTransitionInstance_SetEvalIfNextStateActive_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.SetCanEvalWithStartState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::SetCanEvalWithStartState(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "SetCanEvalWithStartState");

	Params::USMTransitionInstance_SetCanEvalWithStartState_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.SetCanEvaluateFromEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::SetCanEvaluateFromEvent(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "SetCanEvaluateFromEvent");

	Params::USMTransitionInstance_SetCanEvaluateFromEvent_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.SetCanEvaluate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::SetCanEvaluate(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "SetCanEvaluate");

	Params::USMTransitionInstance_SetCanEvaluate_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.OnTransitionShutdown
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMTransitionInstance::OnTransitionShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "OnTransitionShutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.OnTransitionInitialized
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMTransitionInstance::OnTransitionInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "OnTransitionInitialized");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.OnTransitionEntered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USMTransitionInstance::OnTransitionEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "OnTransitionEntered");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SMSystem.SMTransitionInstance.IsTransitionFromLinkState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::IsTransitionFromLinkState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "IsTransitionFromLinkState");

	Params::USMTransitionInstance_IsTransitionFromLinkState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.IsTransitionFromAnyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::IsTransitionFromAnyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "IsTransitionFromAnyState");

	Params::USMTransitionInstance_IsTransitionFromAnyState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetTransitionStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USMTransitionInstance::GetTransitionStackCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetTransitionStackCount");

	Params::USMTransitionInstance_GetTransitionStackCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetTransitionInStackByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USMTransitionInstance>TransitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeChildren                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMTransitionInstance::GetTransitionInStackByClass(TSubclassOf<class USMTransitionInstance> TransitionClass, bool bIncludeChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetTransitionInStackByClass");

	Params::USMTransitionInstance_GetTransitionInStackByClass_Params Parms{};

	Parms.TransitionClass = TransitionClass;
	Parms.bIncludeChildren = bIncludeChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetTransitionInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMTransitionInstance::GetTransitionInStack(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetTransitionInStack");

	Params::USMTransitionInstance_GetTransitionInStack_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetTransitionInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSMTransitionInfo           Transition                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void USMTransitionInstance::GetTransitionInfo(struct FSMTransitionInfo* Transition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetTransitionInfo");

	Params::USMTransitionInstance_GetTransitionInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Transition != nullptr)
		*Transition = std::move(Parms.Transition);

}


// Function SMSystem.SMTransitionInstance.GetTransitionIndexInStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*       TransitionInstance                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USMTransitionInstance::GetTransitionIndexInStack(class USMTransitionInstance* TransitionInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetTransitionIndexInStack");

	Params::USMTransitionInstance_GetTransitionIndexInStack_Params Parms{};

	Parms.TransitionInstance = TransitionInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetStackOwnerInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMTransitionInstance*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMTransitionInstance* USMTransitionInstance::GetStackOwnerInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetStackOwnerInstance");

	Params::USMTransitionInstance_GetStackOwnerInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetSourceStateForActiveTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMTransitionInstance::GetSourceStateForActiveTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetSourceStateForActiveTransition");

	Params::USMTransitionInstance_GetSourceStateForActiveTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetServerTimestamp
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime USMTransitionInstance::GetServerTimestamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetServerTimestamp");

	Params::USMTransitionInstance_GetServerTimestamp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetRunParallel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::GetRunParallel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetRunParallel");

	Params::USMTransitionInstance_GetRunParallel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetPriorityOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USMTransitionInstance::GetPriorityOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetPriorityOrder");

	Params::USMTransitionInstance_GetPriorityOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetPreviousStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMTransitionInstance::GetPreviousStateInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetPreviousStateInstance");

	Params::USMTransitionInstance_GetPreviousStateInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetNextStateInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMTransitionInstance::GetNextStateInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetNextStateInstance");

	Params::USMTransitionInstance_GetNextStateInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetEvalIfNextStateActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::GetEvalIfNextStateActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetEvalIfNextStateActive");

	Params::USMTransitionInstance_GetEvalIfNextStateActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetDestinationStateForActiveTransition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USMStateInstance_Base*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMStateInstance_Base* USMTransitionInstance::GetDestinationStateForActiveTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetDestinationStateForActiveTransition");

	Params::USMTransitionInstance_GetDestinationStateForActiveTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetCanEvalWithStartState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::GetCanEvalWithStartState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetCanEvalWithStartState");

	Params::USMTransitionInstance_GetCanEvalWithStartState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetCanEvaluateFromEvent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::GetCanEvaluateFromEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetCanEvaluateFromEvent");

	Params::USMTransitionInstance_GetCanEvaluateFromEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetCanEvaluate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::GetCanEvaluate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetCanEvaluate");

	Params::USMTransitionInstance_GetCanEvaluate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.GetAllTransitionStackInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USMTransitionInstance*>TransitionStackInstances                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USMTransitionInstance::GetAllTransitionStackInstances(TArray<class USMTransitionInstance*>* TransitionStackInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetAllTransitionStackInstances");

	Params::USMTransitionInstance_GetAllTransitionStackInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TransitionStackInstances != nullptr)
		*TransitionStackInstances = std::move(Parms.TransitionStackInstances);

}


// Function SMSystem.SMTransitionInstance.GetAllTransitionsInStackOfClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USMTransitionInstance>TransitionClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USMTransitionInstance*>TransitionStackInstances                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bIncludeChildren                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USMTransitionInstance::GetAllTransitionsInStackOfClass(TSubclassOf<class USMTransitionInstance> TransitionClass, TArray<class USMTransitionInstance*>* TransitionStackInstances, bool bIncludeChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "GetAllTransitionsInStackOfClass");

	Params::USMTransitionInstance_GetAllTransitionsInStackOfClass_Params Parms{};

	Parms.TransitionClass = TransitionClass;
	Parms.bIncludeChildren = bIncludeChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TransitionStackInstances != nullptr)
		*TransitionStackInstances = std::move(Parms.TransitionStackInstances);

}


// Function SMSystem.SMTransitionInstance.EvaluateFromManuallyBoundEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::EvaluateFromManuallyBoundEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "EvaluateFromManuallyBoundEvent");

	Params::USMTransitionInstance_EvaluateFromManuallyBoundEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.DoesTransitionPass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::DoesTransitionPass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "DoesTransitionPass");

	Params::USMTransitionInstance_DoesTransitionPass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMTransitionInstance.CanEnterTransition
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USMTransitionInstance::CanEnterTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMTransitionInstance", "CanEnterTransition");

	Params::USMTransitionInstance_CanEnterTransition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SMSystem.SMBlueprintUtils
// (None)

class UClass* USMBlueprintUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SMBlueprintUtils");

	return Clss;
}


// SMBlueprintUtils SMSystem.Default__SMBlueprintUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class USMBlueprintUtils* USMBlueprintUtils::GetDefaultObj()
{
	static class USMBlueprintUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<USMBlueprintUtils*>(USMBlueprintUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstancePure
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class USMInstance>     StateMachineClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitializeNow                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMBlueprintUtils::K2_CreateStateMachineInstancePure(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, bool bInitializeNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMBlueprintUtils", "K2_CreateStateMachineInstancePure");

	Params::USMBlueprintUtils_K2_CreateStateMachineInstancePure_Params Parms{};

	Parms.StateMachineClass = StateMachineClass;
	Parms.Context = Context;
	Parms.bInitializeNow = bInitializeNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstanceAsync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class USMInstance>     StateMachineClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMBlueprintUtils::K2_CreateStateMachineInstanceAsync(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMBlueprintUtils", "K2_CreateStateMachineInstanceAsync");

	Params::USMBlueprintUtils_K2_CreateStateMachineInstanceAsync_Params Parms{};

	Parms.StateMachineClass = StateMachineClass;
	Parms.Context = Context;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMBlueprintUtils.K2_CreateStateMachineInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class USMInstance>     StateMachineClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitializeNow                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMBlueprintUtils::K2_CreateStateMachineInstance(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, bool bInitializeNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMBlueprintUtils", "K2_CreateStateMachineInstance");

	Params::USMBlueprintUtils_K2_CreateStateMachineInstance_Params Parms{};

	Parms.StateMachineClass = StateMachineClass;
	Parms.Context = Context;
	Parms.bInitializeNow = bInitializeNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class USMInstance>     StateMachineClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMInstance*                 Template                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitializeNow                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USMInstance*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USMInstance* USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(TSubclassOf<class USMInstance> StateMachineClass, class UObject* Context, class USMInstance* Template, bool bInitializeNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SMBlueprintUtils", "CreateStateMachineInstanceFromTemplate");

	Params::USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Params Parms{};

	Parms.StateMachineClass = StateMachineClass;
	Parms.Context = Context;
	Parms.Template = Template;
	Parms.bInitializeNow = bInitializeNow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


