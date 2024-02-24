#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SubstanceCore.SubstanceGraphInstance
// (None)

class UClass* USubstanceGraphInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubstanceGraphInstance");

	return Clss;
}


// SubstanceGraphInstance SubstanceCore.Default__SubstanceGraphInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class USubstanceGraphInstance* USubstanceGraphInstance::GetDefaultObj()
{
	static class USubstanceGraphInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<USubstanceGraphInstance*>(USubstanceGraphInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::SetInputString(const class FString& Identifier, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "SetInputString");

	Params::USubstanceGraphInstance_SetInputString_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InputValues                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::SetInputInt(const class FString& Identifier, TArray<int32>& InputValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "SetInputInt");

	Params::USubstanceGraphInstance_SetInputInt_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.InputValues = InputValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubstanceGraphInstance::SetInputImg(const class FString& InputName, class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "SetInputImg");

	Params::USubstanceGraphInstance_SetInputImg_Params Parms{};

	Parms.InputName = InputName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      InputValues                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::SetInputFloat(const class FString& Identifier, TArray<float>& InputValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "SetInputFloat");

	Params::USubstanceGraphInstance_SetInputFloat_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.InputValues = InputValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::SetInputColor(const class FString& Identifier, struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "SetInputColor");

	Params::USubstanceGraphInstance_SetInputColor_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.Color = Color;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bool                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::SetInputBool(const class FString& Identifier, bool Bool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "SetInputBool");

	Params::USubstanceGraphInstance_SetInputBool_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.Bool = Bool;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.RenderSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USubstanceGraphInstance::RenderSync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "RenderSync");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.GetOutputNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USubstanceGraphInstance::GetOutputNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetOutputNames");

	Params::USubstanceGraphInstance_GetOutputNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubstanceIntInputDesc      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetIntInputDesc");

	Params::USubstanceGraphInstance_GetIntInputDesc_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSubstanceInstanceDesc      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInstanceDesc");

	Params::USubstanceGraphInstance_GetInstanceDesc_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InputName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESubstanceInputType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESubstanceInputType USubstanceGraphInstance::GetInputType(const class FString& InputName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputType");

	Params::USubstanceGraphInstance_GetInputType_Params Parms{};

	Parms.InputName = InputName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USubstanceGraphInstance::GetInputString(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputString");

	Params::USubstanceGraphInstance_GetInputString_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> USubstanceGraphInstance::GetInputNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputNames");

	Params::USubstanceGraphInstance_GetInputNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> USubstanceGraphInstance::GetInputInt(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputInt");

	Params::USubstanceGraphInstance_GetInputInt_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> USubstanceGraphInstance::GetInputFloat(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputFloat");

	Params::USubstanceGraphInstance_GetInputFloat_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor USubstanceGraphInstance::GetInputColor(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputColor");

	Params::USubstanceGraphInstance_GetInputColor_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USubstanceGraphInstance::GetInputBool(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetInputBool");

	Params::USubstanceGraphInstance_GetInputBool_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubstanceFloatInputDesc    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const class FString& Identifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetFloatInputDesc");

	Params::USubstanceGraphInstance_GetFloatInputDesc_Params Parms{};

	Parms.Identifier = Identifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetDynamicMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterial*                   InParentMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* USubstanceGraphInstance::GetDynamicMaterialInstance(class FName Name, class UMaterial* InParentMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetDynamicMaterialInstance");

	Params::USubstanceGraphInstance_GetDynamicMaterialInstance_Params Parms{};

	Parms.Name = Name;
	Parms.InParentMaterial = InParentMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.GetConstantMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceConstant*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceConstant* USubstanceGraphInstance::GetConstantMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "GetConstantMaterial");

	Params::USubstanceGraphInstance_GetConstantMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.EnableOutput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Identifier                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::EnableOutput(const class FString& Identifier, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "EnableOutput");

	Params::USubstanceGraphInstance_EnableOutput_Params Parms{};

	Parms.Identifier = Identifier;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.Duplicate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USubstanceGraphInstance* USubstanceGraphInstance::Duplicate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "Duplicate");

	Params::USubstanceGraphInstance_Duplicate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceGraphInstance.CreateOutputs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USubstanceGraphInstance::CreateOutputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "CreateOutputs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceGraphInstance.CreateMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PackageName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterial*                   ParentMaterial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceGraphInstance::CreateMaterial(const class FString& PackageName, class UMaterial* ParentMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceGraphInstance", "CreateMaterial");

	Params::USubstanceGraphInstance_CreateMaterial_Params Parms{};

	Parms.PackageName = PackageName;
	Parms.ParentMaterial = ParentMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SubstanceCore.SubstanceInstanceFactory
// (None)

class UClass* USubstanceInstanceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubstanceInstanceFactory");

	return Clss;
}


// SubstanceInstanceFactory SubstanceCore.Default__SubstanceInstanceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class USubstanceInstanceFactory* USubstanceInstanceFactory::GetDefaultObj()
{
	static class USubstanceInstanceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<USubstanceInstanceFactory*>(USubstanceInstanceFactory::StaticClass()->DefaultObject);

	return Default;
}


// Function SubstanceCore.SubstanceInstanceFactory.GetGraphInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class USubstanceGraphInstance*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class USubstanceGraphInstance*> USubstanceInstanceFactory::GetGraphInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceInstanceFactory", "GetGraphInstances");

	Params::USubstanceInstanceFactory_GetGraphInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceInstanceFactory.GetGraphDescs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSubstanceGraphDesc> ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSubstanceGraphDesc> USubstanceInstanceFactory::GetGraphDescs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceInstanceFactory", "GetGraphDescs");

	Params::USubstanceInstanceFactory_GetGraphDescs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceInstanceFactory.CreateGraphInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSubstanceGraphDesc         GraphDesc                                                        (Parm, NativeAccessSpecifierPublic)
// class FString                      PackageName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USubstanceGraphInstance* USubstanceInstanceFactory::CreateGraphInstance(const struct FSubstanceGraphDesc& GraphDesc, const class FString& PackageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceInstanceFactory", "CreateGraphInstance");

	Params::USubstanceInstanceFactory_CreateGraphInstance_Params Parms{};

	Parms.GraphDesc = GraphDesc;
	Parms.PackageName = PackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SubstanceCore.SubstanceOutputData
// (None)

class UClass* USubstanceOutputData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubstanceOutputData");

	return Clss;
}


// SubstanceOutputData SubstanceCore.Default__SubstanceOutputData
// (Public, ClassDefaultObject, ArchetypeObject)

class USubstanceOutputData* USubstanceOutputData::GetDefaultObj()
{
	static class USubstanceOutputData* Default = nullptr;

	if (!Default)
		Default = static_cast<USubstanceOutputData*>(USubstanceOutputData::StaticClass()->DefaultObject);

	return Default;
}


// Class SubstanceCore.SubstanceSettings
// (None)

class UClass* USubstanceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubstanceSettings");

	return Clss;
}


// SubstanceSettings SubstanceCore.Default__SubstanceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USubstanceSettings* USubstanceSettings::GetDefaultObj()
{
	static class USubstanceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USubstanceSettings*>(USubstanceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class SubstanceCore.SubstanceTexture2D
// (None)

class UClass* USubstanceTexture2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubstanceTexture2D");

	return Clss;
}


// SubstanceTexture2D SubstanceCore.Default__SubstanceTexture2D
// (Public, ClassDefaultObject, ArchetypeObject)

class USubstanceTexture2D* USubstanceTexture2D::GetDefaultObj()
{
	static class USubstanceTexture2D* Default = nullptr;

	if (!Default)
		Default = static_cast<USubstanceTexture2D*>(USubstanceTexture2D::StaticClass()->DefaultObject);

	return Default;
}


// Class SubstanceCore.SubstanceUtility
// (None)

class UClass* USubstanceUtility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubstanceUtility");

	return Clss;
}


// SubstanceUtility SubstanceCore.Default__SubstanceUtility
// (Public, ClassDefaultObject, ArchetypeObject)

class USubstanceUtility* USubstanceUtility::GetDefaultObj()
{
	static class USubstanceUtility* Default = nullptr;

	if (!Default)
		Default = static_cast<USubstanceUtility*>(USubstanceUtility::StaticClass()->DefaultObject);

	return Default;
}


// Function SubstanceCore.SubstanceUtility.SyncRendering
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     InstancesToRender                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceUtility::SyncRendering(class USubstanceGraphInstance* InstancesToRender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "SyncRendering");

	Params::USubstanceUtility_SyncRendering_Params Parms{};

	Parms.InstancesToRender = InstancesToRender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceUtility::SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "SetGraphInstanceOutputSizeInt");

	Params::USubstanceUtility_SetGraphInstanceOutputSizeInt_Params Parms{};

	Parms.GraphInstance = GraphInstance;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESubstanceTextureSize   Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESubstanceTextureSize   Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceUtility::SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, enum class ESubstanceTextureSize Width, enum class ESubstanceTextureSize Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "SetGraphInstanceOutputSize");

	Params::USubstanceUtility_SetGraphInstanceOutputSize_Params Parms{};

	Parms.GraphInstance = GraphInstance;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.ResetInputParameters
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceUtility::ResetInputParameters(class USubstanceGraphInstance* GraphInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "ResetInputParameters");

	Params::USubstanceUtility_ResetInputParameters_Params Parms{};

	Parms.GraphInstance = GraphInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> USubstanceUtility::GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "GetSubstanceTextures");

	Params::USubstanceUtility_GetSubstanceTextures_Params Parms{};

	Parms.GraphInstance = GraphInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.GetSubstances
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class USubstanceGraphInstance*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class USubstanceGraphInstance*> USubstanceUtility::GetSubstances(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "GetSubstances");

	Params::USubstanceUtility_GetSubstances_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubstanceUtility::GetSubstanceLoadingProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "GetSubstanceLoadingProgress");

	Params::USubstanceUtility_GetSubstanceLoadingProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.GetSubstanceIncludedMaterials
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UMaterial*>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMaterial*> USubstanceUtility::GetSubstanceIncludedMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "GetSubstanceIncludedMaterials");

	Params::USubstanceUtility_GetSubstanceIncludedMaterials_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.GetGraphName
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USubstanceUtility::GetGraphName(class USubstanceGraphInstance* GraphInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "GetGraphName");

	Params::USubstanceUtility_GetGraphName_Params Parms{};

	Parms.GraphInstance = GraphInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.GetFactoryName
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USubstanceUtility::GetFactoryName(class USubstanceGraphInstance* GraphInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "GetFactoryName");

	Params::USubstanceUtility_GetFactoryName_Params Parms{};

	Parms.GraphInstance = GraphInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      OutputIndices                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void USubstanceUtility::EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, const TArray<int32>& OutputIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "EnableInstanceOutputs");

	Params::USubstanceUtility_EnableInstanceOutputs_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GraphInstance = GraphInstance;
	Parms.OutputIndices = OutputIndices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USubstanceGraphInstance* USubstanceUtility::DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "DuplicateGraphInstance");

	Params::USubstanceUtility_DuplicateGraphInstance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GraphInstance = GraphInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     GraphInstance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      OutputIndices                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void USubstanceUtility::DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, const TArray<int32>& OutputIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "DisableInstanceOutputs");

	Params::USubstanceUtility_DisableInstanceOutputs_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GraphInstance = GraphInstance;
	Parms.OutputIndices = OutputIndices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.CreateGraphInstance
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceInstanceFactory*   Factory                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GraphDescIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterial*                   ParentMaterial                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InstanceName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USubstanceGraphInstance* USubstanceUtility::CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32 GraphDescIndex, class UMaterial* ParentMaterial, const class FString& InstanceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "CreateGraphInstance");

	Params::USubstanceUtility_CreateGraphInstance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Factory = Factory;
	Parms.GraphDescIndex = GraphDescIndex;
	Parms.ParentMaterial = ParentMaterial;
	Parms.InstanceName = InstanceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USubstanceInstanceFactory*   OutputFactory                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutputFactoryGraphIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceInstanceFactory*   InputFactory                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InputFactoryGraphIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSubstanceConnection>Connections                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class USubstanceInstanceFactory*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USubstanceInstanceFactory* USubstanceUtility::CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32 OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32 InputFactoryGraphIndex, TArray<struct FSubstanceConnection>& Connections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "CreateAggregateSubstanceFactory");

	Params::USubstanceUtility_CreateAggregateSubstanceFactory_Params Parms{};

	Parms.OutputFactory = OutputFactory;
	Parms.OutputFactoryGraphIndex = OutputFactoryGraphIndex;
	Parms.InputFactory = InputFactory;
	Parms.InputFactoryGraphIndex = InputFactoryGraphIndex;
	Parms.Connections = Connections;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SubstanceCore.SubstanceUtility.CopyInputParameters
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     SourceGraphInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubstanceGraphInstance*     DestGraphInstance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceUtility::CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "CopyInputParameters");

	Params::USubstanceUtility_CopyInputParameters_Params Parms{};

	Parms.SourceGraphInstance = SourceGraphInstance;
	Parms.DestGraphInstance = DestGraphInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.ClearCache
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:

void USubstanceUtility::ClearCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "ClearCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SubstanceCore.SubstanceUtility.AsyncRendering
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USubstanceGraphInstance*     InstancesToRender                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubstanceUtility::AsyncRendering(class USubstanceGraphInstance* InstancesToRender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubstanceUtility", "AsyncRendering");

	Params::USubstanceUtility_AsyncRendering_Params Parms{};

	Parms.InstancesToRender = InstancesToRender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


