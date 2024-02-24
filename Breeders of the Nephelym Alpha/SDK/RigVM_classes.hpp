#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D0 (0x2F8 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	struct FRigVMMemoryContainer                 WorkMemoryStorage;                                 // 0x28(0xA0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_651[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMMemoryContainer                 LiteralMemoryStorage;                              // 0xD0(0xA0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_653[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x178(0x30)(NativeAccessSpecifierPublic)
	uint8                                        Pad_658[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMInstructionArray                Instructions;                                      // 0x1B0(0x10)(Transient, NativeAccessSpecifierPrivate)
	struct FRigVMExecuteContext                  Context;                                           // 0x1C0(0x58)(Transient, NativeAccessSpecifierPrivate)
	TArray<class FName>                          FunctionNamesStorage;                              // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_663[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x248(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x258(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_665[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                DeferredVMToCopy;                                  // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URigVM* GetDefaultObj();

	void SetParameterValueVector2D(class FName& InParameterName, struct FVector2D& InValue, int32 InArrayIndex);
	void SetParameterValueVector(class FName& InParameterName, struct FVector& InValue, int32 InArrayIndex);
	void SetParameterValueTransform(class FName& InParameterName, struct FTransform& InValue, int32 InArrayIndex);
	void SetParameterValueString(class FName& InParameterName, const class FString& InValue, int32 InArrayIndex);
	void SetParameterValueQuat(class FName& InParameterName, struct FQuat& InValue, int32 InArrayIndex);
	void SetParameterValueName(class FName& InParameterName, class FName& InValue, int32 InArrayIndex);
	void SetParameterValueInt(class FName& InParameterName, int32 InValue, int32 InArrayIndex);
	void SetParameterValueFloat(class FName& InParameterName, float InValue, int32 InArrayIndex);
	void SetParameterValueBool(class FName& InParameterName, bool InValue, int32 InArrayIndex);
	class FString GetRigVMFunctionName(int32 InFunctionIndex);
	struct FVector2D GetParameterValueVector2D(class FName& InParameterName, int32 InArrayIndex);
	struct FVector GetParameterValueVector(class FName& InParameterName, int32 InArrayIndex);
	struct FTransform GetParameterValueTransform(class FName& InParameterName, int32 InArrayIndex);
	class FString GetParameterValueString(class FName& InParameterName, int32 InArrayIndex);
	struct FQuat GetParameterValueQuat(class FName& InParameterName, int32 InArrayIndex);
	class FName GetParameterValueName(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterValueInt(class FName& InParameterName, int32 InArrayIndex);
	float GetParameterValueFloat(class FName& InParameterName, int32 InArrayIndex);
	bool GetParameterValueBool(class FName& InParameterName, int32 InArrayIndex);
	int32 GetParameterArraySize(class FName& InParameterName);
	bool Execute(class FName& InEntryName);
	int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName& InMethodName);
};

}


