#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProgressionRuntime.PowerLevelFunctionLibrary
class UPowerLevelFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPowerLevelFunctionLibrary* GetDefaultObj();

	bool LessThan_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B);
	bool LessEqual_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B);
	bool GreaterThan_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B);
	bool GreaterEqual_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B);
	bool EqualEqual_FPowerLevel(struct FPowerLevel& A, struct FPowerLevel& B);
};

// 0x0 (0x28 - 0x28)
// Class ProgressionRuntime.PowerLevelInterface
class IPowerLevelInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPowerLevelInterface* GetDefaultObj();

	bool GetPowerLevel(struct FPowerLevel* OutPowerLevel);
};

}


