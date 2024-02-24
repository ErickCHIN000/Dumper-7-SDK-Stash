#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Grpc.ServiceStatusFunctionLibrary
class UServiceStatusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UServiceStatusFunctionLibrary* GetDefaultObj();

	void IsSuccess(struct FOnlineServiceStatus& Status, bool* bIsSuccess);
};

}


