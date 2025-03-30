package com.example.dataaccess.repository.payment;


import com.example.dataaccess.entity.payment.Payment;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.Optional;

@Repository
public interface PaymentRepository extends JpaRepository<Payment, Long> {
    Optional<Payment> findFirstByNameEqualsIgnoreCase(String name);
}
