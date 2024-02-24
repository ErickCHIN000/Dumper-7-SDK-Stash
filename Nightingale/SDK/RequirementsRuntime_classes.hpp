#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RequirementsRuntime.Requirement
class URequirement : public UObject
{
public:

	static class UClass* StaticClass();
	static class URequirement* GetDefaultObj();

	bool Evaluate(class UObject* ContextObject);
};

// 0x0 (0x28 - 0x28)
// Class RequirementsRuntime.FalseRequirement
class UFalseRequirement : public URequirement
{
public:

	static class UClass* StaticClass();
	static class UFalseRequirement* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class RequirementsRuntime.AnyRequirement
class UAnyRequirement : public URequirement
{
public:
	TArray<class URequirement*>                  Requirements;                                      // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnyRequirement* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class RequirementsRuntime.AllRequirement
class UAllRequirement : public URequirement
{
public:
	TArray<class URequirement*>                  Requirements;                                      // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAllRequirement* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class RequirementsRuntime.NotRequirement
class UNotRequirement : public URequirement
{
public:
	class URequirement*                          Requirement;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNotRequirement* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RequirementsRuntime.RequirementFunctionLibrary
class URequirementFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URequirementFunctionLibrary* GetDefaultObj();

	bool EvaluateRequirement(class URequirement* Requirement, class AActor* Protagonist);
};

// 0x0 (0x28 - 0x28)
// Class RequirementsRuntime.TrueRequirement
class UTrueRequirement : public URequirement
{
public:

	static class UClass* StaticClass();
	static class UTrueRequirement* GetDefaultObj();

};

}


