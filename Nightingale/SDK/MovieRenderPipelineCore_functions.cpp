#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieRenderPipelineCore.MovieGraphBlueprintLibrary
// (None)

class UClass* UMovieGraphBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphBlueprintLibrary");

	return Clss;
}


// MovieGraphBlueprintLibrary MovieRenderPipelineCore.Default__MovieGraphBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphBlueprintLibrary* UMovieGraphBlueprintLibrary::GetDefaultObj()
{
	static class UMovieGraphBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphBlueprintLibrary*>(UMovieGraphBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieGraphBlueprintLibrary.ResolveFilenameFormatArguments
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFormatString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieGraphFilenameResolveParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMovieGraphResolveArgs      OutMergedFormatArgs                                              (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments(const class FString& InFormatString, struct FMovieGraphFilenameResolveParams& InParams, struct FMovieGraphResolveArgs* OutMergedFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphBlueprintLibrary", "ResolveFilenameFormatArguments");

	Params::UMovieGraphBlueprintLibrary_ResolveFilenameFormatArguments_Params Parms{};

	Parms.InFormatString = InFormatString;
	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMergedFormatArgs != nullptr)
		*OutMergedFormatArgs = std::move(Parms.OutMergedFormatArgs);

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEffectiveOutputResolution
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieGraphEvaluatedConfig*  InEvaluatedGraph                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InBranchName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint UMovieGraphBlueprintLibrary::GetEffectiveOutputResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, class FName& InBranchName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphBlueprintLibrary", "GetEffectiveOutputResolution");

	Params::UMovieGraphBlueprintLibrary_GetEffectiveOutputResolution_Params Parms{};

	Parms.InEvaluatedGraph = InEvaluatedGraph;
	Parms.InBranchName = InBranchName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphBlueprintLibrary.GetEffectiveFrameRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieGraphOutputSettingNode*InNode                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                  InDefaultRate                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameRate UMovieGraphBlueprintLibrary::GetEffectiveFrameRate(class UMovieGraphOutputSettingNode* InNode, struct FFrameRate& InDefaultRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphBlueprintLibrary", "GetEffectiveFrameRate");

	Params::UMovieGraphBlueprintLibrary_GetEffectiveFrameRate_Params Parms{};

	Parms.InNode = InNode;
	Parms.InDefaultRate = InDefaultRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MovieGraphNode
// (None)

class UClass* UMovieGraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphNode");

	return Clss;
}


// MovieGraphNode MovieRenderPipelineCore.Default__MovieGraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphNode* UMovieGraphNode::GetDefaultObj()
{
	static class UMovieGraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphNode*>(UMovieGraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphBranchNode
// (None)

class UClass* UMovieGraphBranchNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphBranchNode");

	return Clss;
}


// MovieGraphBranchNode MovieRenderPipelineCore.Default__MovieGraphBranchNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphBranchNode* UMovieGraphBranchNode::GetDefaultObj()
{
	static class UMovieGraphBranchNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphBranchNode*>(UMovieGraphBranchNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphSettingNode
// (None)

class UClass* UMovieGraphSettingNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphSettingNode");

	return Clss;
}


// MovieGraphSettingNode MovieRenderPipelineCore.Default__MovieGraphSettingNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphSettingNode* UMovieGraphSettingNode::GetDefaultObj()
{
	static class UMovieGraphSettingNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphSettingNode*>(UMovieGraphSettingNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphRenderPassNode
// (None)

class UClass* UMovieGraphRenderPassNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphRenderPassNode");

	return Clss;
}


// MovieGraphRenderPassNode MovieRenderPipelineCore.Default__MovieGraphRenderPassNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphRenderPassNode* UMovieGraphRenderPassNode::GetDefaultObj()
{
	static class UMovieGraphRenderPassNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphRenderPassNode*>(UMovieGraphRenderPassNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphBurnInNode
// (None)

class UClass* UMovieGraphBurnInNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphBurnInNode");

	return Clss;
}


// MovieGraphBurnInNode MovieRenderPipelineCore.Default__MovieGraphBurnInNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphBurnInNode* UMovieGraphBurnInNode::GetDefaultObj()
{
	static class UMovieGraphBurnInNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphBurnInNode*>(UMovieGraphBurnInNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphBurnInWidget
// (None)

class UClass* UMovieGraphBurnInWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphBurnInWidget");

	return Clss;
}


// MovieGraphBurnInWidget MovieRenderPipelineCore.Default__MovieGraphBurnInWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphBurnInWidget* UMovieGraphBurnInWidget::GetDefaultObj()
{
	static class UMovieGraphBurnInWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphBurnInWidget*>(UMovieGraphBurnInWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieGraphBurnInWidget.UpdateForGraph
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMovieGraphPipeline*         InGraphPipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieGraphBurnInWidget::UpdateForGraph(class UMovieGraphPipeline* InGraphPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphBurnInWidget", "UpdateForGraph");

	Params::UMovieGraphBurnInWidget_UpdateForGraph_Params Parms{};

	Parms.InGraphPipeline = InGraphPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MovieRenderPipelineCore.MovieGraphCollectionNode
// (None)

class UClass* UMovieGraphCollectionNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphCollectionNode");

	return Clss;
}


// MovieGraphCollectionNode MovieRenderPipelineCore.Default__MovieGraphCollectionNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphCollectionNode* UMovieGraphCollectionNode::GetDefaultObj()
{
	static class UMovieGraphCollectionNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphCollectionNode*>(UMovieGraphCollectionNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphValueContainer
// (None)

class UClass* UMovieGraphValueContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphValueContainer");

	return Clss;
}


// MovieGraphValueContainer MovieRenderPipelineCore.Default__MovieGraphValueContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphValueContainer* UMovieGraphValueContainer::GetDefaultObj()
{
	static class UMovieGraphValueContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphValueContainer*>(UMovieGraphValueContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueTypeObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ValueTypeObject                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieGraphValueContainer::SetValueTypeObject(class UObject* ValueTypeObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueTypeObject");

	Params::UMovieGraphValueContainer_SetValueTypeObject_Params Parms{};

	Parms.ValueTypeObject = ValueTypeObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMovieGraphValueType    ValueType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieGraphValueContainer::SetValueType(enum class EMovieGraphValueType ValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueType");

	Params::UMovieGraphValueContainer_SetValueType_Params Parms{};

	Parms.ValueType = ValueType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueText(class FText& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueText");

	Params::UMovieGraphValueContainer_SetValueText_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueString(const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueString");

	Params::UMovieGraphValueContainer_SetValueString_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueSerializedString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewValue                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueSerializedString(const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueSerializedString");

	Params::UMovieGraphValueContainer_SetValueSerializedString_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueObject(class UObject* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueObject");

	Params::UMovieGraphValueContainer_SetValueObject_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueName(class FName InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueName");

	Params::UMovieGraphValueContainer_SetValueName_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueInt64
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueInt64(int64 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueInt64");

	Params::UMovieGraphValueContainer_SetValueInt64_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueInt32(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueInt32");

	Params::UMovieGraphValueContainer_SetValueInt32_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueFloat(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueFloat");

	Params::UMovieGraphValueContainer_SetValueFloat_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnum*                       Enum                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueEnum(uint8 InValue, class UEnum* Enum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueEnum");

	Params::UMovieGraphValueContainer_SetValueEnum_Params Parms{};

	Parms.InValue = InValue;
	Parms.Enum = Enum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueDouble(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueDouble");

	Params::UMovieGraphValueContainer_SetValueDouble_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueContainerType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMovieGraphContainerTypeContainerType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieGraphValueContainer::SetValueContainerType(enum class EMovieGraphContainerType ContainerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueContainerType");

	Params::UMovieGraphValueContainer_SetValueContainerType_Params Parms{};

	Parms.ContainerType = ContainerType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueClass(class UClass* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueClass");

	Params::UMovieGraphValueContainer_SetValueClass_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueByte(uint8 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueByte");

	Params::UMovieGraphValueContainer_SetValueByte_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.SetValueBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::SetValueBool(bool bInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "SetValueBool");

	Params::UMovieGraphValueContainer_SetValueBool_Params Parms{};

	Parms.bInValue = bInValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueTypeObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UMovieGraphValueContainer::GetValueTypeObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueTypeObject");

	Params::UMovieGraphValueContainer_GetValueTypeObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieGraphValueType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieGraphValueType UMovieGraphValueContainer::GetValueType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueType");

	Params::UMovieGraphValueContainer_GetValueType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        OutValue                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueText(class FText* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueText");

	Params::UMovieGraphValueContainer_GetValueText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueString(class FString* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueString");

	Params::UMovieGraphValueContainer_GetValueString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueSerializedString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieGraphValueContainer::GetValueSerializedString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueSerializedString");

	Params::UMovieGraphValueContainer_GetValueSerializedString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     OutValue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      RequestedClass                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueObject(class UObject* OutValue, class UClass* RequestedClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueObject");

	Params::UMovieGraphValueContainer_GetValueObject_Params Parms{};

	Parms.OutValue = OutValue;
	Parms.RequestedClass = RequestedClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueName(class FName* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueName");

	Params::UMovieGraphValueContainer_GetValueName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueInt64
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueInt64(int64* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueInt64");

	Params::UMovieGraphValueContainer_GetValueInt64_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueInt32
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueInt32(int32* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueInt32");

	Params::UMovieGraphValueContainer_GetValueInt32_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueFloat(float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueFloat");

	Params::UMovieGraphValueContainer_GetValueFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnum*                       RequestedEnum                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueEnum(uint8* OutValue, class UEnum* RequestedEnum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueEnum");

	Params::UMovieGraphValueContainer_GetValueEnum_Params Parms{};

	Parms.RequestedEnum = RequestedEnum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueDouble(double* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueDouble");

	Params::UMovieGraphValueContainer_GetValueDouble_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueContainerType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieGraphContainerTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieGraphContainerType UMovieGraphValueContainer::GetValueContainerType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueContainerType");

	Params::UMovieGraphValueContainer_GetValueContainerType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      OutValue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueClass(class UClass* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueClass");

	Params::UMovieGraphValueContainer_GetValueClass_Params Parms{};

	Parms.OutValue = OutValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueByte
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// uint8                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueByte(uint8* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueByte");

	Params::UMovieGraphValueContainer_GetValueByte_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphValueContainer.GetValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bOutValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieGraphValueContainer::GetValueBool(bool* bOutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphValueContainer", "GetValueBool");

	Params::UMovieGraphValueContainer_GetValueBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutValue != nullptr)
		*bOutValue = Parms.bOutValue;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MovieGraphMember
// (None)

class UClass* UMovieGraphMember::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphMember");

	return Clss;
}


// MovieGraphMember MovieRenderPipelineCore.Default__MovieGraphMember
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphMember* UMovieGraphMember::GetDefaultObj()
{
	static class UMovieGraphMember* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphMember*>(UMovieGraphMember::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphVariable
// (None)

class UClass* UMovieGraphVariable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphVariable");

	return Clss;
}


// MovieGraphVariable MovieRenderPipelineCore.Default__MovieGraphVariable
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphVariable* UMovieGraphVariable::GetDefaultObj()
{
	static class UMovieGraphVariable* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphVariable*>(UMovieGraphVariable::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphInterfaceBase
// (None)

class UClass* UMovieGraphInterfaceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphInterfaceBase");

	return Clss;
}


// MovieGraphInterfaceBase MovieRenderPipelineCore.Default__MovieGraphInterfaceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphInterfaceBase* UMovieGraphInterfaceBase::GetDefaultObj()
{
	static class UMovieGraphInterfaceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphInterfaceBase*>(UMovieGraphInterfaceBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphInput
// (None)

class UClass* UMovieGraphInput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphInput");

	return Clss;
}


// MovieGraphInput MovieRenderPipelineCore.Default__MovieGraphInput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphInput* UMovieGraphInput::GetDefaultObj()
{
	static class UMovieGraphInput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphInput*>(UMovieGraphInput::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphOutput
// (None)

class UClass* UMovieGraphOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphOutput");

	return Clss;
}


// MovieGraphOutput MovieRenderPipelineCore.Default__MovieGraphOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphOutput* UMovieGraphOutput::GetDefaultObj()
{
	static class UMovieGraphOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphOutput*>(UMovieGraphOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphEvaluatedConfig
// (None)

class UClass* UMovieGraphEvaluatedConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphEvaluatedConfig");

	return Clss;
}


// MovieGraphEvaluatedConfig MovieRenderPipelineCore.Default__MovieGraphEvaluatedConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphEvaluatedConfig* UMovieGraphEvaluatedConfig::GetDefaultObj()
{
	static class UMovieGraphEvaluatedConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphEvaluatedConfig*>(UMovieGraphEvaluatedConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphConfig
// (None)

class UClass* UMovieGraphConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphConfig");

	return Clss;
}


// MovieGraphConfig MovieRenderPipelineCore.Default__MovieGraphConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphConfig* UMovieGraphConfig::GetDefaultObj()
{
	static class UMovieGraphConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphConfig*>(UMovieGraphConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieGraphConfig.GetVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeGlobal                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMovieGraphVariable*> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMovieGraphVariable*> UMovieGraphConfig::GetVariables(bool bIncludeGlobal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphConfig", "GetVariables");

	Params::UMovieGraphConfig_GetVariables_Params Parms{};

	Parms.bIncludeGlobal = bIncludeGlobal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphConfig.CreateFlattenedGraph
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieGraphTraversalContext InContext                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMovieGraphEvaluatedConfig*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphEvaluatedConfig* UMovieGraphConfig::CreateFlattenedGraph(struct FMovieGraphTraversalContext& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphConfig", "CreateFlattenedGraph");

	Params::UMovieGraphConfig_CreateFlattenedGraph_Params Parms{};

	Parms.InContext = InContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphConfig.AddVariable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InCustomBaseName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieGraphVariable*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphVariable* UMovieGraphConfig::AddVariable(class FName InCustomBaseName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphConfig", "AddVariable");

	Params::UMovieGraphConfig_AddVariable_Params Parms{};

	Parms.InCustomBaseName = InCustomBaseName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MovieGraphTimeStepBase
// (None)

class UClass* UMovieGraphTimeStepBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphTimeStepBase");

	return Clss;
}


// MovieGraphTimeStepBase MovieRenderPipelineCore.Default__MovieGraphTimeStepBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphTimeStepBase* UMovieGraphTimeStepBase::GetDefaultObj()
{
	static class UMovieGraphTimeStepBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphTimeStepBase*>(UMovieGraphTimeStepBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphRendererBase
// (None)

class UClass* UMovieGraphRendererBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphRendererBase");

	return Clss;
}


// MovieGraphRendererBase MovieRenderPipelineCore.Default__MovieGraphRendererBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphRendererBase* UMovieGraphRendererBase::GetDefaultObj()
{
	static class UMovieGraphRendererBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphRendererBase*>(UMovieGraphRendererBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphDataSourceBase
// (None)

class UClass* UMovieGraphDataSourceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphDataSourceBase");

	return Clss;
}


// MovieGraphDataSourceBase MovieRenderPipelineCore.Default__MovieGraphDataSourceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphDataSourceBase* UMovieGraphDataSourceBase::GetDefaultObj()
{
	static class UMovieGraphDataSourceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphDataSourceBase*>(UMovieGraphDataSourceBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphDefaultRenderer
// (None)

class UClass* UMovieGraphDefaultRenderer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphDefaultRenderer");

	return Clss;
}


// MovieGraphDefaultRenderer MovieRenderPipelineCore.Default__MovieGraphDefaultRenderer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphDefaultRenderer* UMovieGraphDefaultRenderer::GetDefaultObj()
{
	static class UMovieGraphDefaultRenderer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphDefaultRenderer*>(UMovieGraphDefaultRenderer::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphDeferredRenderPassNode
// (None)

class UClass* UMovieGraphDeferredRenderPassNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphDeferredRenderPassNode");

	return Clss;
}


// MovieGraphDeferredRenderPassNode MovieRenderPipelineCore.Default__MovieGraphDeferredRenderPassNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphDeferredRenderPassNode* UMovieGraphDeferredRenderPassNode::GetDefaultObj()
{
	static class UMovieGraphDeferredRenderPassNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphDeferredRenderPassNode*>(UMovieGraphDeferredRenderPassNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphEdge
// (None)

class UClass* UMovieGraphEdge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphEdge");

	return Clss;
}


// MovieGraphEdge MovieRenderPipelineCore.Default__MovieGraphEdge
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphEdge* UMovieGraphEdge::GetDefaultObj()
{
	static class UMovieGraphEdge* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphEdge*>(UMovieGraphEdge::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphFileOutputNode
// (None)

class UClass* UMovieGraphFileOutputNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphFileOutputNode");

	return Clss;
}


// MovieGraphFileOutputNode MovieRenderPipelineCore.Default__MovieGraphFileOutputNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphFileOutputNode* UMovieGraphFileOutputNode::GetDefaultObj()
{
	static class UMovieGraphFileOutputNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphFileOutputNode*>(UMovieGraphFileOutputNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphGetCVarValueNode
// (None)

class UClass* UMovieGraphGetCVarValueNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphGetCVarValueNode");

	return Clss;
}


// MovieGraphGetCVarValueNode MovieRenderPipelineCore.Default__MovieGraphGetCVarValueNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphGetCVarValueNode* UMovieGraphGetCVarValueNode::GetDefaultObj()
{
	static class UMovieGraphGetCVarValueNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphGetCVarValueNode*>(UMovieGraphGetCVarValueNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphGlobalGameOverridesNode
// (None)

class UClass* UMovieGraphGlobalGameOverridesNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphGlobalGameOverridesNode");

	return Clss;
}


// MovieGraphGlobalGameOverridesNode MovieRenderPipelineCore.Default__MovieGraphGlobalGameOverridesNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphGlobalGameOverridesNode* UMovieGraphGlobalGameOverridesNode::GetDefaultObj()
{
	static class UMovieGraphGlobalGameOverridesNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphGlobalGameOverridesNode*>(UMovieGraphGlobalGameOverridesNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode
// (None)

class UClass* UMovieGraphImageSequenceOutputNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphImageSequenceOutputNode");

	return Clss;
}


// MovieGraphImageSequenceOutputNode MovieRenderPipelineCore.Default__MovieGraphImageSequenceOutputNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphImageSequenceOutputNode* UMovieGraphImageSequenceOutputNode::GetDefaultObj()
{
	static class UMovieGraphImageSequenceOutputNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphImageSequenceOutputNode*>(UMovieGraphImageSequenceOutputNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode_BMP
// (None)

class UClass* UMovieGraphImageSequenceOutputNode_BMP::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphImageSequenceOutputNode_BMP");

	return Clss;
}


// MovieGraphImageSequenceOutputNode_BMP MovieRenderPipelineCore.Default__MovieGraphImageSequenceOutputNode_BMP
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphImageSequenceOutputNode_BMP* UMovieGraphImageSequenceOutputNode_BMP::GetDefaultObj()
{
	static class UMovieGraphImageSequenceOutputNode_BMP* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphImageSequenceOutputNode_BMP*>(UMovieGraphImageSequenceOutputNode_BMP::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode_JPG
// (None)

class UClass* UMovieGraphImageSequenceOutputNode_JPG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphImageSequenceOutputNode_JPG");

	return Clss;
}


// MovieGraphImageSequenceOutputNode_JPG MovieRenderPipelineCore.Default__MovieGraphImageSequenceOutputNode_JPG
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphImageSequenceOutputNode_JPG* UMovieGraphImageSequenceOutputNode_JPG::GetDefaultObj()
{
	static class UMovieGraphImageSequenceOutputNode_JPG* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphImageSequenceOutputNode_JPG*>(UMovieGraphImageSequenceOutputNode_JPG::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphImageSequenceOutputNode_PNG
// (None)

class UClass* UMovieGraphImageSequenceOutputNode_PNG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphImageSequenceOutputNode_PNG");

	return Clss;
}


// MovieGraphImageSequenceOutputNode_PNG MovieRenderPipelineCore.Default__MovieGraphImageSequenceOutputNode_PNG
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphImageSequenceOutputNode_PNG* UMovieGraphImageSequenceOutputNode_PNG::GetDefaultObj()
{
	static class UMovieGraphImageSequenceOutputNode_PNG* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphImageSequenceOutputNode_PNG*>(UMovieGraphImageSequenceOutputNode_PNG::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphInputNode
// (None)

class UClass* UMovieGraphInputNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphInputNode");

	return Clss;
}


// MovieGraphInputNode MovieRenderPipelineCore.Default__MovieGraphInputNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphInputNode* UMovieGraphInputNode::GetDefaultObj()
{
	static class UMovieGraphInputNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphInputNode*>(UMovieGraphInputNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphLinearTimeStep
// (None)

class UClass* UMovieGraphLinearTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphLinearTimeStep");

	return Clss;
}


// MovieGraphLinearTimeStep MovieRenderPipelineCore.Default__MovieGraphLinearTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphLinearTimeStep* UMovieGraphLinearTimeStep::GetDefaultObj()
{
	static class UMovieGraphLinearTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphLinearTimeStep*>(UMovieGraphLinearTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphEngineTimeStep
// (None)

class UClass* UMovieGraphEngineTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphEngineTimeStep");

	return Clss;
}


// MovieGraphEngineTimeStep MovieRenderPipelineCore.Default__MovieGraphEngineTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphEngineTimeStep* UMovieGraphEngineTimeStep::GetDefaultObj()
{
	static class UMovieGraphEngineTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphEngineTimeStep*>(UMovieGraphEngineTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphModifierNode
// (None)

class UClass* UMovieGraphModifierNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphModifierNode");

	return Clss;
}


// MovieGraphModifierNode MovieRenderPipelineCore.Default__MovieGraphModifierNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphModifierNode* UMovieGraphModifierNode::GetDefaultObj()
{
	static class UMovieGraphModifierNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphModifierNode*>(UMovieGraphModifierNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphOutputNode
// (None)

class UClass* UMovieGraphOutputNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphOutputNode");

	return Clss;
}


// MovieGraphOutputNode MovieRenderPipelineCore.Default__MovieGraphOutputNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphOutputNode* UMovieGraphOutputNode::GetDefaultObj()
{
	static class UMovieGraphOutputNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphOutputNode*>(UMovieGraphOutputNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphOutputSettingNode
// (None)

class UClass* UMovieGraphOutputSettingNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphOutputSettingNode");

	return Clss;
}


// MovieGraphOutputSettingNode MovieRenderPipelineCore.Default__MovieGraphOutputSettingNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphOutputSettingNode* UMovieGraphOutputSettingNode::GetDefaultObj()
{
	static class UMovieGraphOutputSettingNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphOutputSettingNode*>(UMovieGraphOutputSettingNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphPin
// (None)

class UClass* UMovieGraphPin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphPin");

	return Clss;
}


// MovieGraphPin MovieRenderPipelineCore.Default__MovieGraphPin
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphPin* UMovieGraphPin::GetDefaultObj()
{
	static class UMovieGraphPin* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphPin*>(UMovieGraphPin::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineBase
// (None)

class UClass* UMoviePipelineBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBase");

	return Clss;
}


// MoviePipelineBase MovieRenderPipelineCore.Default__MoviePipelineBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBase* UMoviePipelineBase::GetDefaultObj()
{
	static class UMoviePipelineBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBase*>(UMoviePipelineBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineBase.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBase::Shutdown(bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBase", "Shutdown");

	Params::UMoviePipelineBase_Shutdown_Params Parms{};

	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineBase.RequestShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsError                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBase::RequestShutdown(bool bIsError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBase", "RequestShutdown");

	Params::UMoviePipelineBase_RequestShutdown_Params Parms{};

	Parms.bIsError = bIsError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineBase.IsShutdownRequested
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineBase::IsShutdownRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBase", "IsShutdownRequested");

	Params::UMoviePipelineBase_IsShutdownRequested_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBase.GetPipelineState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieRenderPipelineStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieRenderPipelineState UMoviePipelineBase::GetPipelineState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBase", "GetPipelineState");

	Params::UMoviePipelineBase_GetPipelineState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MovieGraphPipeline
// (None)

class UClass* UMovieGraphPipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphPipeline");

	return Clss;
}


// MovieGraphPipeline MovieRenderPipelineCore.Default__MovieGraphPipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphPipeline* UMovieGraphPipeline::GetDefaultObj()
{
	static class UMovieGraphPipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphPipeline*>(UMovieGraphPipeline::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieGraphPipeline.SetInitializationTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieGraphPipeline::SetInitializationTime(struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphPipeline", "SetInitializationTime");

	Params::UMovieGraphPipeline_SetInitializationTime_Params Parms{};

	Parms.InDateTime = InDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphPipeline.OnMoviePipelineFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMovieGraphPipeline::OnMoviePipelineFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphPipeline", "OnMoviePipelineFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphPipeline.Initialize
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieGraphInitConfig       InitConfig                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UMovieGraphPipeline::Initialize(class UMoviePipelineExecutorJob* InJob, struct FMovieGraphInitConfig& InitConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphPipeline", "Initialize");

	Params::UMovieGraphPipeline_Initialize_Params Parms{};

	Parms.InJob = InJob;
	Parms.InitConfig = InitConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphPipeline.GetInitializationTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UMovieGraphPipeline::GetInitializationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphPipeline", "GetInitializationTime");

	Params::UMovieGraphPipeline_GetInitializationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieGraphPipeline.GetCurrentJob
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMovieGraphPipeline::GetCurrentJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphPipeline", "GetCurrentJob");

	Params::UMovieGraphPipeline_GetCurrentJob_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MovieGraphPathTracedRendererNode
// (None)

class UClass* UMovieGraphPathTracedRendererNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphPathTracedRendererNode");

	return Clss;
}


// MovieGraphPathTracedRendererNode MovieRenderPipelineCore.Default__MovieGraphPathTracedRendererNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphPathTracedRendererNode* UMovieGraphPathTracedRendererNode::GetDefaultObj()
{
	static class UMovieGraphPathTracedRendererNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphPathTracedRendererNode*>(UMovieGraphPathTracedRendererNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphEXRSequenceNode
// (None)

class UClass* UMovieGraphEXRSequenceNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphEXRSequenceNode");

	return Clss;
}


// MovieGraphEXRSequenceNode MovieRenderPipelineCore.Default__MovieGraphEXRSequenceNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphEXRSequenceNode* UMovieGraphEXRSequenceNode::GetDefaultObj()
{
	static class UMovieGraphEXRSequenceNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphEXRSequenceNode*>(UMovieGraphEXRSequenceNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphAntiAliasingNode
// (None)

class UClass* UMovieGraphAntiAliasingNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphAntiAliasingNode");

	return Clss;
}


// MovieGraphAntiAliasingNode MovieRenderPipelineCore.Default__MovieGraphAntiAliasingNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphAntiAliasingNode* UMovieGraphAntiAliasingNode::GetDefaultObj()
{
	static class UMovieGraphAntiAliasingNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphAntiAliasingNode*>(UMovieGraphAntiAliasingNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphRenderLayerNode
// (None)

class UClass* UMovieGraphRenderLayerNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphRenderLayerNode");

	return Clss;
}


// MovieGraphRenderLayerNode MovieRenderPipelineCore.Default__MovieGraphRenderLayerNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphRenderLayerNode* UMovieGraphRenderLayerNode::GetDefaultObj()
{
	static class UMovieGraphRenderLayerNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphRenderLayerNode*>(UMovieGraphRenderLayerNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphSelectNode
// (None)

class UClass* UMovieGraphSelectNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphSelectNode");

	return Clss;
}


// MovieGraphSelectNode MovieRenderPipelineCore.Default__MovieGraphSelectNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphSelectNode* UMovieGraphSelectNode::GetDefaultObj()
{
	static class UMovieGraphSelectNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphSelectNode*>(UMovieGraphSelectNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphSequenceDataSource
// (None)

class UClass* UMovieGraphSequenceDataSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphSequenceDataSource");

	return Clss;
}


// MovieGraphSequenceDataSource MovieRenderPipelineCore.Default__MovieGraphSequenceDataSource
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphSequenceDataSource* UMovieGraphSequenceDataSource::GetDefaultObj()
{
	static class UMovieGraphSequenceDataSource* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphSequenceDataSource*>(UMovieGraphSequenceDataSource::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphSetCVarValueNode
// (None)

class UClass* UMovieGraphSetCVarValueNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphSetCVarValueNode");

	return Clss;
}


// MovieGraphSetCVarValueNode MovieRenderPipelineCore.Default__MovieGraphSetCVarValueNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphSetCVarValueNode* UMovieGraphSetCVarValueNode::GetDefaultObj()
{
	static class UMovieGraphSetCVarValueNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphSetCVarValueNode*>(UMovieGraphSetCVarValueNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieGraphSubgraphNode
// (None)

class UClass* UMovieGraphSubgraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphSubgraphNode");

	return Clss;
}


// MovieGraphSubgraphNode MovieRenderPipelineCore.Default__MovieGraphSubgraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphSubgraphNode* UMovieGraphSubgraphNode::GetDefaultObj()
{
	static class UMovieGraphSubgraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphSubgraphNode*>(UMovieGraphSubgraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieGraphSubgraphNode.SetSubGraphAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMovieGraphConfig>InSubgraphAsset                                                  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieGraphSubgraphNode::SetSubGraphAsset(TSoftObjectPtr<class UMovieGraphConfig>& InSubgraphAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphSubgraphNode", "SetSubGraphAsset");

	Params::UMovieGraphSubgraphNode_SetSubGraphAsset_Params Parms{};

	Parms.InSubgraphAsset = InSubgraphAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieGraphSubgraphNode.GetSubgraphAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieGraphConfig*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphConfig* UMovieGraphSubgraphNode::GetSubgraphAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieGraphSubgraphNode", "GetSubgraphAsset");

	Params::UMovieGraphSubgraphNode_GetSubgraphAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MovieGraphVariableNode
// (None)

class UClass* UMovieGraphVariableNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieGraphVariableNode");

	return Clss;
}


// MovieGraphVariableNode MovieRenderPipelineCore.Default__MovieGraphVariableNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieGraphVariableNode* UMovieGraphVariableNode::GetDefaultObj()
{
	static class UMovieGraphVariableNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieGraphVariableNode*>(UMovieGraphVariableNode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieJobVariableAssignmentContainer
// (None)

class UClass* UMovieJobVariableAssignmentContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieJobVariableAssignmentContainer");

	return Clss;
}


// MovieJobVariableAssignmentContainer MovieRenderPipelineCore.Default__MovieJobVariableAssignmentContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieJobVariableAssignmentContainer* UMovieJobVariableAssignmentContainer::GetDefaultObj()
{
	static class UMovieJobVariableAssignmentContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieJobVariableAssignmentContainer*>(UMovieJobVariableAssignmentContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetVariableAssignmentEnableState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieGraphVariable*         InGraphVariable                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetVariableAssignmentEnableState(class UMovieGraphVariable* InGraphVariable, bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetVariableAssignmentEnableState");

	Params::UMovieJobVariableAssignmentContainer_SetVariableAssignmentEnableState_Params Parms{};

	Parms.InGraphVariable = InGraphVariable;
	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueText(class FName& PropertyName, class FText& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueText");

	Params::UMovieJobVariableAssignmentContainer_SetValueText_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueString(class FName& PropertyName, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueString");

	Params::UMovieJobVariableAssignmentContainer_SetValueString_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueSerializedString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      NewValue                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueSerializedString(class FName& PropertyName, const class FString& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueSerializedString");

	Params::UMovieJobVariableAssignmentContainer_SetValueSerializedString_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueObject(class FName& PropertyName, class UObject* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueObject");

	Params::UMovieJobVariableAssignmentContainer_SetValueObject_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueName(class FName& PropertyName, class FName InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueName");

	Params::UMovieJobVariableAssignmentContainer_SetValueName_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueInt64
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueInt64(class FName& PropertyName, int64 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueInt64");

	Params::UMovieJobVariableAssignmentContainer_SetValueInt64_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueInt32
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueInt32(class FName& PropertyName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueInt32");

	Params::UMovieJobVariableAssignmentContainer_SetValueInt32_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueFloat(class FName& PropertyName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueFloat");

	Params::UMovieJobVariableAssignmentContainer_SetValueFloat_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnum*                       Enum                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueEnum(class FName& PropertyName, uint8 InValue, class UEnum* Enum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueEnum");

	Params::UMovieJobVariableAssignmentContainer_SetValueEnum_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;
	Parms.Enum = Enum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueDouble(class FName& PropertyName, double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueDouble");

	Params::UMovieJobVariableAssignmentContainer_SetValueDouble_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueClass(class FName& PropertyName, class UClass* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueClass");

	Params::UMovieJobVariableAssignmentContainer_SetValueClass_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueByte
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InValue                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueByte(class FName& PropertyName, uint8 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueByte");

	Params::UMovieJobVariableAssignmentContainer_SetValueByte_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::SetValueBool(class FName& PropertyName, bool bInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetValueBool");

	Params::UMovieJobVariableAssignmentContainer_SetValueBool_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.bInValue = bInValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.SetGraphConfig
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMovieGraphConfig>InGraphConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieJobVariableAssignmentContainer::SetGraphConfig(TSoftObjectPtr<class UMovieGraphConfig>& InGraphConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "SetGraphConfig");

	Params::UMovieJobVariableAssignmentContainer_SetGraphConfig_Params Parms{};

	Parms.InGraphConfig = InGraphConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetVariableAssignmentEnableState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMovieGraphVariable*         InGraphVariable                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutIsEnabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetVariableAssignmentEnableState(class UMovieGraphVariable* InGraphVariable, bool* bOutIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetVariableAssignmentEnableState");

	Params::UMovieJobVariableAssignmentContainer_GetVariableAssignmentEnableState_Params Parms{};

	Parms.InGraphVariable = InGraphVariable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutIsEnabled != nullptr)
		*bOutIsEnabled = Parms.bOutIsEnabled;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueTypeObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UMovieJobVariableAssignmentContainer::GetValueTypeObject(class FName& PropertyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueTypeObject");

	Params::UMovieJobVariableAssignmentContainer_GetValueTypeObject_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovieGraphValueType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieGraphValueType UMovieJobVariableAssignmentContainer::GetValueType(class FName& PropertyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueType");

	Params::UMovieJobVariableAssignmentContainer_GetValueType_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueText
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutValue                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueText(class FName& PropertyName, class FText* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueText");

	Params::UMovieJobVariableAssignmentContainer_GetValueText_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueString(class FName& PropertyName, class FString* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueString");

	Params::UMovieJobVariableAssignmentContainer_GetValueString_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = std::move(Parms.OutValue);

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueSerializedString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieJobVariableAssignmentContainer::GetValueSerializedString(class FName& PropertyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueSerializedString");

	Params::UMovieJobVariableAssignmentContainer_GetValueSerializedString_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OutValue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      RequestedClass                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueObject(class FName& PropertyName, class UObject* OutValue, class UClass* RequestedClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueObject");

	Params::UMovieJobVariableAssignmentContainer_GetValueObject_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.OutValue = OutValue;
	Parms.RequestedClass = RequestedClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueName(class FName& PropertyName, class FName* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueName");

	Params::UMovieJobVariableAssignmentContainer_GetValueName_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueInt64
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueInt64(class FName& PropertyName, int64* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueInt64");

	Params::UMovieJobVariableAssignmentContainer_GetValueInt64_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueInt32
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueInt32(class FName& PropertyName, int32* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueInt32");

	Params::UMovieJobVariableAssignmentContainer_GetValueInt32_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueFloat(class FName& PropertyName, float* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueFloat");

	Params::UMovieJobVariableAssignmentContainer_GetValueFloat_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnum*                       RequestedEnum                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueEnum(class FName& PropertyName, uint8* OutValue, class UEnum* RequestedEnum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueEnum");

	Params::UMovieJobVariableAssignmentContainer_GetValueEnum_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.RequestedEnum = RequestedEnum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueDouble(class FName& PropertyName, double* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueDouble");

	Params::UMovieJobVariableAssignmentContainer_GetValueDouble_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueContainerType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovieGraphContainerTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieGraphContainerType UMovieJobVariableAssignmentContainer::GetValueContainerType(class FName& PropertyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueContainerType");

	Params::UMovieJobVariableAssignmentContainer_GetValueContainerType_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      OutValue                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueClass(class FName& PropertyName, class UClass* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueClass");

	Params::UMovieJobVariableAssignmentContainer_GetValueClass_Params Parms{};

	Parms.PropertyName = PropertyName;
	Parms.OutValue = OutValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueByte
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueByte(class FName& PropertyName, uint8* OutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueByte");

	Params::UMovieJobVariableAssignmentContainer_GetValueByte_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MovieJobVariableAssignmentContainer.GetValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutValue                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieJobVariableAssignmentContainer::GetValueBool(class FName& PropertyName, bool* bOutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieJobVariableAssignmentContainer", "GetValueBool");

	Params::UMovieJobVariableAssignmentContainer_GetValueBool_Params Parms{};

	Parms.PropertyName = PropertyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bOutValue != nullptr)
		*bOutValue = Parms.bOutValue;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineSetting
// (None)

class UClass* UMoviePipelineSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineSetting");

	return Clss;
}


// MoviePipelineSetting MovieRenderPipelineCore.Default__MoviePipelineSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineSetting* UMoviePipelineSetting::GetDefaultObj()
{
	static class UMoviePipelineSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineSetting*>(UMoviePipelineSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting::SetIsEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "SetIsEnabled");

	Params::UMoviePipelineSetting_SetIsEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineSetting::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "IsEnabled");

	Params::UMoviePipelineSetting_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLineArgs
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              InOutUnrealURLParams                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InOutCommandLineArgs                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InOutDeviceProfileCvars                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InOutExecCmds                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoviePipelineSetting::BuildNewProcessCommandLineArgs(TArray<class FString>& InOutUnrealURLParams, TArray<class FString>& InOutCommandLineArgs, TArray<class FString>& InOutDeviceProfileCvars, TArray<class FString>& InOutExecCmds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "BuildNewProcessCommandLineArgs");

	Params::UMoviePipelineSetting_BuildNewProcessCommandLineArgs_Params Parms{};

	Parms.InOutUnrealURLParams = InOutUnrealURLParams;
	Parms.InOutCommandLineArgs = InOutCommandLineArgs;
	Parms.InOutDeviceProfileCvars = InOutDeviceProfileCvars;
	Parms.InOutExecCmds = InOutExecCmds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting.BuildNewProcessCommandLine
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      InOutUnrealURLParams                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InOutCommandLineArgs                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting::BuildNewProcessCommandLine(class FString& InOutUnrealURLParams, class FString& InOutCommandLineArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting", "BuildNewProcessCommandLine");

	Params::UMoviePipelineSetting_BuildNewProcessCommandLine_Params Parms{};

	Parms.InOutUnrealURLParams = InOutUnrealURLParams;
	Parms.InOutCommandLineArgs = InOutCommandLineArgs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineCameraSetting
// (None)

class UClass* UMoviePipelineCameraSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCameraSetting");

	return Clss;
}


// MoviePipelineCameraSetting MovieRenderPipelineCore.Default__MoviePipelineCameraSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCameraSetting* UMoviePipelineCameraSetting::GetDefaultObj()
{
	static class UMoviePipelineCameraSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCameraSetting*>(UMoviePipelineCameraSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineGameMode
// (Actor)

class UClass* AMoviePipelineGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineGameMode");

	return Clss;
}


// MoviePipelineGameMode MovieRenderPipelineCore.Default__MoviePipelineGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AMoviePipelineGameMode* AMoviePipelineGameMode::GetDefaultObj()
{
	static class AMoviePipelineGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoviePipelineGameMode*>(AMoviePipelineGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineHighResSetting
// (None)

class UClass* UMoviePipelineHighResSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineHighResSetting");

	return Clss;
}


// MoviePipelineHighResSetting MovieRenderPipelineCore.Default__MoviePipelineHighResSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineHighResSetting* UMoviePipelineHighResSetting::GetDefaultObj()
{
	static class UMoviePipelineHighResSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineHighResSetting*>(UMoviePipelineHighResSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
// (None)

class UClass* UMoviePipelineInProcessExecutorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineInProcessExecutorSettings");

	return Clss;
}


// MoviePipelineInProcessExecutorSettings MovieRenderPipelineCore.Default__MoviePipelineInProcessExecutorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineInProcessExecutorSettings* UMoviePipelineInProcessExecutorSettings::GetDefaultObj()
{
	static class UMoviePipelineInProcessExecutorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineInProcessExecutorSettings*>(UMoviePipelineInProcessExecutorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineOutputBase
// (None)

class UClass* UMoviePipelineOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineOutputBase");

	return Clss;
}


// MoviePipelineOutputBase MovieRenderPipelineCore.Default__MoviePipelineOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineOutputBase* UMoviePipelineOutputBase::GetDefaultObj()
{
	static class UMoviePipelineOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineOutputBase*>(UMoviePipelineOutputBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCollection
// (None)

class UClass* UMoviePipelineCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCollection");

	return Clss;
}


// MoviePipelineCollection MovieRenderPipelineCore.Default__MoviePipelineCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCollection* UMoviePipelineCollection::GetDefaultObj()
{
	static class UMoviePipelineCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCollection*>(UMoviePipelineCollection::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineCollection.SetCollectionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InName                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineCollection::SetCollectionName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollection", "SetCollectionName");

	Params::UMoviePipelineCollection_SetCollectionName_Params Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollection.GetMatchingActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInvertResult                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UMoviePipelineCollection::GetMatchingActors(class UWorld* World, bool bInvertResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollection", "GetMatchingActors");

	Params::UMoviePipelineCollection_GetMatchingActors_Params Parms{};

	Parms.World = World;
	Parms.bInvertResult = bInvertResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineCollection.GetCollectionName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineCollection::GetCollectionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollection", "GetCollectionName");

	Params::UMoviePipelineCollection_GetCollectionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineCollection.AddQuery
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineCollectionQuery*Query                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineCollection::AddQuery(class UMoviePipelineCollectionQuery* Query)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollection", "AddQuery");

	Params::UMoviePipelineCollection_AddQuery_Params Parms{};

	Parms.Query = Query;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineCollectionModifier
// (None)

class UClass* UMoviePipelineCollectionModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCollectionModifier");

	return Clss;
}


// MoviePipelineCollectionModifier MovieRenderPipelineCore.Default__MoviePipelineCollectionModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCollectionModifier* UMoviePipelineCollectionModifier::GetDefaultObj()
{
	static class UMoviePipelineCollectionModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCollectionModifier*>(UMoviePipelineCollectionModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.SetIsInverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsInverted                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionModifier::SetIsInverted(bool bIsInverted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionModifier", "SetIsInverted");

	Params::UMoviePipelineCollectionModifier_SetIsInverted_Params Parms{};

	Parms.bIsInverted = bIsInverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.SetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UMoviePipelineCollection*>InCollections                                                    (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionModifier::SetCollections(const TArray<class UMoviePipelineCollection*>& InCollections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionModifier", "SetCollections");

	Params::UMoviePipelineCollectionModifier_SetCollections_Params Parms{};

	Parms.InCollections = InCollections;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.IsInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineCollectionModifier::IsInverted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionModifier", "IsInverted");

	Params::UMoviePipelineCollectionModifier_IsInverted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.GetCollections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineCollection*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineCollection*> UMoviePipelineCollectionModifier::GetCollections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionModifier", "GetCollections");

	Params::UMoviePipelineCollectionModifier_GetCollections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionModifier.AddCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineCollection*    Collection                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionModifier::AddCollection(class UMoviePipelineCollection* Collection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionModifier", "AddCollection");

	Params::UMoviePipelineCollectionModifier_AddCollection_Params Parms{};

	Parms.Collection = Collection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineMaterialModifier
// (None)

class UClass* UMoviePipelineMaterialModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineMaterialModifier");

	return Clss;
}


// MoviePipelineMaterialModifier MovieRenderPipelineCore.Default__MoviePipelineMaterialModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineMaterialModifier* UMoviePipelineMaterialModifier::GetDefaultObj()
{
	static class UMoviePipelineMaterialModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineMaterialModifier*>(UMoviePipelineMaterialModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineMaterialModifier.UndoModifier
// (Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineMaterialModifier::UndoModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMaterialModifier", "UndoModifier");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineMaterialModifier.SetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>InMaterial                                                       (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineMaterialModifier::SetMaterial(TSoftObjectPtr<class UMaterialInterface> InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMaterialModifier", "SetMaterial");

	Params::UMoviePipelineMaterialModifier_SetMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineMaterialModifier.ApplyModifier
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineMaterialModifier::ApplyModifier(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineMaterialModifier", "ApplyModifier");

	Params::UMoviePipelineMaterialModifier_ApplyModifier_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineVisibilityModifier
// (None)

class UClass* UMoviePipelineVisibilityModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineVisibilityModifier");

	return Clss;
}


// MoviePipelineVisibilityModifier MovieRenderPipelineCore.Default__MoviePipelineVisibilityModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineVisibilityModifier* UMoviePipelineVisibilityModifier::GetDefaultObj()
{
	static class UMoviePipelineVisibilityModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineVisibilityModifier*>(UMoviePipelineVisibilityModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.UndoModifier
// (Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineVisibilityModifier::UndoModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineVisibilityModifier", "UndoModifier");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.SetHidden
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsHidden                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineVisibilityModifier::SetHidden(bool bInIsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineVisibilityModifier", "SetHidden");

	Params::UMoviePipelineVisibilityModifier_SetHidden_Params Parms{};

	Parms.bInIsHidden = bInIsHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.IsHidden
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineVisibilityModifier::IsHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineVisibilityModifier", "IsHidden");

	Params::UMoviePipelineVisibilityModifier_IsHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineVisibilityModifier.ApplyModifier
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineVisibilityModifier::ApplyModifier(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineVisibilityModifier", "ApplyModifier");

	Params::UMoviePipelineVisibilityModifier_ApplyModifier_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineCollectionQuery
// (None)

class UClass* UMoviePipelineCollectionQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCollectionQuery");

	return Clss;
}


// MoviePipelineCollectionQuery MovieRenderPipelineCore.Default__MoviePipelineCollectionQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCollectionQuery* UMoviePipelineCollectionQuery::GetDefaultObj()
{
	static class UMoviePipelineCollectionQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCollectionQuery*>(UMoviePipelineCollectionQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery
// (None)

class UClass* UMoviePipelineCollectionCommonQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCollectionCommonQuery");

	return Clss;
}


// MoviePipelineCollectionCommonQuery MovieRenderPipelineCore.Default__MoviePipelineCollectionCommonQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCollectionCommonQuery* UMoviePipelineCollectionCommonQuery::GetDefaultObj()
{
	static class UMoviePipelineCollectionCommonQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCollectionCommonQuery*>(UMoviePipelineCollectionCommonQuery::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                InTags                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionCommonQuery::SetTags(TArray<class FName>& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionCommonQuery", "SetTags");

	Params::UMoviePipelineCollectionCommonQuery_SetTags_Params Parms{};

	Parms.InTags = InTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetQueryMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMoviePipelineCollectionCommonQueryModeInQueryMode                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionCommonQuery::SetQueryMode(enum class EMoviePipelineCollectionCommonQueryMode InQueryMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionCommonQuery", "SetQueryMode");

	Params::UMoviePipelineCollectionCommonQuery_SetQueryMode_Params Parms{};

	Parms.InQueryMode = InQueryMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetComponentTypes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              InComponentTypes                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionCommonQuery::SetComponentTypes(const TArray<class UClass*>& InComponentTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionCommonQuery", "SetComponentTypes");

	Params::UMoviePipelineCollectionCommonQuery_SetComponentTypes_Params Parms{};

	Parms.InComponentTypes = InComponentTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.SetActorNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InActorNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UMoviePipelineCollectionCommonQuery::SetActorNames(TArray<class FString>& InActorNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionCommonQuery", "SetActorNames");

	Params::UMoviePipelineCollectionCommonQuery_SetActorNames_Params Parms{};

	Parms.InActorNames = InActorNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineCollectionCommonQuery.DoesActorMatchQuery
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineCollectionCommonQuery::DoesActorMatchQuery(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineCollectionCommonQuery", "DoesActorMatchQuery");

	Params::UMoviePipelineCollectionCommonQuery_DoesActorMatchQuery_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineRenderLayer
// (None)

class UClass* UMoviePipelineRenderLayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineRenderLayer");

	return Clss;
}


// MoviePipelineRenderLayer MovieRenderPipelineCore.Default__MoviePipelineRenderLayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineRenderLayer* UMoviePipelineRenderLayer::GetDefaultObj()
{
	static class UMoviePipelineRenderLayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineRenderLayer*>(UMoviePipelineRenderLayer::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.UndoPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayer::UndoPreview(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "UndoPreview");

	Params::UMoviePipelineRenderLayer_UndoPreview_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.SetRenderLayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayer::SetRenderLayerName(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "SetRenderLayerName");

	Params::UMoviePipelineRenderLayer_SetRenderLayerName_Params Parms{};

	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.RemoveModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineCollectionModifier*Modifier                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayer::RemoveModifier(class UMoviePipelineCollectionModifier* Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "RemoveModifier");

	Params::UMoviePipelineRenderLayer_RemoveModifier_Params Parms{};

	Parms.Modifier = Modifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.Preview
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayer::Preview(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "Preview");

	Params::UMoviePipelineRenderLayer_Preview_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.GetRenderLayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineRenderLayer::GetRenderLayerName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "GetRenderLayerName");

	Params::UMoviePipelineRenderLayer_GetRenderLayerName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.GetModifiers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineCollectionModifier*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineCollectionModifier*> UMoviePipelineRenderLayer::GetModifiers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "GetModifiers");

	Params::UMoviePipelineRenderLayer_GetModifiers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.GetCollectionByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineCollection*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineCollection* UMoviePipelineRenderLayer::GetCollectionByName(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "GetCollectionByName");

	Params::UMoviePipelineRenderLayer_GetCollectionByName_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayer.AddModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineCollectionModifier*Modifier                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayer::AddModifier(class UMoviePipelineCollectionModifier* Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayer", "AddModifier");

	Params::UMoviePipelineRenderLayer_AddModifier_Params Parms{};

	Parms.Modifier = Modifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem
// (None)

class UClass* UMoviePipelineRenderLayerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineRenderLayerSubsystem");

	return Clss;
}


// MoviePipelineRenderLayerSubsystem MovieRenderPipelineCore.Default__MoviePipelineRenderLayerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineRenderLayerSubsystem* UMoviePipelineRenderLayerSubsystem::GetDefaultObj()
{
	static class UMoviePipelineRenderLayerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineRenderLayerSubsystem*>(UMoviePipelineRenderLayerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.SetActiveRenderLayerByObj
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineRenderLayer*   RenderLayer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayerSubsystem::SetActiveRenderLayerByObj(class UMoviePipelineRenderLayer* RenderLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "SetActiveRenderLayerByObj");

	Params::UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByObj_Params Parms{};

	Parms.RenderLayer = RenderLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.SetActiveRenderLayerByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RenderLayerName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayerSubsystem::SetActiveRenderLayerByName(const class FString& RenderLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "SetActiveRenderLayerByName");

	Params::UMoviePipelineRenderLayerSubsystem_SetActiveRenderLayerByName_Params Parms{};

	Parms.RenderLayerName = RenderLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineRenderLayerSubsystem::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.RemoveRenderLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RenderLayerName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayerSubsystem::RemoveRenderLayer(const class FString& RenderLayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "RemoveRenderLayer");

	Params::UMoviePipelineRenderLayerSubsystem_RemoveRenderLayer_Params Parms{};

	Parms.RenderLayerName = RenderLayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.PreviewModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineCollectionModifier*Modifier                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayerSubsystem::PreviewModifier(class UMoviePipelineCollectionModifier* Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "PreviewModifier");

	Params::UMoviePipelineRenderLayerSubsystem_PreviewModifier_Params Parms{};

	Parms.Modifier = Modifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.PreviewCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineCollection*    Collection                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineRenderLayerSubsystem::PreviewCollection(class UMoviePipelineCollection* Collection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "PreviewCollection");

	Params::UMoviePipelineRenderLayerSubsystem_PreviewCollection_Params Parms{};

	Parms.Collection = Collection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.GetRenderLayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UMoviePipelineRenderLayer*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineRenderLayer*> UMoviePipelineRenderLayerSubsystem::GetRenderLayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "GetRenderLayers");

	Params::UMoviePipelineRenderLayerSubsystem_GetRenderLayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.GetFromWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineRenderLayerSubsystem*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineRenderLayerSubsystem* UMoviePipelineRenderLayerSubsystem::GetFromWorld(class UWorld* World)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "GetFromWorld");

	Params::UMoviePipelineRenderLayerSubsystem_GetFromWorld_Params Parms{};

	Parms.World = World;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.GetActiveRenderLayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineRenderLayer*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineRenderLayer* UMoviePipelineRenderLayerSubsystem::GetActiveRenderLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "GetActiveRenderLayer");

	Params::UMoviePipelineRenderLayerSubsystem_GetActiveRenderLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.ClearModifierPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineRenderLayerSubsystem::ClearModifierPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "ClearModifierPreview");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.ClearCollectionPreview
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineRenderLayerSubsystem::ClearCollectionPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "ClearCollectionPreview");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.ClearActiveRenderLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineRenderLayerSubsystem::ClearActiveRenderLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "ClearActiveRenderLayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineRenderLayerSubsystem.AddRenderLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineRenderLayer*   RenderLayer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineRenderLayerSubsystem::AddRenderLayer(class UMoviePipelineRenderLayer* RenderLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineRenderLayerSubsystem", "AddRenderLayer");

	Params::UMoviePipelineRenderLayerSubsystem_AddRenderLayer_Params Parms{};

	Parms.RenderLayer = RenderLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase
// (None)

class UClass* UMoviePipelineSetting_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineSetting_BlueprintBase");

	return Clss;
}


// MoviePipelineSetting_BlueprintBase MovieRenderPipelineCore.Default__MoviePipelineSetting_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineSetting_BlueprintBase* UMoviePipelineSetting_BlueprintBase::GetDefaultObj()
{
	static class UMoviePipelineSetting_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineSetting_BlueprintBase*>(UMoviePipelineSetting_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveTeardownForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting_BlueprintBase::ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveTeardownForPipelineImpl");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveTeardownForPipelineImpl_Params Parms{};

	Parms.InPipeline = InPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveSetupForPipelineImpl
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineSetting_BlueprintBase::ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveSetupForPipelineImpl");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveSetupForPipelineImpl_Params Parms{};

	Parms.InPipeline = InPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.ReceiveGetFormatArguments
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FMoviePipelineFormatArgs    InOutFormatArgs                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMoviePipelineFormatArgs    ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMoviePipelineFormatArgs UMoviePipelineSetting_BlueprintBase::ReceiveGetFormatArguments(struct FMoviePipelineFormatArgs& InOutFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "ReceiveGetFormatArguments");

	Params::UMoviePipelineSetting_BlueprintBase_ReceiveGetFormatArguments_Params Parms{};

	Parms.InOutFormatArgs = InOutFormatArgs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineSetting_BlueprintBase.OnEngineTickBeginFrame
// (Event, Public, BlueprintEvent)
// Parameters:

void UMoviePipelineSetting_BlueprintBase::OnEngineTickBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineSetting_BlueprintBase", "OnEngineTickBeginFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Class MovieRenderPipelineCore.MoviePipelineViewFamilySetting
// (None)

class UClass* UMoviePipelineViewFamilySetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineViewFamilySetting");

	return Clss;
}


// MoviePipelineViewFamilySetting MovieRenderPipelineCore.Default__MoviePipelineViewFamilySetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineViewFamilySetting* UMoviePipelineViewFamilySetting::GetDefaultObj()
{
	static class UMoviePipelineViewFamilySetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineViewFamilySetting*>(UMoviePipelineViewFamilySetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MovieRenderDebugWidget
// (None)

class UClass* UMovieRenderDebugWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieRenderDebugWidget");

	return Clss;
}


// MovieRenderDebugWidget MovieRenderPipelineCore.Default__MovieRenderDebugWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieRenderDebugWidget* UMovieRenderDebugWidget::GetDefaultObj()
{
	static class UMovieRenderDebugWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieRenderDebugWidget*>(UMovieRenderDebugWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MovieRenderDebugWidget.OnInitializedForPipeline
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipeline*              ForPipeline                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieRenderDebugWidget::OnInitializedForPipeline(class UMoviePipeline* ForPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieRenderDebugWidget", "OnInitializedForPipeline");

	Params::UMovieRenderDebugWidget_OnInitializedForPipeline_Params Parms{};

	Parms.ForPipeline = ForPipeline;

	UObject::ProcessEvent(Func, &Parms);

}


// Class MovieRenderPipelineCore.MoviePipeline
// (None)

class UClass* UMoviePipeline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipeline");

	return Clss;
}


// MoviePipeline MovieRenderPipelineCore.Default__MoviePipeline
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipeline* UMoviePipeline::GetDefaultObj()
{
	static class UMoviePipeline* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipeline*>(UMoviePipeline::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipeline.SetInitializationTime
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipeline::SetInitializationTime(struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "SetInitializationTime");

	Params::UMoviePipeline_SetInitializationTime_Params Parms{};

	Parms.InDateTime = InDateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.OnMoviePipelineFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipeline::OnMoviePipelineFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "OnMoviePipelineFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipeline::Initialize(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "Initialize");

	Params::UMoviePipeline_Initialize_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPreviewTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture* UMoviePipeline::GetPreviewTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPreviewTexture");

	Params::UMoviePipeline_GetPreviewTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPipelinePrimaryConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelinePrimaryConfig* UMoviePipeline::GetPipelinePrimaryConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPipelinePrimaryConfig");

	Params::UMoviePipeline_GetPipelinePrimaryConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetPipelineMasterConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelinePrimaryConfig* UMoviePipeline::GetPipelineMasterConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetPipelineMasterConfig");

	Params::UMoviePipeline_GetPipelineMasterConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetInitializationTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UMoviePipeline::GetInitializationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetInitializationTime");

	Params::UMoviePipeline_GetInitializationTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipeline.GetCurrentJob
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipeline::GetCurrentJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipeline", "GetCurrentJob");

	Params::UMoviePipeline_GetCurrentJob_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
// (None)

class UClass* UMoviePipelineCustomTimeStep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCustomTimeStep");

	return Clss;
}


// MoviePipelineCustomTimeStep MovieRenderPipelineCore.Default__MoviePipelineCustomTimeStep
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCustomTimeStep* UMoviePipelineCustomTimeStep::GetDefaultObj()
{
	static class UMoviePipelineCustomTimeStep* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCustomTimeStep*>(UMoviePipelineCustomTimeStep::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
// (None)

class UClass* UMoviePipelineAntiAliasingSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineAntiAliasingSetting");

	return Clss;
}


// MoviePipelineAntiAliasingSetting MovieRenderPipelineCore.Default__MoviePipelineAntiAliasingSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineAntiAliasingSetting* UMoviePipelineAntiAliasingSetting::GetDefaultObj()
{
	static class UMoviePipelineAntiAliasingSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineAntiAliasingSetting*>(UMoviePipelineAntiAliasingSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
// (None)

class UClass* UMoviePipelineBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineBlueprintLibrary");

	return Clss;
}


// MoviePipelineBlueprintLibrary MovieRenderPipelineCore.Default__MoviePipelineBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineBlueprintLibrary* UMoviePipelineBlueprintLibrary::GetDefaultObj()
{
	static class UMoviePipelineBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineBlueprintLibrary*>(UMoviePipelineBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.UpdateJobShotListFromSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShotsChanged                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool* bShotsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "UpdateJobShotListFromSequence");

	Params::UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Params Parms{};

	Parms.InSequence = InSequence;
	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShotsChanged != nullptr)
		*bShotsChanged = Parms.bShotsChanged;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveVersionNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FMoviePipelineFilenameResolveParamsInParams                                                         (Parm, NativeAccessSpecifierPublic)
// bool                               bGetNextVersion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoviePipelineBlueprintLibrary::ResolveVersionNumber(const struct FMoviePipelineFilenameResolveParams& InParams, bool bGetNextVersion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "ResolveVersionNumber");

	Params::UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Params Parms{};

	Parms.InParams = InParams;
	Parms.bGetNextVersion = bGetNextVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.ResolveFilenameFormatArguments
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFormatString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoviePipelineFilenameResolveParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      OutFinalPath                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoviePipelineFormatArgs    OutMergedFormatArgs                                              (Parm, OutParm, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(const class FString& InFormatString, struct FMoviePipelineFilenameResolveParams& InParams, class FString* OutFinalPath, struct FMoviePipelineFormatArgs* OutMergedFormatArgs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "ResolveFilenameFormatArguments");

	Params::UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Params Parms{};

	Parms.InFormatString = InFormatString;
	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFinalPath != nullptr)
		*OutFinalPath = std::move(Parms.OutFinalPath);

	if (OutMergedFormatArgs != nullptr)
		*OutMergedFormatArgs = std::move(Parms.OutMergedFormatArgs);

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.LoadManifestFileFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InManifestFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineQueue*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineQueue* UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(const class FString& InManifestFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "LoadManifestFileFromString");

	Params::UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Params Parms{};

	Parms.InManifestFilePath = InManifestFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UMoviePipelineBlueprintLibrary::GetRootTimecode(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetRootTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetRootTimecode_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetRootFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMoviePipelineBlueprintLibrary::GetRootFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetRootFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetPipelineState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovieRenderPipelineStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieRenderPipelineState UMoviePipelineBlueprintLibrary::GetPipelineState(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetPipelineState");

	Params::UMoviePipelineBlueprintLibrary_GetPipelineState_Params Parms{};

	Parms.InPipeline = InPipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallSegmentCounts
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutCurrentIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutTotalCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetOverallSegmentCounts");

	Params::UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCurrentIndex != nullptr)
		*OutCurrentIndex = Parms.OutCurrentIndex;

	if (OutTotalCount != nullptr)
		*OutTotalCount = Parms.OutTotalCount;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetOverallOutputFrames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutCurrentIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutTotalCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32* OutCurrentIndex, int32* OutTotalCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetOverallOutputFrames");

	Params::UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCurrentIndex != nullptr)
		*OutCurrentIndex = Parms.OutCurrentIndex;

	if (OutTotalCount != nullptr)
		*OutTotalCount = Parms.OutTotalCount;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMoviePipelineEngineChangelistLabel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMoviePipelineEngineChangelistLabel");

	Params::UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UMoviePipelineBlueprintLibrary::GetMasterTimecode(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMasterTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetMasterTimecode_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMasterFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMasterFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetMapPackageName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineBlueprintLibrary::GetMapPackageName(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetMapPackageName");

	Params::UMoviePipelineBlueprintLibrary_GetMapPackageName_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoviePipelineBlueprintLibrary::GetJobName(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobName");

	Params::UMoviePipelineBlueprintLibrary_GetJobName_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobInitializationTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UMoviePipelineBlueprintLibrary::GetJobInitializationTime(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobInitializationTime");

	Params::UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetJobAuthor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMoviePipelineBlueprintLibrary::GetJobAuthor(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetJobAuthor");

	Params::UMoviePipelineBlueprintLibrary_GetJobAuthor_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEstimatedTimeRemaining
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   OutEstimate                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetEstimatedTimeRemaining");

	Params::UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Params Parms{};

	Parms.InPipeline = InPipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEstimate != nullptr)
		*OutEstimate = std::move(Parms.OutEstimate);

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetEffectiveOutputResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMoviePipelinePrimaryConfig* InPrimaryConfig                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorShot*  InPipelineExecutorShot                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetEffectiveOutputResolution");

	Params::UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Params Parms{};

	Parms.InPrimaryConfig = InPrimaryConfig;
	Parms.InPipelineExecutorShot = InPipelineExecutorShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentShotTimecode");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentShotFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentShotFrameNumber");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSequence
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* UMoviePipelineBlueprintLibrary::GetCurrentSequence(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSequence");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSequence_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentWorkMetrics
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMoviePipelineSegmentWorkMetricsReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMoviePipelineSegmentWorkMetrics UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentWorkMetrics");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovieRenderShotState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieRenderShotState UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentState");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentSegmentName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutOuterName                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// class FText                        OutInnerName                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentSegmentName");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOuterName != nullptr)
		*OutOuterName = Parms.OutOuterName;

	if (OutInnerName != nullptr)
		*OutInnerName = Parms.OutInnerName;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocusDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentFocusDistance");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentFocalLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentFocalLength");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentExecutorShot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorShot*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorShot* UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentExecutorShot");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCurrentAperture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InMoviePipeline                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCurrentAperture(class UMoviePipeline* InMoviePipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCurrentAperture");

	Params::UMoviePipelineBlueprintLibrary_GetCurrentAperture_Params Parms{};

	Parms.InMoviePipeline = InMoviePipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.GetCompletionPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMoviePipeline*              InPipeline                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineBlueprintLibrary::GetCompletionPercentage(class UMoviePipeline* InPipeline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "GetCompletionPercentage");

	Params::UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Params Parms{};

	Parms.InPipeline = InPipeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.FindOrGetDefaultSettingForShot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InSettingType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelinePrimaryConfig* InPrimaryConfig                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorShot*  InShot                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineSetting*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineSetting* UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InShot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "FindOrGetDefaultSettingForShot");

	Params::UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Params Parms{};

	Parms.InSettingType = InSettingType;
	Parms.InPrimaryConfig = InPrimaryConfig;
	Parms.InShot = InShot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineBlueprintLibrary.DuplicateSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneSequence*         InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* UMoviePipelineBlueprintLibrary::DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineBlueprintLibrary", "DuplicateSequence");

	Params::UMoviePipelineBlueprintLibrary_DuplicateSequence_Params Parms{};

	Parms.Outer = Outer;
	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineColorSetting
// (None)

class UClass* UMoviePipelineColorSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineColorSetting");

	return Clss;
}


// MoviePipelineColorSetting MovieRenderPipelineCore.Default__MoviePipelineColorSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineColorSetting* UMoviePipelineColorSetting::GetDefaultObj()
{
	static class UMoviePipelineColorSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineColorSetting*>(UMoviePipelineColorSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoder
// (None)

class UClass* UMoviePipelineCommandLineEncoder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCommandLineEncoder");

	return Clss;
}


// MoviePipelineCommandLineEncoder MovieRenderPipelineCore.Default__MoviePipelineCommandLineEncoder
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCommandLineEncoder* UMoviePipelineCommandLineEncoder::GetDefaultObj()
{
	static class UMoviePipelineCommandLineEncoder* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCommandLineEncoder*>(UMoviePipelineCommandLineEncoder::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineCommandLineEncoderSettings
// (None)

class UClass* UMoviePipelineCommandLineEncoderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineCommandLineEncoderSettings");

	return Clss;
}


// MoviePipelineCommandLineEncoderSettings MovieRenderPipelineCore.Default__MoviePipelineCommandLineEncoderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineCommandLineEncoderSettings* UMoviePipelineCommandLineEncoderSettings::GetDefaultObj()
{
	static class UMoviePipelineCommandLineEncoderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineCommandLineEncoderSettings*>(UMoviePipelineCommandLineEncoderSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineConfigBase
// (None)

class UClass* UMoviePipelineConfigBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineConfigBase");

	return Clss;
}


// MoviePipelineConfigBase MovieRenderPipelineCore.Default__MoviePipelineConfigBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineConfigBase* UMoviePipelineConfigBase::GetDefaultObj()
{
	static class UMoviePipelineConfigBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineConfigBase*>(UMoviePipelineConfigBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.SetConfigOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineConfigBase*    InConfig                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineConfigBase::SetConfigOrigin(class UMoviePipelineConfigBase* InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "SetConfigOrigin");

	Params::UMoviePipelineConfigBase_SetConfigOrigin_Params Parms{};

	Parms.InConfig = InConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.RemoveSetting
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineSetting*       InSetting                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineConfigBase::RemoveSetting(class UMoviePipelineSetting* InSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "RemoveSetting");

	Params::UMoviePipelineConfigBase_RemoveSetting_Params Parms{};

	Parms.InSetting = InSetting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetUserSettings
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::GetUserSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "GetUserSettings");

	Params::UMoviePipelineConfigBase_GetUserSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.GetConfigOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineConfigBase*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineConfigBase* UMoviePipelineConfigBase::GetConfigOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "GetConfigOrigin");

	Params::UMoviePipelineConfigBase_GetConfigOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingsByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelineConfigBase::FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindSettingsByClass");

	Params::UMoviePipelineConfigBase_FindSettingsByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindSettingByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineSetting*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineSetting* UMoviePipelineConfigBase::FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindSettingByClass");

	Params::UMoviePipelineConfigBase_FindSettingByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.FindOrAddSettingByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineSetting>InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineSetting*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineSetting* UMoviePipelineConfigBase::FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, bool bIncludeDisabledSettings, bool bExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "FindOrAddSettingByClass");

	Params::UMoviePipelineConfigBase_FindOrAddSettingByClass_Params Parms{};

	Parms.InClass = InClass;
	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;
	Parms.bExactMatch = bExactMatch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineConfigBase.CopyFrom
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineConfigBase*    InConfig                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineConfigBase::CopyFrom(class UMoviePipelineConfigBase* InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineConfigBase", "CopyFrom");

	Params::UMoviePipelineConfigBase_CopyFrom_Params Parms{};

	Parms.InConfig = InConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineDebugSettings
// (None)

class UClass* UMoviePipelineDebugSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineDebugSettings");

	return Clss;
}


// MoviePipelineDebugSettings MovieRenderPipelineCore.Default__MoviePipelineDebugSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineDebugSettings* UMoviePipelineDebugSettings::GetDefaultObj()
{
	static class UMoviePipelineDebugSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineDebugSettings*>(UMoviePipelineDebugSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineExecutorBase
// (None)

class UClass* UMoviePipelineExecutorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorBase");

	return Clss;
}


// MoviePipelineExecutorBase MovieRenderPipelineCore.Default__MoviePipelineExecutorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorBase* UMoviePipelineExecutorBase::GetDefaultObj()
{
	static class UMoviePipelineExecutorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorBase*>(UMoviePipelineExecutorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetStatusProgress");

	Params::UMoviePipelineExecutorBase_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::SetStatusMessage(const class FString& InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetStatusMessage");

	Params::UMoviePipelineExecutorBase_SetStatusMessage_Params Parms{};

	Parms.InStatus = InStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SetMoviePipelineClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InPipelineClass                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::SetMoviePipelineClass(class UClass* InPipelineClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SetMoviePipelineClass");

	Params::UMoviePipelineExecutorBase_SetMoviePipelineClass_Params Parms{};

	Parms.InPipelineClass = InPipelineClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendSocketMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::SendSocketMessage(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SendSocketMessage");

	Params::UMoviePipelineExecutorBase_SendSocketMessage_Params Parms{};

	Parms.InMessage = InMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.SendHTTPRequest
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InURL                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InVerb                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMessage                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> InHeaders                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMoviePipelineExecutorBase::SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString>& InHeaders)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "SendHTTPRequest");

	Params::UMoviePipelineExecutorBase_SendHTTPRequest_Params Parms{};

	Parms.InURL = InURL;
	Parms.InVerb = InVerb;
	Parms.InMessage = InMessage;
	Parms.InHeaders = InHeaders;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorFinishedImpl
// (Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipelineExecutorBase::OnExecutorFinishedImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnExecutorFinishedImpl");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnExecutorErroredImpl
// (Native, Protected, BlueprintCallable)
// Parameters:
// class UMoviePipeline*              ErroredPipeline                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFatal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ErrorReason                                                      (Parm, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, class FText ErrorReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnExecutorErroredImpl");

	Params::UMoviePipelineExecutorBase_OnExecutorErroredImpl_Params Parms{};

	Parms.ErroredPipeline = ErroredPipeline;
	Parms.bFatal = bFatal;
	Parms.ErrorReason = ErrorReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.OnBeginFrame
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::OnBeginFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "OnBeginFrame");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsSocketConnected
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::IsSocketConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "IsSocketConnected");

	Params::UMoviePipelineExecutorBase_IsSocketConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.IsRendering
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::IsRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "IsRendering");

	Params::UMoviePipelineExecutorBase_IsRendering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineExecutorBase::GetStatusProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "GetStatusProgress");

	Params::UMoviePipelineExecutorBase_GetStatusProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorBase::GetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "GetStatusMessage");

	Params::UMoviePipelineExecutorBase_GetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.Execute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*         InPipelineQueue                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorBase::Execute(class UMoviePipelineQueue* InPipelineQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "Execute");

	Params::UMoviePipelineExecutorBase_Execute_Params Parms{};

	Parms.InPipelineQueue = InPipelineQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.DisconnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UMoviePipelineExecutorBase::DisconnectSocket()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "DisconnectSocket");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.ConnectSocket
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      InHostName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InPort                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorBase::ConnectSocket(const class FString& InHostName, int32 InPort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "ConnectSocket");

	Params::UMoviePipelineExecutorBase_ConnectSocket_Params Parms{};

	Parms.InHostName = InHostName;
	Parms.InPort = InPort;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelCurrentJob
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::CancelCurrentJob()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "CancelCurrentJob");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorBase.CancelAllJobs
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorBase::CancelAllJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorBase", "CancelAllJobs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
// (None)

class UClass* UMoviePipelineFCPXMLExporter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineFCPXMLExporter");

	return Clss;
}


// MoviePipelineFCPXMLExporter MovieRenderPipelineCore.Default__MoviePipelineFCPXMLExporter
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineFCPXMLExporter* UMoviePipelineFCPXMLExporter::GetDefaultObj()
{
	static class UMoviePipelineFCPXMLExporter* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineFCPXMLExporter*>(UMoviePipelineFCPXMLExporter::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
// (None)

class UClass* UMoviePipelineGameOverrideSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineGameOverrideSetting");

	return Clss;
}


// MoviePipelineGameOverrideSetting MovieRenderPipelineCore.Default__MoviePipelineGameOverrideSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineGameOverrideSetting* UMoviePipelineGameOverrideSetting::GetDefaultObj()
{
	static class UMoviePipelineGameOverrideSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineGameOverrideSetting*>(UMoviePipelineGameOverrideSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
// (None)

class UClass* UMoviePipelineLinearExecutorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineLinearExecutorBase");

	return Clss;
}


// MoviePipelineLinearExecutorBase MovieRenderPipelineCore.Default__MoviePipelineLinearExecutorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineLinearExecutorBase* UMoviePipelineLinearExecutorBase::GetDefaultObj()
{
	static class UMoviePipelineLinearExecutorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineLinearExecutorBase*>(UMoviePipelineLinearExecutorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
// (None)

class UClass* UMoviePipelineInProcessExecutor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineInProcessExecutor");

	return Clss;
}


// MoviePipelineInProcessExecutor MovieRenderPipelineCore.Default__MoviePipelineInProcessExecutor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineInProcessExecutor* UMoviePipelineInProcessExecutor::GetDefaultObj()
{
	static class UMoviePipelineInProcessExecutor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineInProcessExecutor*>(UMoviePipelineInProcessExecutor::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineOutputSetting
// (None)

class UClass* UMoviePipelineOutputSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineOutputSetting");

	return Clss;
}


// MoviePipelineOutputSetting MovieRenderPipelineCore.Default__MoviePipelineOutputSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineOutputSetting* UMoviePipelineOutputSetting::GetDefaultObj()
{
	static class UMoviePipelineOutputSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineOutputSetting*>(UMoviePipelineOutputSetting::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelinePrimaryConfig
// (None)

class UClass* UMoviePipelinePrimaryConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelinePrimaryConfig");

	return Clss;
}


// MoviePipelinePrimaryConfig MovieRenderPipelineCore.Default__MoviePipelinePrimaryConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelinePrimaryConfig* UMoviePipelinePrimaryConfig::GetDefaultObj()
{
	static class UMoviePipelinePrimaryConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelinePrimaryConfig*>(UMoviePipelinePrimaryConfig::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.InitializeTransientSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelinePrimaryConfig::InitializeTransientSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "InitializeTransientSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetTransientSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelinePrimaryConfig::GetTransientSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "GetTransientSettings");

	Params::UMoviePipelinePrimaryConfig_GetTransientSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetEffectiveFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              InSequence                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameRate UMoviePipelinePrimaryConfig::GetEffectiveFrameRate(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "GetEffectiveFrameRate");

	Params::UMoviePipelinePrimaryConfig_GetEffectiveFrameRate_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelinePrimaryConfig.GetAllSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIncludeDisabledSettings                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeTransientSettings                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMoviePipelineSetting*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineSetting*> UMoviePipelinePrimaryConfig::GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePrimaryConfig", "GetAllSettings");

	Params::UMoviePipelinePrimaryConfig_GetAllSettings_Params Parms{};

	Parms.bIncludeDisabledSettings = bIncludeDisabledSettings;
	Parms.bIncludeTransientSettings = bIncludeTransientSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
// (None)

class UClass* UMoviePipelinePythonHostExecutor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelinePythonHostExecutor");

	return Clss;
}


// MoviePipelinePythonHostExecutor MovieRenderPipelineCore.Default__MoviePipelinePythonHostExecutor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelinePythonHostExecutor* UMoviePipelinePythonHostExecutor::GetDefaultObj()
{
	static class UMoviePipelinePythonHostExecutor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelinePythonHostExecutor*>(UMoviePipelinePythonHostExecutor::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.OnMapLoad
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWorld*                      InWorld                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelinePythonHostExecutor::OnMapLoad(class UWorld* InWorld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "OnMapLoad");

	Params::UMoviePipelinePythonHostExecutor_OnMapLoad_Params Parms{};

	Parms.InWorld = InWorld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.GetLastLoadedWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "GetLastLoadedWorld");

	Params::UMoviePipelinePythonHostExecutor_GetLastLoadedWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelinePythonHostExecutor.ExecuteDelayed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UMoviePipelineQueue*         InPipelineQueue                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelinePythonHostExecutor::ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelinePythonHostExecutor", "ExecuteDelayed");

	Params::UMoviePipelinePythonHostExecutor_ExecuteDelayed_Params Parms{};

	Parms.InPipelineQueue = InPipelineQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MovieRenderPipelineCore.MoviePipelineExecutorShot
// (None)

class UClass* UMoviePipelineExecutorShot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorShot");

	return Clss;
}


// MoviePipelineExecutorShot MovieRenderPipelineCore.Default__MoviePipelineExecutorShot
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorShot* UMoviePipelineExecutorShot::GetDefaultObj()
{
	static class UMoviePipelineExecutorShot* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorShot*>(UMoviePipelineExecutorShot::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.ShouldRender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorShot::ShouldRender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "ShouldRender");

	Params::UMoviePipelineExecutorShot_ShouldRender_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetStatusProgress");

	Params::UMoviePipelineExecutorShot_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetStatusMessage(const class FString& InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetStatusMessage");

	Params::UMoviePipelineExecutorShot_SetStatusMessage_Params Parms{};

	Parms.InStatus = InStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig*    InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetShotOverridePresetOrigin");

	Params::UMoviePipelineExecutorShot_SetShotOverridePresetOrigin_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineShotConfig*    InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetShotOverrideConfiguration");

	Params::UMoviePipelineExecutorShot_SetShotOverrideConfiguration_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetGraphPreset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieGraphConfig*           InGraphPreset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetGraphPreset(class UMovieGraphConfig* InGraphPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetGraphPreset");

	Params::UMoviePipelineExecutorShot_SetGraphPreset_Params Parms{};

	Parms.InGraphPreset = InGraphPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.SetGraphConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieGraphConfig*           InGraphConfig                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorShot::SetGraphConfig(class UMovieGraphConfig* InGraphConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "SetGraphConfig");

	Params::UMoviePipelineExecutorShot_SetGraphConfig_Params Parms{};

	Parms.InGraphConfig = InGraphConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.IsUsingGraphConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorShot::IsUsingGraphConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "IsUsingGraphConfiguration");

	Params::UMoviePipelineExecutorShot_IsUsingGraphConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineExecutorShot::GetStatusProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetStatusProgress");

	Params::UMoviePipelineExecutorShot_GetStatusProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorShot::GetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetStatusMessage");

	Params::UMoviePipelineExecutorShot_GetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverridePresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverridePresetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetShotOverridePresetOrigin");

	Params::UMoviePipelineExecutorShot_GetShotOverridePresetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetShotOverrideConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::GetShotOverrideConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetShotOverrideConfiguration");

	Params::UMoviePipelineExecutorShot_GetShotOverrideConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetGraphPreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieGraphConfig*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphConfig* UMoviePipelineExecutorShot::GetGraphPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetGraphPreset");

	Params::UMoviePipelineExecutorShot_GetGraphPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetGraphConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieGraphConfig*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphConfig* UMoviePipelineExecutorShot::GetGraphConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetGraphConfig");

	Params::UMoviePipelineExecutorShot_GetGraphConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.GetCameraName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InCameraIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorShot::GetCameraName(int32 InCameraIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "GetCameraName");

	Params::UMoviePipelineExecutorShot_GetCameraName_Params Parms{};

	Parms.InCameraIndex = InCameraIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorShot.AllocateNewShotOverrideConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineShotConfig>InConfigType                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineShotConfig*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineShotConfig* UMoviePipelineExecutorShot::AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorShot", "AllocateNewShotOverrideConfig");

	Params::UMoviePipelineExecutorShot_AllocateNewShotOverrideConfig_Params Parms{};

	Parms.InConfigType = InConfigType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineExecutorJob
// (None)

class UClass* UMoviePipelineExecutorJob::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineExecutorJob");

	return Clss;
}


// MoviePipelineExecutorJob MovieRenderPipelineCore.Default__MoviePipelineExecutorJob
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineExecutorJob* UMoviePipelineExecutorJob::GetDefaultObj()
{
	static class UMoviePipelineExecutorJob* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineExecutorJob*>(UMoviePipelineExecutorJob::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetStatusProgress(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetStatusProgress");

	Params::UMoviePipelineExecutorJob_SetStatusProgress_Params Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InStatus                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetStatusMessage(const class FString& InStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetStatusMessage");

	Params::UMoviePipelineExecutorJob_SetStatusMessage_Params Parms{};

	Parms.InStatus = InStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetSequence
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             InSequence                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetSequence(const struct FSoftObjectPath& InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetSequence");

	Params::UMoviePipelineExecutorJob_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetPresetOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelinePrimaryConfig* InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetPresetOrigin");

	Params::UMoviePipelineExecutorJob_SetPresetOrigin_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetIsEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetIsEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetIsEnabled");

	Params::UMoviePipelineExecutorJob_SetIsEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetGraphPreset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieGraphConfig*           InGraphPreset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetGraphPreset(class UMovieGraphConfig* InGraphPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetGraphPreset");

	Params::UMoviePipelineExecutorJob_SetGraphPreset_Params Parms{};

	Parms.InGraphPreset = InGraphPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetGraphConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieGraphConfig*           InGraphConfig                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetGraphConfig(class UMovieGraphConfig* InGraphConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetGraphConfig");

	Params::UMoviePipelineExecutorJob_SetGraphConfig_Params Parms{};

	Parms.InGraphConfig = InGraphConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInConsumed                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetConsumed(bool bInConsumed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetConsumed");

	Params::UMoviePipelineExecutorJob_SetConsumed_Params Parms{};

	Parms.bInConsumed = bInConsumed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelinePrimaryConfig* InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineExecutorJob::SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "SetConfiguration");

	Params::UMoviePipelineExecutorJob_SetConfiguration_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.OnDuplicated
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMoviePipelineExecutorJob::OnDuplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "OnDuplicated");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsUsingGraphConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorJob::IsUsingGraphConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsUsingGraphConfiguration");

	Params::UMoviePipelineExecutorJob_IsUsingGraphConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorJob::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsEnabled");

	Params::UMoviePipelineExecutorJob_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.IsConsumed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineExecutorJob::IsConsumed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "IsConsumed");

	Params::UMoviePipelineExecutorJob_IsConsumed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusProgress
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMoviePipelineExecutorJob::GetStatusProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetStatusProgress");

	Params::UMoviePipelineExecutorJob_GetStatusProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetStatusMessage
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMoviePipelineExecutorJob::GetStatusMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetStatusMessage");

	Params::UMoviePipelineExecutorJob_GetStatusMessage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetPresetOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelinePrimaryConfig* UMoviePipelineExecutorJob::GetPresetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetPresetOrigin");

	Params::UMoviePipelineExecutorJob_GetPresetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetGraphPreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieGraphConfig*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphConfig* UMoviePipelineExecutorJob::GetGraphPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetGraphPreset");

	Params::UMoviePipelineExecutorJob_GetGraphPreset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetGraphConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieGraphConfig*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieGraphConfig* UMoviePipelineExecutorJob::GetGraphConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetGraphConfig");

	Params::UMoviePipelineExecutorJob_GetGraphConfig_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineExecutorJob.GetConfiguration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelinePrimaryConfig* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelinePrimaryConfig* UMoviePipelineExecutorJob::GetConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineExecutorJob", "GetConfiguration");

	Params::UMoviePipelineExecutorJob_GetConfiguration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineQueue
// (None)

class UClass* UMoviePipelineQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineQueue");

	return Clss;
}


// MoviePipelineQueue MovieRenderPipelineCore.Default__MoviePipelineQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineQueue* UMoviePipelineQueue::GetDefaultObj()
{
	static class UMoviePipelineQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineQueue*>(UMoviePipelineQueue::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineQueue.SetQueueOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineQueue*         InConfig                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::SetQueueOrigin(class UMoviePipelineQueue* InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "SetQueueOrigin");

	Params::UMoviePipelineQueue_SetQueueOrigin_Params Parms{};

	Parms.InConfig = InConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.SetJobIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "SetJobIndex");

	Params::UMoviePipelineQueue_SetJobIndex_Params Parms{};

	Parms.InJob = InJob;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.GetQueueOrigin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineQueue*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineQueue* UMoviePipelineQueue::GetQueueOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "GetQueueOrigin");

	Params::UMoviePipelineQueue_GetQueueOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.GetJobs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UMoviePipelineExecutorJob*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "GetJobs");

	Params::UMoviePipelineQueue_GetJobs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DuplicateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DuplicateJob");

	Params::UMoviePipelineQueue_DuplicateJob_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::DeleteJob(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DeleteJob");

	Params::UMoviePipelineQueue_DeleteJob_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.DeleteAllJobs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMoviePipelineQueue::DeleteAllJobs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "DeleteAllJobs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.CopyFrom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineQueue*         InQueue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueue::CopyFrom(class UMoviePipelineQueue* InQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "CopyFrom");

	Params::UMoviePipelineQueue_CopyFrom_Params Parms{};

	Parms.InQueue = InQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueue.AllocateNewJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineExecutorJob>InJobType                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueue", "AllocateNewJob");

	Params::UMoviePipelineQueue_AllocateNewJob_Params Parms{};

	Parms.InJobType = InJobType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
// (None)

class UClass* UMoviePipelineQueueEngineSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineQueueEngineSubsystem");

	return Clss;
}


// MoviePipelineQueueEngineSubsystem MovieRenderPipelineCore.Default__MoviePipelineQueueEngineSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineQueueEngineSubsystem* UMoviePipelineQueueEngineSubsystem::GetDefaultObj()
{
	static class UMoviePipelineQueueEngineSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineQueueEngineSubsystem*>(UMoviePipelineQueueEngineSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.SetConfiguration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMovieRenderDebugWidget>InProgressWidgetClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRenderPlayerViewport                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueueEngineSubsystem::SetConfiguration(TSubclassOf<class UMovieRenderDebugWidget> InProgressWidgetClass, bool bRenderPlayerViewport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "SetConfiguration");

	Params::UMoviePipelineQueueEngineSubsystem_SetConfiguration_Params Parms{};

	Parms.InProgressWidgetClass = InProgressWidgetClass;
	Parms.bRenderPlayerViewport = bRenderPlayerViewport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutorInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorBase*  InExecutor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderQueueWithExecutorInstance");

	Params::UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutorInstance_Params Parms{};

	Parms.InExecutor = InExecutor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderQueueWithExecutor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMoviePipelineExecutorBase>InExecutorType                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorBase*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderQueueWithExecutor");

	Params::UMoviePipelineQueueEngineSubsystem_RenderQueueWithExecutor_Params Parms{};

	Parms.InExecutorType = InExecutorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.RenderJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMoviePipelineExecutorJob*   InJob                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMoviePipelineQueueEngineSubsystem::RenderJob(class UMoviePipelineExecutorJob* InJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "RenderJob");

	Params::UMoviePipelineQueueEngineSubsystem_RenderJob_Params Parms{};

	Parms.InJob = InJob;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.IsRendering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMoviePipelineQueueEngineSubsystem::IsRendering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "IsRendering");

	Params::UMoviePipelineQueueEngineSubsystem_IsRendering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineQueue*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineQueue* UMoviePipelineQueueEngineSubsystem::GetQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "GetQueue");

	Params::UMoviePipelineQueueEngineSubsystem_GetQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.GetActiveExecutor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMoviePipelineExecutorBase*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorBase* UMoviePipelineQueueEngineSubsystem::GetActiveExecutor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "GetActiveExecutor");

	Params::UMoviePipelineQueueEngineSubsystem_GetActiveExecutor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem.AllocateJob
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMoviePipelineExecutorJob*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMoviePipelineExecutorJob* UMoviePipelineQueueEngineSubsystem::AllocateJob(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoviePipelineQueueEngineSubsystem", "AllocateJob");

	Params::UMoviePipelineQueueEngineSubsystem_AllocateJob_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieRenderPipelineCore.MoviePipelineRenderPass
// (None)

class UClass* UMoviePipelineRenderPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineRenderPass");

	return Clss;
}


// MoviePipelineRenderPass MovieRenderPipelineCore.Default__MoviePipelineRenderPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineRenderPass* UMoviePipelineRenderPass::GetDefaultObj()
{
	static class UMoviePipelineRenderPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineRenderPass*>(UMoviePipelineRenderPass::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineShotConfig
// (None)

class UClass* UMoviePipelineShotConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineShotConfig");

	return Clss;
}


// MoviePipelineShotConfig MovieRenderPipelineCore.Default__MoviePipelineShotConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineShotConfig* UMoviePipelineShotConfig::GetDefaultObj()
{
	static class UMoviePipelineShotConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineShotConfig*>(UMoviePipelineShotConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
// (None)

class UClass* UMoviePipelineVideoOutputBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoviePipelineVideoOutputBase");

	return Clss;
}


// MoviePipelineVideoOutputBase MovieRenderPipelineCore.Default__MoviePipelineVideoOutputBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMoviePipelineVideoOutputBase* UMoviePipelineVideoOutputBase::GetDefaultObj()
{
	static class UMoviePipelineVideoOutputBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoviePipelineVideoOutputBase*>(UMoviePipelineVideoOutputBase::StaticClass()->DefaultObject);

	return Default;
}

}


