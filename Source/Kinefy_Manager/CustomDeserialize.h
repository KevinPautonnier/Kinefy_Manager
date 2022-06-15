// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomDeserialize.generated.h"

/**
 * 
 */
UCLASS()
class KINEFY_MANAGER_API UCustomDeserialize : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, CATEGORY = "Serialize")
	static FString Custom_BytesToString(const TArray<uint8>& input);
};
